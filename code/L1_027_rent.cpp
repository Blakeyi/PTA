#include<iostream>
#include <string>
using namespace std;
int main()
{
	char num[11];
	char num1[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int  num2[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0};
	int  num3[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1 ,-1};
	int  num4[11] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,-1 };

	int flag = 0;
	cin >> num;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (num[i] == num1[j])
			{
				num2[j]++;
				break;
			}
				
		}
	}
	for (int i = 0,j=0; i < 10; i++)
	{
		
		if (num2[i]>0)
		{
			num3[j] = i;
			j++;
		}
	}
	for (int i = 0; i<10; i++)
	{
		if (num3[i] < 0)
		{
			flag = i;
			break;
		}
		else
			flag = 10;
		
	}
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < flag; j++)
		{
			if ((num[i] - '0') == num3[j])
				num4[i] = flag-1 - j;
		}
	}
	cout << "int[] arr = new int[]{";
	for (int i = flag - 1; i >= 0; i--)
	{
		if (i==0)
		cout << num3[i] ;
		else
			cout << num3[i]<<",";

	}
	cout << "};" << endl;
	cout << "int[] index = new int[]{";
	for (int i = 0; i < 11; i++)
	{
		if (i == 10)
			cout << num4[i];
		else
			cout << num4[i] << ",";
	}
	cout << "};" << endl;
	
	system("pause");
	return 0;
}