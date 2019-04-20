//#include<iostream>
//#include <stdlib.h>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//	int x;
//	__int64  s,n;
//	char num[20][21] = {"1","11","111","1111","11111","111111","1111111","11111111","111111111","1111111111",
//		"11111111111","111111111111", "1111111111111","11111111111111","111111111111111","1111111111111111","11111111111111111",
//		"111111111111111111","1111111111111111111" ,"11111111111111111111" };
//	cin >> x;
//	for (int  i = 0; i < 20; i++)
//	{
//		s = _atoi64(num[i]);
//		if (s%x == 0)
//		{
//			n = s / x;
//			cout << n << " " << i+1;
//			break;
//		}
//		
//	}
//
//}


//#include <iostream>
//#include<bit/stdc++.h>
//
//using namespace std;
//
//typedef unsigned long long ll;
//int main() {
//	ll N, big = 1, cnt = 1;;
//	scanf_s("%lld", &N);
//	while (big < N) {//先找到N附近的光棍
//		big *= 10;
//		big += 1;
//		++cnt;
//	}
//	while (1) {//除法公式分解，可以用于大数除法
//		printf_s("%lld", big / N);
//		if (big % N == 0) {
//			break;
//		}
//		else {
//			big %= N;
//			big *= 10;
//			big += 1;
//			++cnt;
//		}
//	}
//	printf_s(" %lld", cnt);
//	return 0;
//}
/*万进制*/
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	void factorial(int n);  //阶乘函数
//
//	int n;
//
//	while (cin >> n)
//		factorial(n);
//
//	return 0;
//}
//
//void factorial(int n)
//{//万进制
//	int a[10001];//用于存储数值
//	int places, carry, i, j;
//
//	a[0] = 1;
//	places = 0;   //当前数的总位数
//	for (i = 1; i <= n; i++)
//	{
//		carry = 0;   //进位
//
//		for (j = 0; j <= places; j++)
//		{//先从低位（每十进制的四位为万进制的一位）开始计算，由低到高，按照乘法规则相乘，进位
//			a[j] = a[j] * i + carry;//相乘，加上进位
//			carry = a[j] / 10000;//求出进位（后面加到高位）
//			a[j] %= 10000;//留下取余后的数字
//		}
//
//		if (carry > 0)  //如果一个数的总前一位大于一万，则向前进位
//		{
//			places++;//for循环后的进位是新增加的位
//			a[places] = carry;
//		}
//	}
//
//	/*
//	  输出
//	  最高位原样输出，
//	  其他位小于1000的，高位补0
//	*/
//	cout << a[places];
//	for (i = places - 1; i >= 0; i--)//从后面开始输出
//		cout << setw(4) << setfill('0') << a[i];
//
//	cout << endl;
//}


//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[1000] = {0}, x, len = 0;
//	cin >> x;
//	while (true) {
//		int remainder = 0;
//		for (int i = len / 4 + 1; i > 0; i--)
//		{
//			int num = remainder * 10000 + a[i];
//			remainder = num % x;
//		}
//		if (remainder == 0 && len != 0) {//已除尽
//			for (int i = len / 4 + 1; i > 0; i--)
//			{
//				int num = remainder * 10000 + a[i];
//				remainder = num % x;
//				a[i] = num / x;
//			}
//			int flag = 0;
//			for (int i = len / 4 + 1; i > 0; i--)
//			{
//				if (flag != 0)printf("%04d", a[i]);
//				if (a[i] != 0 && flag == 0) {
//					cout << a[i];
//					flag++;
//				}
//			}
//			cout << " " << len << endl;
//			break;
//		}
//		else {
//			a[len / 4 + 1] = a[len / 4 + 1] * 10 + 1;
//			len++;
//		}
//	}
//
//	return 0;
//}