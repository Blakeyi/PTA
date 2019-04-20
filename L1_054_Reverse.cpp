//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	//ifstream f("L1_054_Reverse.txt");
//	ifstream f("input.txt");
//	int num='a'; char symbol='a';
//	int flag = 0;//如果flag=1则说明倒过来不一样
//	char c[101];
//	f.getline(c, 5);
//	//string str = c;
//	//symbol = c[0];
//	sscanf_s(c, "%c %d", &symbol,1, &num);//使用%c时必须指定长度
//	char** ch = new char*[num];
//	for (int i = 0; i < num; i++)//创建二维字符数组
//	{
//		ch[i] = new char [num];
//	}
//	for (int i= 0; i < num; i++)//输入字符
//	{
//		f.getline(c, num+1);
//		for (int j = 0; j < num; j++)
//		{
//			ch[i][j] = c[j];
//			//cout<<ch[i][j];
//		}
//		//cout << endl;
//	}
//	if (num % 2 == 0)//如果是偶数行
//	{
//		for (int j = 0; j < num; j++)//每一行
//		{
//			if (flag == 1)
//				break;
//			for (int i = 0; i < num / 2; i++)
//			{
//				if (ch[j][i] != ch[num-j-1][num - i - 1])
//				{
//					flag = 1;
//					break;
//				}
//				
//
//			}
//		}
//
//	}
//	else
//	{
//		for (int i = 0; i < num; i++)
//		{
//			if (ch[num / 2][i] != ch[num / 2][num - i - 1])
//			{
//				flag = 1;
//				break;
//			}
//
//		}
//		for (int j = 0; j < num; j++)//每一行
//		{
//			if (flag == 1)
//				break;
//			for (int i = 0; i < num / 2; i++)
//			{
//				if (ch[j][i] != ch[j][num - i - 1])
//				{
//					flag = 1;
//					break;
//				}
//
//
//			}
//		}
//	}
//	if (flag==1)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			for (int j = 0; j < num; j++)
//			{
//				if (ch[num - i - 1][num - j - 1]!=' ')
//				{
//					ch[num - i - 1][num - j - 1] = symbol;
//				}
//				cout << ch[num - i - 1][num - j - 1];
//			}
//			cout << endl;
//		}
//
//	}
//	else
//	{
//		cout << "bu yong dao le " << endl;
//		for (int i = 0; i < num; i++)
//		{
//			for (int j = 0; j < num; j++)
//			{
//				if (ch[i][j]!=' ')
//				{
//					ch[i][j] = symbol;
//				}
//				cout << ch[i][j];
//			}
//			cout << endl;
//		}
//	}
//
//	return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int pa1, pb1, pb2 = 0;
	int n;
	cin >> pa1 >> pb1;
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		pb2 += n;
	}

	if (pb2 == 3 || (pb1 > pa1&&pb2 > 0))
		cout << "The winner is b: " << pb1 << " + " << pb2;
	else
		cout << "The winner is a: " << pa1 << " + " << 3 - pb2;

	return 0;
}