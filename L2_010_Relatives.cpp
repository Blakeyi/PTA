#include <iostream>
#include <vector>
using namespace std;
vector<int> fri;     //用来存储朋友关系，用vector是因为好初始化，当数组用
int enemy[101][101]; //用于存储敌人关系
int FindFri(int x)   //用于查找朋友,递归方法
{
  if (x == fri[x]) //说明x的朋友是自己，说明其没有朋友
    return x;
  FindFri(fri[x]);
}

void Union(int x, int y) //合并朋友关系
{
  //第一步，先找到x，y的朋友
  int frix = FindFri(x);
  int friy = FindFri(y);
  if (frix != friy)
    fri[frix] = friy;
}

int main()
{
  int n, m, k, x, y, z; //n为总人数，m为已知关系数，k为待查询关系,z代表两人之间的关系
  cin >> n >> m >> k;
  fri.resize(n + 1);
  for (int i = 1; i < n + 1; i++)
    fri[i] = i;
  for (int i = 0; i < m; i++)
  {
    cin >> x >> y >> z;
    if (z == 1) //如果x，y是朋友
      Union(x, y);
    else if (z == -1)
    {
      enemy[x][y] = 1;
      enemy[y][x] = 1;
    }
  }
  for (int i = 0; i < k; i++)
  {
    cin >> x >> y;
    if (FindFri(x) == FindFri(y) && enemy[x][y] == 0) //是朋友且不是敌人关系
      cout << "No problem" << endl;
    else if (FindFri(x) != FindFri(y) && enemy[x][y] == 0)
    {
      cout << "OK" << endl;
    }
    else if (FindFri(x) == FindFri(y) && enemy[x][y] == 1)
    {
      cout << "OK but..." << endl;
    }
    else if (FindFri(x) != FindFri(y) && enemy[x][y] == 1)
    {
      cout << "No way" << endl;
    }
  }

  return 0;
}

// #include <cstdio>
// #include <vector>
// using namespace std;
// vector<int> fri;
// int enemy[101][101];
// int findfri(int x)
// {
//   while (x != fri[x])
//     x = fri[x];
//   return x;
// }
// void Union(int a, int b)
// {
//   int fria = findfri(a);
//   int frib = findfri(b);
//   if (fria != frib)
//     fri[fria] = frib;
// }
// int main()
// {
//   int n, m, k, a, b, c;
//   scanf("%d %d %d", &n, &m, &k);
//   fri.resize(n + 1);
//   for (int i = 1; i <= n; i++)
//     fri[i] = i;
//   for (int i = 0; i < m; i++)
//   {
//     scanf("%d %d %d", &a, &b, &c);
//     if (c == 1)
//       Union(a, b);
//     else
//     {
//       enemy[a][b] = 1;
//       enemy[b][a] = 1;
//     }
//   }
//   for (int i = 0; i < k; i++)
//   {
//     scanf("%d %d", &a, &b);
//     if (findfri(a) == findfri(b) && enemy[a][b] == 0)
//       printf("No problem\n");
//     else if (findfri(a) != findfri(b) && enemy[a][b] == 0)
//       printf("OK\n");
//     else if (findfri(a) == findfri(b) && enemy[a][b] == 1)
//       printf("OK but...\n");
//     else if (enemy[a][b] == 1)
//       printf("No way\n");
//   }
//   return 0;
// }