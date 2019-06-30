#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int getNum(int y)
{
	int arr[10] = {0,0,0,0,0,0,0,0,0,0};
	int num=0;
	if (y < 10)
		arr[0] = 3;
	else if (y<100)
		arr[0] = 2;
	else if (y<1000)
		arr[0] = 1;
	
	while (y % 10>=0)
	{
		arr[y % 10 ]++;
		y = y / 10;
		if (y == 0)
			y = -1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i]>0)
			num++;
	}
	return num;

}
int main()
{
	int year, num;
	cin >> year >> num;
	int year1 = year;
	while (num != getNum(year))
	{
		year++;
	}
	if (year < 10)
		cout << year - year1 << " 000" << year;
	else if (year<100)
		cout << year - year1 << " 00" << year;

	else if (year<1000)
		cout << year - year1 << " 0" << year;
	else
		cout << year-year1<<" "<<year;
	
	system("pause");
	return 0;
}