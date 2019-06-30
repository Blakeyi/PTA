//#include<iostream>
//#include<iomanip>
//#include<string>
//#include "math.h"
//using namespace std;
//double getArea(double x[], double y[])
//{
//	if ((x[0] == x[1] && x[1] == x[2]) || (y[0] == y[1] && y[1] == y[2]))
//		return 0;
//	if (x[2] != 0 && x[1] != 0 && x[0] != 0 && ((y[0] / x[0]) == (y[1] / x[1])&& (y[1] / x[1] )==( y[2] / x[2])))
//		return 0;
//	else if (x[0] == x[1] && y[0] == y[1])
//		return 0;
//	else if (x[0] == x[2] && y[0] == y[2])
//		return 0;
//	else if (x[1] == x[2] && y[1] == y[2])
//		return 0;
//	else
//	{
//		double a = (0.5*(x[0] * y[1] + x[1] * y[2] + x[2] * y[0] - x[0] * y[2] - x[1] * y[0] - x[2] * y[1]));
//		if (a < 0)
//			a = -1 * a;
//		return a;
//	}
//		
//
//
//}
//int main()
//{
//	double x[5000] , y[5000] ;
//	double r[5000], p[5000];
//	double x1[3] = { 1, 2, 3 }, y1[3]  = { 1, 2, 3 };
//	int k = 0; 
//	double b;
//	double min=10000;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x[i] >> y[i];
//		r[i] = sqrt(x[i] * x[i] + y[i] * y[i]);
//		p[i] = atan(y[i] / x[i]);
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (p[i]>p[j])
//			{
//				double temp;
//				temp = r[i];
//				r[i] = r[j];
//				r[j] = temp;
//
//				temp = p[i];
//				p[i] = p[j];
//				p[j] = temp;
//
//				temp = x[i];
//				x[i] = x[j];
//				x[j] = temp;
//
//				temp = y[i];
//				y[i] = y[j];
//				y[j] = temp;
//			}
//			else if (p[i] == p[j])
//			{
//				if (r[i] > r[j])
//				{
//					double temp;
//					temp = r[i];
//					r[i] = r[j];
//					r[j] = temp;
//
//					temp = p[i];
//					p[i] = p[j];
//					p[j] = temp;
//
//					temp = x[i];
//					x[i] = x[j];
//					x[j] = temp;
//
//					temp = y[i];
//					y[i] = y[j];
//					y[j] = temp;
//				}
//			}
//
//		}
//		
//	}
//	for (int i = 1; i < n-1; i++)
//	{
//		x1[0] = x[i-1]; y1[0] = y[i-1];
//		x1[1] = x[i]; y1[1] = y[i];
//		x1[2] = x[i+1]; y1[2] = y[i+1];
//		b = getArea(x1, y1);
//		if (b < min)
//			min = b;
//		cout << "s=" << b << endl;
//		if (min==0)
//		{
//			break;
//		}
//		
//	}
//	cout <<fixed<<setprecision(3)<<min;
//	system("pause");
//	return 0;
//}
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
const int N = 50010;
int n;
struct node{
	long long x, y;
}p[N], temp[N];
bool cmp(node a, node b) {
	return b.y*a.x>a.y*b.x;
}
int main() {
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%lld %lld", &p[i].x, &p[i].y);
	}
	double ans = pow(10, 18) / 2;
	for (int i = 1; i <= n; i++)
	{
		int t = 1;
		for (int j = 1; j <= n; j++)
		{
			if (i == j) continue;
			temp[t].x = p[j].x - p[i].x;
			temp[t].y = p[j].y - p[i].y;
			t++;
		}
		sort(temp + 1, temp + t, cmp);
		for (int j = 1; j<t - 1; j++)
		{
			ans = min(ans, (temp[j].x*temp[j + 1].y - temp[j + 1].x*temp[j].y)*0.5);
			//ans的公式就是正常的坐标计算法
		}
	}
	printf("%.3f", ans);
	return 0;
}
