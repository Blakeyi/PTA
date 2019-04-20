#include<iostream>
using namespace std;
int main()
{
	int a, b; int sum,j;
	sum = j = 0;
	cin >> a;
	cin >> b;
	for (int i = a; i <= b; i++)
	{
		sum = sum + i;
		if (i==-100)
			cout << " " << i;
		else if (i <= -10 || i == 100)
			cout << "  " << i;
		if ((-10<i&&i<0 )|| (100>i&&i > 9))
			cout << "   " << i;
		if (i>=0&&i<10)
			cout << "    " << i;
		j++;
		if (j == 5)
		{
			cout << endl;
			j = 0;
		}

	}
	if ((b-a+1)%5==0)
		cout << "sum=" << sum;
	else
		cout <<endl<< "sum=" << sum;
	system("pause");
	return 0;
}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int A, B;
//	cin >> A >> B;
//	int count = 0;
//	int sum = 0;
//	for (int i = A; i <= B; i++)
//	{
//		sum += i;
//		count++;
//		cout << setw(5) << i;
//		if (count % 5 == 0)
//		{
//			cout << endl;
//		}
//		else if (i == B)
//		{
//			cout << endl;
//		}
//	}
//	cout << "Sum = " << sum << endl;
//	system("pause");
//	return 0;
//}