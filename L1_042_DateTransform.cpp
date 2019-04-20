#include <iostream>
using namespace std;
int main()
{
	char year[5], month[3], date[3];
	char s[20];
	int count = 0;
	cin.getline(s, 20);
	for (int i = 0,j=0; i < 15; i++)
	{
		if (s[i] == '\0')
			break;
		if (s[i] == ' ');
		else if (s[i] == '-')
		{
			count++;
			j = 0;
		}
		else if (s[i] != '-')
		{
			if (count == 0)//说明是月
				month[j] = s[i];
			else if (count==1)//说明是日
			{
				date[j] = s[i];
			}
			else
				year[j] = s[i];
			j++;
		}
		
	}
	month[2] = '\0'; date[2] = '\0'; year[4] = '\0';
	cout << year << "-" << month << "-" << date << endl;
	
	return 0;
}