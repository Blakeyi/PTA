#include<iostream>
#include<fstream>
#include <math.h>
using namespace std;
int a, b, c, d, e, f, g, h, i, j;
void isIntNum(int n)
{
	switch (n)
	{
	case 0:a++; break;
	case 1:b++; break;
	case 2:c++; break;
	case 3:d++; break;
	case 4:e++; break;
	case 5:f++; break;
	case 6:g++; break;
	case 7:h++; break;
	case 8:i++; break;
	case 9:j++; break;
	default:
		break;
	}
}
int main()
{
	/*int num,num1;
	cin >> num;
	num1 = num;
	if (num1 == 0) a++;
	while (num1 > 0)
	{
		isIntNum(num1 % 10);
		num1 = num1 / 10;
	}

	if (a>0) cout << 0 << ":" << a << endl;
	if (b>0) cout << 1 << ":" << b << endl;
	if (c>0) cout << 2 << ":" << c << endl;
	if (d>0) cout << 3 << ":" << d << endl;
	if (e>0) cout << 4 << ":" << e << endl;
	if (f>0) cout << 5 << ":" << f << endl;
	if (g>0) cout << 6 << ":" << g << endl;
	if (h>0) cout << 7 << ":" << h << endl;
	if (i>0) cout << 8 << ":" << i << endl;
	if (j>0) cout << 9 << ":" << j << endl;*/


	char number[1001];
	char sort[10] = { 0 };
	cin >> number;
	for (int i = 0; number[i] != '\0'; i++)
	{
		sort[number[i] - '0']++;
	}
	for (int i = 0; i<10; i++)
	{
		if (sort[i] != 0)
			cout << i << ":" << (int)sort[i]<<endl;
	}


	cin.get();
	system("pause");
	return 0;
}