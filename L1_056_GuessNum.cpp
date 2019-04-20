#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int, string> m;
	map <int, string> ::const_iterator m_AcIter,m_BcIter;
	int num,n,average=0;
	string str;
	ifstream f("L1_056_GuessNum.txt");
	f >> num;
	for (int i = 0; i < num; i++)
	{
		f >> str >> n;
		average += n;
		m.insert(pair<int, string>(n, str));
		//m1.insert(pair<int, int>(i, n));
	}
	average /= num;
	average /= 2;
	int i = average, j= average, r,l;
	while(1)
	{
		m_AcIter=m.find(i);
		m_BcIter = m.find(j);
		if (m_AcIter != m.end() || m_BcIter != m.end())//任意一个有值
		{
			if (m_AcIter!=m.end())
			{
				cout << average << " " << m_AcIter->second;
				break;
			}
			else if (m_BcIter != m.end())
			{
				cout << average << " " << m_BcIter->second;
				break;
			}
		}
		else
		{
			i++; j--;
		}
		
		
	}
	return 0;
}

//#include<iostream>
//#include<cstdio>
//#include<cmath>
//using namespace std;
//struct E{
//	char name[11];
//	int num;
//}a[10001];
//int main(){
//	int n, sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++){
//		scanf("%s%d", a[i].name, &a[i].num);
//		sum += a[i].num;
//	}
//	int avg = (sum / n) / 2, minm = 11111, tag;
//	for (int i = 0; i<n; i++){
//		if (abs(avg - a[i].num)<minm){
//			minm = abs(avg - a[i].num);
//			tag = i;
//		}
//	}
//	printf("%d %s\n", avg, a[tag].name);
//	return 0;
//}
