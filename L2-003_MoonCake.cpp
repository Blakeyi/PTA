#include<bits\stdc++.h>
using namespace std;
const int maxn = 1005;
struct whole{
	double w, v;
	double pro;
}a[maxn];
bool cmp(whole x, whole y){
	return x.pro < y.pro;//决定排序方式
}
int main()
{
	int n, d;
	while (~scanf_s("%d%d", &n, &d)){
		for (int i = 0; i<n; i++) scanf_s("%lf", &a[i].w);
		for (int i = 0; i<n; i++) { scanf_s("%lf", &a[i].v); a[i].pro = a[i].v / a[i].w; }
		sort(a, a + n, cmp);
		double sum = 0;
		for (int i = 0; i<n; i++){
			if (d >= a[i].w){
				sum += a[i].v;
				d -= a[i].w;
			}
			else{
				sum += a[i].pro * d;
				break;
			}
		}
		printf_s("%.2lf\n", sum);
	}
	return 0;

	
}