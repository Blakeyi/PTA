//#include<iostream>
//#include"math.h"
//using namespace std;
//int isPrime(long long num)
//{
//	if (num == 1)
//	{
//		return 0;
//
//	}
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num%i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int flag[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
//
//	for (int i = 0; i < n; i++)
//	{
//		long long int a;
//		cin >> a;
//		flag[i] = isPrime(a);
//
//
//	}
//	for (int i = 0; flag[i] >= 0; i++)
//	{
//		if (flag[i])
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	long long int n, i, j, k;
//	long long int number;
//	cin >> n;
//	for (i = 0; i<n; i++)
//	{
//		k = 0;
//		cin >> number;
//		if (number == 1)cout << "No" << endl;
//		else{
//			for (j = 2; j <= sqrt(number); j++)
//			{
//				if (number%j == 0)k = 1, j = number;
//			}
//			if (k == 0)cout << "Yes" << endl;
//			else cout << "No" << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}