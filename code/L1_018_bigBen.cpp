#include<iostream>
using namespace std;
int main()
{
	char t[5]; int h, m;
	cin >> t;
	h = (t[0]-'0') * 10 + (t[1]-48);
	m = (t[3] - '0') * 10 + (t[4] - 48);
	if (h <= 12 & h >= 0)
		cout << "Only " << t<< ".  Too early to Dang.";
	else
	{
		if (m == 0)
		{
			for (int i = h - 12; i > 0; i--)
				cout << "Dang";
			
		}
		else
		{
			for (int i = h - 11; i > 0; i--)
				cout << "Dang";
			
		}	
	}
	system("pause");
	return 0;
}