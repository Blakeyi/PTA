//#include<iostream>
//using namespace std;
//#include <iomanip>
//int main()
//{
//	char a[51]; int k = 0, j = 0; double b = 1; char c;
//	cin >> a;
//	if (a[0]=='-')
//		{
//			b = b*1.5;
//			for (int i = 0; a[i] != '\0'; i++)
//			{
//				c = a[i];
//			}
//			if (c %2== 0)
//				b = b * 2;
//			for (int i = 0; a[i] != '\0'; i++)
//			{
//				if (a[i] == '2')
//					k++;
//				j++;
//				
//			}
//			j = strlen(a);?1?7?1?7strlen?1?7?1?7?1?7?1?7?1?7?1?7øA?1?7?1?7
//			j = j - 1;
//			b = double(k) / double(j)*b * 100;
//		}
//	else
//	{
//		for (int i = 0; a[i] != '\0'; i++)
//		{
//			c = a[i];
//		}
//		if (c %2== 0)
//			b = b * 2;
//		for (int i = 0; a[i] != '\0'; i++)
//		{
//			if (a[i] == '2')
//				k++;
//			j++;
//		}
//		b = double(k) / double(j)*b * 100;
//	}
//	
//	
//	
//
//	cout << fixed << setprecision(2) << b<<"%"<<endl;
//	//cout << setprecision(2) << a;
//	system("pause");
//	return 0;
//
//}

#include<iostream>
using namespace std;
#include <iomanip>
int main()
{
	char a[51]; int k = 0, len=0; double b = 1; char c;
	cin >> a;
	len = strlen(a);
	if (a[0]=='-')
		{
			b = b*1.5;
			if (a[len-1]%2==0)
				b = b * 2;
			for (int i = 0; a[i] != '\0'; i++)
			{
				if (a[i] == '2')
					k++;	
			}
			//j = strlen(a);?1?7?1?7strlen?1?7?1?7?1?7?1?7?1?7?1?7øA?1?7?1?7
			
			b = double(k) / double(len-1)*b * 100;
		}
	else
	{
		if (a[len - 1] % 2 == 0)
			b = b * 2;
		for (int i = 0; a[i] != '\0'; i++)
		{
			if (a[i] == '2')
				k++;
		}

		b = double(k) / double(len)*b * 100;
	}
	
	
	

	cout << fixed << setprecision(2) << b<<"%"<<endl;
	//cout << setprecision(2) << a;
	system("pause");
	return 0;

}

//#include<iostream>
//using namespace std;
#include <iomanip>
int main()
{
	long long a; int i = 0, j = 0; double b = 1;
	cin >> a;
	if (a < 0)
	{
		b = b*1.5;
		a = a*(-1);
	}
	if (a % 2 == 0)
		b = b * 2;
	while (a)
	{
		if (a % 10 == 2)
			i++;
		a = a / 10;
		j++;
	}
	b = double(i) / double(j)*b * 100;

	cout << fixed << setprecision(2) << b << "%" << endl;
	//cout << setprecision(2) << a;
	//	system("pause");
	return 0;

}