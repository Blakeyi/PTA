//#include<iostream>
//#include <string>
//#include "math.h"
//using namespace std;
//int main()
//{
//	string str1, str2;
//	int m1=0, m2=0;
//	int k1 = 0, k2 = 0;
//	int m=0, n=0;
//	cin >> str1 >> str2;
//	int length1 = str1.length();
//	int length2 = str2.length();
//
//	for (int i = 0; i < length1; i++)
//	{
//		if (str1[0] == '0')
//			k1 = 1;
//		if (str1[i] >= '0'&&str1[i] <= '9')
//			;
//		else
//			m = 1;
//	}
//
//	for (int i = 0; i < length2; i++)
//	{
//		if (str2[0] == '0')
//			k2 = 1;
//		if (str2[i] >= '0'&&str2[i] <= '9')
//			;
//		else
//			n = 1;
//	}
//	if (k1 == 0 && k2 == 0)
//	{
//		if (m == 0 && n == 0)
//		{
//			for (int i = 0; i < length1; i++)
//				m1 += (str1[i] - '0')*(pow(10, length1 - i - 1));
//			for (int i = 0; i < length2; i++)
//				m2 += (str2[i] - '0') * (pow(10, length2 - i - 1));
//			if (m1>1000&&m2<=1000)
//			{
//				str1 = '?';
//				cout << str1 << " + " << str2 << " = " << "?";
//			}
//			else if (m2>1000&&m1<1000)
//			{
//				str2 = '?';
//				cout << str1 << " + " << str2 << " = " << "?";
//			}
//			else if (m2>1000 && m1>1000)
//				cout << "?" << " + " << "?" << " = " << "?";
//			else
//			cout << str1 << " + " << str2 << " = " << (m1 + m2);
//		}
//		else if ((m == 1 && n == 0) || k1 == 1)
//		{
//
//			for (int i = 0; i < length2; i++)
//				m2 += (str2[i] - '0') * (pow(10, length2 - i - 1));
//			if (m2>1000)
//				str2 = '?';
//			cout << "?" << " + " << str2 << " = " << "?";
//		}
//		else if ((m == 0 && n == 1) || k2 == 1)
//		{
//
//			for (int i = 0; i < length1; i++)
//				m2 += (str1[i] - '0') * (pow(10, length1 - i - 1));
//			if (m1>1000)
//				str1 = '?';
//			cout << str1 << " + " << "?" << " = " << "?";
//		}
//		else
//			cout << "?" << " + " << "?" << " = " << "?";
//	}
//	else if (k1==0&&k2==1)
//		cout << "str1" << " + " << "?" << " = " << "?";
//	else if (k1 == 1 && k2 == 0)
//		cout << "?" << " + " << str2 << " = " << "?";
//	else
//		cout << "?" << " + " << "?" << " = " << "?";
//		
//
//	system("pause");
//	return 0;
//
//}
///*不能用string接收，因为它会自动跳过空格*/
#include<iostream>
#include <string>
#include "math.h"
using namespace std;
int main()
{
	string str1, str2,a;
	int m1 = 0, m2 = 0,flag=0;
	int m = 0, n = 0;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == ' ')
		{
			flag = i;
			break;
		}
	}
	for (int i = 0; i < flag; i++)
		str1 += a[i];
	for (int i = flag + 1; i < a.length(); i++)
		str2 += a[i];
	//cin >> str1 >> str2;
	int length1 = str1.length();
	int length2 = str2.length();
	
	if (str1.length() == 0)
		m = 1;
	for (int i = 0; i < length1; i++)
	{
		if (str1[0] == '0')
			m = 1;
		if (str1[i] >= '0'&&str1[i] <= '9')
			;
		else
			m = 1;
	}



	for (int i = 0; i < length2; i++)
	{
		if (str2[0] == '0')
			n= 1;
		if (str2[i] >= '0'&&str2[i] <= '9')
			;
		else
			n = 1;
	}

	if (m == 0 || n == 0)
	{
		for (int i = 0; i < length2; i++)
			m2 += (str2[i] - '0') * (pow(10, length2 - i - 1));

		for (int i = 0; i < length1; i++)
			m1 += (str1[i] - '0') * (pow(10, length1 - i - 1));
		if (m1>1000)
			m = 1;
		if (m2>1000)
			n = 1;
	}
	
	
	if ((m == 1 && n == 0) )
	{
			cout << "?" << " + " << str2 << " = " << "?";

	}
	else if (m == 0 && n == 1 )
	{
			cout << str1<< " + " << "?" << " = " << "?";
	}
	else if (m == 0 && n == 0)
	{
		cout << m1 << " + " << m2 << " = " << m1+m2;
	}
	else
		cout << "?" << " + " << "?" << " = " << "?";

		
	system("pause");
	return 0;

}


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string a;
//	getline(cin, a);
//	int m = 0, n = 0;//所有字符串的和
//	int x = 0, y = 0;//只有数字的和
//	int i = 0;
//	for (i; i<a.length(); i++)
//	{
//		if (a[i] == ' ') break;
//		m = m * 10 + (a[i] - '0');
//		if (a[i] >= '0'&&a[i] <= '9')
//		{
//			x = x * 10 + (a[i] - '0');
//		}
//	}
//	for (int j = i + 1; j<a.length(); j++)
//	{
//		//if(a[j]==' ') break; 
//		n = n * 10 + (a[j] - '0');
//		if (a[j] >= '0'&&a[j] <= '9')
//		{
//			y = y * 10 + (a[j] - '0');
//		}
//	}
//	if (m <= 1000 && m >= 1 && m == x)
//		cout << m;
//	else
//		cout << "?";
//	cout << " + ";
//	if (n <= 1000 && n >= 1 && n == y)
//		cout << n;
//	else
//		cout << "?";
//	cout << " = ";
//	if (n <= 1000 && n >= 1 && m <= 1000 && m >= 1 && m == x&&n == y)
//		cout << m + n;
//	else
//		cout << "?";
//	return 0;
//}