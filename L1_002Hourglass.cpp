
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char s;
	int sum = 0 ; int m = 1; int  n; int i = 0;
	int a = 1; int k = 1; int b = 1; int sub;
	cin >> n;
	cin >> s;
	while((sum*2+1) <= n)
	{	
		sub = n - (sum * 2 + 1);
		m += 2;
		sum += m;
		i++;
		
	}

	m -= 2;
	i--;
	for (int j=m; j>0; j -= 2)
	{
		if (j == m){}
		else
		{
			for (a=b ; a>0; a--)
				cout << " ";
			b++;
		}
		for (k=j; k > 0; k--)
			cout << s;
		cout << endl;

		
	}
	if (i - 1>=0)
	{

		for (int j = 3; j <= m; j += 2)
		{
			if (j == m){}
			else
			{
				for (a=i-1; a>0; a--)
					cout << " ";
				if (i-1>0) i--;
			}
			
			for (k = j; k > 0; k--)
				cout << s;
			cout << endl;
		}
	}

	cout << sub;
	cin.get();
	cin.get();



}
