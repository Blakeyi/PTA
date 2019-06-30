#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	double num[10];
	char c[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> c[i] >> num[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (c[i] == 'F')
			cout << fixed << setprecision(2) << num[i] * 1.09<<endl;
		else
			cout << fixed << setprecision(2) << num[i] / 1.09<<endl;
	}


	system("pause");
	return 0;
}
