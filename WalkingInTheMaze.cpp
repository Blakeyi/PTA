#include <iostream>
#include <queue>
#define maxn 999
int mazeArr[maxn][maxn];                                //表示的是01矩阵
int stepArr[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; //表示上下左右4个方向
int visit[maxn][maxn];                                  //表示该点是否被访问过，防止回溯，回溯很耗时。
int n;
struct Node
{
  int x;
  int y;
  int step;
  Node(int x1, int y1, int step1) : x(x1), y(y1), step(step1) {}
};
int BFS()
{
  Node node(0, 0, 0);
  std::queue<Node> q;
  while (!q.empty()) //清空队列
    q.pop();
  q.push(node);
  while (!q.empty())
  {
    node = q.front();
    q.pop();
    if (node.x == n - 1 && node.y == n - 1)
    {
      return node.step;
    }
    visit[node.x][node.y] = 1;
    for (int i = 0; i < 4; i++)
    { //依次上下左右移动尝试
      int x = node.x + stepArr[i][0];
      int y = node.y + stepArr[i][1];
      if (x >= 0 && y >= 0 && x < n && y < n && visit[x][y] == 0 && mazeArr[x][y] == 0)
      { //保证下个点不出界且没有被访问过且无障碍
        visit[x][y] = 1;
        Node next(x, y, node.step + 1);
        q.push(next); //入队
      }
    }
  }
  return -1;
}
int main()
{
  using namespace std;
  int a;
  while (cin >> n)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> mazeArr[i][j];
      }
    }
    int result = BFS();
    cout << result << endl;
  }

  return 0;
}