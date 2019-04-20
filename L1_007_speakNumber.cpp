#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cin >> a;
	int i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == '-')
			cout << "fu";
		else
		{
			switch ((int)(a[i]))
			{
				case 48:cout << "ling"; break;
				case 49:cout << "yi"; break;
				case 50:cout << "er"; break;
				case 51:cout << "san"; break;
				case 52:cout << "si"; break;
				case 53:cout << "wu"; break;
				case 54:cout << "liu"; break;
				case 55:cout << "qi"; break;
				case 56:cout << "ba"; break;
				case 57:cout << "jiu"; break;
			default:
				break;
			}

		}
		i++;
		if (a[i] == '\0');
		else
		cout << " ";
		
	}
	system("pause");
	return 0;
}