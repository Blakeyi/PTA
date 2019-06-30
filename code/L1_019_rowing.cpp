#include<iostream>
using namespace std;
int main()
{
	int flag = 0;
	int t[100][4];//存放记录 
	int da, db, n; //酒量
	int fa=0, fb=0;//ab已经罚的酒
	cin >> da>>db;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
			cin >> t[i][j];
	}
	for (int i = 0; i < n; i++)
	{	
		if ((t[i][0] + t[i][2]) == t[i][1] && (t[i][0] + t[i][2]) != t[i][3])
		{
			fa++;
			if (fa>da)
			{
				cout << "A" << endl << fb;
				flag = 1;
				break;
			}

			
		}
			
		if ((t[i][0] + t[i][2]) == t[i][3] && (t[i][0] + t[i][2]) != t[i][1])
		{
			fb++;
			if (fb > db)
			{
				cout << "B" << endl << fa;
				flag = 1;
				break;
			}
			
		}
		

	}


	
	system("pause");
	return 0;
}