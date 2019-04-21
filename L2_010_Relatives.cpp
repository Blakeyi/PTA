#include <cstdio>
#include <vector>
using namespace std;
vector<int> fri;
int enemy[101][101];
int findfri(int x)
{
    if(x != fri[x])//已经有亲戚了，直到找到没有亲戚的值后退出
        x = fri[x];//返回亲戚值
    return x;
}
void Union(int a, int b)
{
    int fria = findfri(a);
    int frib = findfri(b);
    if(fria != frib)
        fri[fria] = frib;
}
int main()
{
    int n, m, k, a, b, c;//n为总人数，m为总的已知的关系数，k为需要查询的条数
    scanf("%d %d %d", &n, &m, &k);
    fri.resize(n + 1);
    for(int i = 1; i <= n; i++)
        fri[i] = i;
    for(int i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(c == 1)
            Union(a, b);
        else {
            enemy[a][b] = 1;
            enemy[b][a] = 1;
        }
    }
    for(int i = 0; i < k; i++) {
        scanf("%d %d", &a, &b);
        if(findfri(a) == findfri(b) && enemy[a][b] == 0)
            printf("No problem\n");
        else if(findfri(a) != findfri(b) && enemy[a][b] == 0)
            printf("OK\n");
        else if(findfri(a) == findfri(b) && enemy[a][b] == 1)
            printf("OK but...\n");
        else if(enemy[a][b] == 1)
            printf("No way\n");
    }
    return 0;
}