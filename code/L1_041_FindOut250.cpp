
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[100000];
	cin.getline(a, 100000);//遇到回车结束
	char b[4] = "250";//要留一个字符位置存放/0
	char c[4];
	int n = 1, i, l, k;
	l = strlen(a);
	for (i = 0; i<l; i++)
	{
		if (a[i] == ' ')
		{
			n++;
		}
		else
		{
			if (a[i] != '-')
			{
				for (int j = 0; j<3; j++)
				{
					c[j] = a[i + j];

				}
				c[3] = '\0';
				if (strcmp(c, b) == 0)
				{
					k = n;
					break;
				}
			}
			else if (a[i] == '-')
			{
				i++;
			}


		}
	}
	printf("%d", k);
	return 0;
}
