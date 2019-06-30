#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,r; char c;
	cin >> n >> c;
	if (n % 2 != 0)
		r = 0.5*n + 1;
	else
		r = 0.5*n;

	for (r; r > 0; r--)
	{
		for (int i = 0; i < n; i++)
			cout << c;
		cout << endl;
	}
	system("pause");
	return 0;
}