#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream f("L48_MatrixMulti.txt");
	vector<int> m1, m2, m3;
	vector<int>::iterator it;

	int row, col, row1, col1, num;
	f >> row >> col;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			f >> num;
			m1.push_back(num);
		}
	}


	f >> row1 >> col1;

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			f >> num;
			m2.push_back(num);
		}

	}
	num = 0;
	
	if (col == row1)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				for (int k = 0; k < col; k++)
				{
					num += m1[i*col + k]*m2[k*col1 + j];
					

				}
				m3.push_back(num);
				num = 0;
			}
		}
		cout << row << " " << col1 << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				if (j == col1 - 1)
					cout << m3[i*col1 + j] << endl;
				else
					cout << m3[i*col1 + j] << " ";
			}

		}
	}
	else
		cout << "Error: " << col << " != " << row1;

	
	return 0;
}