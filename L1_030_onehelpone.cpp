#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
int main()
{
	int N;
	cin >> N;
	string str[50];
	for (int i = 0; i < N; i++)
	{
		char c; string str1;
		cin >> c >> str1;
		str[i] = c + str1;
		//int m = str[i].length();
	}
	int n = N / 2;
	for (int i = 0; i < n; i++)
	{
		for (int m = N-1; m>0; m--)
		{
			if (str[m ].at(0) >= '0')
			{
				if (str[i].at(0) != str[m].at(0))
				{
					str[i].at(0) = '/';
					str[m].at(0) = '/';
					for (int j = 1; j < str[i].length(); j++)
					{
						cout << str[i].at(j);
					}
					cout << " ";
					for (int j = 1; j < str[m].length(); j++)
					{
						cout << str[m].at(j);
					}
					cout << endl;;
					break;

				}
			}
			
		}
		
	
	}
	system("pause");
	return 0;
}