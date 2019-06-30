#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, m, a[15], sum;
  double goal[10005];
  cin >> n >> k >> m;
  for (int i = 0; i < n; i++)
  {
    sum = 0;
    for (int j = 0; j < k; j++)
      scanf("%d", &a[j]);
    sort(a, a + k);
    for (int j = 1; j < k - 1; j++)
      sum += a[j];
    goal[i] = 1.0 * sum / (k - 2);
  }
  sort(goal, goal + n);
  for (int i = n - m; i < n; i++)
    printf("%.3lf%c", goal[i], i == n - 1 ? '\n' : ' ');
  return 0;
}
