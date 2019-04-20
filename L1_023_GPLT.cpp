#include<iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int length = str.length();
	int g = 0,p = 0,l=0,  t = 0;
	int max;
	for (int i = 0; i< length; i++)
	{
		if (str[i] == 'g' || str[i] == 'G')
			g++;
		else if (str[i] == 'p' || str[i] == 'P')
			p++;
		else if (str[i] == 'l' || str[i] == 'L')
			l++;
		else if (str[i] == 't' || str[i] == 'T')
			t++;
	}
	while (p || g || l || t)
	{
		if (g > 0)
		{
			cout << "G";
			g--;
		}
			
		if (p > 0)
		{
			cout << "P";
			p--;
		}
		if (l > 0)
		{
			cout << "L";
			l--;
		}
		if (t > 0)
		{
			cout << "T";
			t--;
		}
	}
	system("pause");
	return 0;

}