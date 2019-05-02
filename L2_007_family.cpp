#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
struct Family
{
  int id, fid, mid, num, area; //id本人, fid父亲, mid母亲, num房产数, area房产面积
  int cid[10];                 //孩子
} family[1005];
struct node
{
  int id, people;
  double num, area;
  bool flag = false;
} ans[10000];
int father[10000];
bool visit[10000];
int find(int x) //寻找父亲
{
  while (x != father[x])
    x = father[x];
  return x;
}
void Union(int a, int b)
{
  int faA = find(a);
  int faB = find(b);
  if (faA > faB)
    father[faA] = faB;
  else if (faA < faB)
    father[faB] = faA;
}
int cmp1(node a, node b) //排序比较函数
{
  if (a.area != b.area)
    return a.area > b.area;
  else
    return a.id < b.id;
}
int main()
{
  int n, k, cnt = 0;
  scanf("%d", &n);
  //father.resize(n + 1);
  for (int i = 0; i < 10000; i++)
    father[i] = i;
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d %d %d", &family[i].id, &family[i].fid, &family[i].mid, &k);
    visit[family[i].id] = true;
    if (family[i].fid != -1)
    {
      visit[family[i].fid] = true;
      Union(family[i].fid, family[i].id);
    }
    if (family[i].mid != -1)
    {
      visit[family[i].mid] = true;
      Union(family[i].mid, family[i].id);
    }
    for (int j = 0; j < k; j++)
    {
      scanf("%d", &family[i].cid[j]);
      visit[family[i].cid[j]] = true;
      Union(family[i].cid[j], family[i].id);
    }
    scanf("%d %d", &family[i].num, &family[i].area);
  }
  for (int i = 0; i < n; i++)
  {
    int id = find(family[i].id);
    ans[id].id = id;
    ans[id].num += family[i].num;
    ans[id].area += family[i].area;
    ans[id].flag = true;
  }
  for (int i = 0; i < 10000; i++)
  {
    if (visit[i])
      ans[find(i)].people++;
    if (ans[i].flag)
      cnt++;
  }
  for (int i = 0; i < 10000; i++)
  {
    if (ans[i].flag)
    {
      ans[i].num = (double)(ans[i].num * 1.0 / ans[i].people);
      ans[i].area = (double)(ans[i].area * 1.0 / ans[i].people);
    }
  }
  sort(ans, ans + 10000, cmp1);
  printf("%d\n", cnt);
  for (int i = 0; i < cnt; i++)
    printf("%04d %d %.3f %.3f\n", ans[i].id, ans[i].people, ans[i].num, ans[i].area);
  return 0;
}