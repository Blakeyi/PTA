#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
using namespace std;
const int inf = 0x3fffffff;
int main()
{
	int dis[500][500] = { inf };//存储城市之间的距离，dis[p][q]表示p城市和q城市之间的距离
	int rescueNum[500] = { 0 };//表示每个城市里的救援队伍数
	vector<int> path;//路径

	list<int> remainCity;//未经过的城市
	list<int>::iterator it;
	int st,end;//出发城市和终点城市
	int cityNum, fastRoad,currentCity,nextCity;
	int curPathLen,minPathLen;
	int minDis = inf;//最短距离

	cin >> cityNum >> fastRoad >> st >> end;
	for (int i = 0; i < cityNum; i++) 
	{
		cin >> rescueNum[i];
	}
	for (int i = 0; i < fastRoad; i++)
	{
		int x, y;
		cin >> x >> y;
		cin >> dis[x][y];
		dis[y][x] = dis[x][y];
		dis[i][i] = 0;//自己到自己距离设为0

		
	}
	currentCity = st;
	for (int i = 0; i < cityNum; i++)
	{
		remainCity.push_back(i);
	}
	remainCity.remove(st);
	path.push_back(st);
	while (true)
	{
		
		if (currentCity == end)
			break;
		for (it=remainCity.begin() ; it!=remainCity.end(); it++)
		{
			if (dis[currentCity][*it] != 0 && dis[currentCity][*it] < minDis)
			{
				minDis = dis[currentCity][*it];
				nextCity = *it;
			}
		}
		
		currentCity = nextCity;
		path.push_back(currentCity);
		remainCity.remove(currentCity);
		minDis = inf;
	}
	
	return 0;
}
/*const int maxv = 510;
const int inf = 0x3fffffff;
int n, m, st, ed;//n为城市数量，m为快速道路条数，st为出发城市，ed为目的城市
int G[maxv][maxv], weight[maxv];//weight为每个城市的救援队数量，G为城市之间的权重
int d[maxv],w[maxv],num[maxv],pre[510];//d存储距离
bool vis[maxv]={false};
void printpath(int v){
    if(v==st){
        printf("%d",v);
        return;
    }
    printpath(pre[v]);
    printf(" %d",v);
}
void Dijstra(int s){
    fill(d,d+maxv,inf);//填充最大值
    memset(num,0,sizeof(num));//填充0
    memset(w,0,sizeof(w));
    d[s]=0;
    w[s]=weight[s];
    num[s]=1;
    for(int i=0;i<n;i++){
        int u=-1,minm=inf;
        for(int j=0;j<n;j++){
            if(vis[j]==false&&d[j]<minm){
                u=j;
                minm=d[j];
            }
        }
        if(u==-1){
            return ;
        }
        vis[u]=true;//表示该点已经经过了
        for(int v=0;v<n;v++){
            if(vis[v]==false&&G[u][v]!=inf){
                if(d[u]+G[u][v]<d[v]){
                    d[v]=d[u]+G[u][v];
                    w[v]=w[u]+weight[v];
                    num[v]=num[u];
                    pre[v]=u;
                }else if(d[u]+G[u][v]==d[v]){
                if(w[u]+weight[v]>w[v]){
                    w[v]=w[u]+weight[v];
                    pre[v]=u;
                }
                num[v]+=num[u];
                }
            }
        }
    }
}
int main()
{
    scanf_s("%d%d%d%d",&n,&m,&st,&ed);
    for(int i=0;i<n;i++){
        scanf_s("%d",&weight[i]);
    }
    int u,v;
    fill(G[0],G[0]+maxv*maxv,inf);
    for(int i=0;i<m;i++){
        scanf_s("%d%d",&u,&v);
        scanf_s("%d",&G[u][v]);
        G[v][u]=G[u][v];
    }
    Dijstra(st);
    printf("%d %d\n",num[ed],w[ed]);
    printpath(ed);
    return 0;*/

