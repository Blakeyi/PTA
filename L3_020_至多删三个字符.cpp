#include<bits/stdc++.h>
using namespace std;
#include<string>

int main()
{
	long start = clock();  //开始时间
	string str;
	cin >> str;
	int cnt = 0;
	int n=0;
	vector <string> str1,str2,str3;
	string s1 = str, s2 = str;
	for (int i = 1; i < str.length(); i++)
	{
		if (str[i] == str[i - 1])
			n++;
	}
	//str1.push_back(str);
	for (int i = 0; i < (str.size() + 1); i++)
	{
		if (i > 0)
		{
			string s3 = str;
			s2 = s3.erase(i - 1, 1);


		}
		for (int j = 0; j < (str.size() + 1); j++)
		{
			if (j>0 && i == 0)
			{
				string s3 = s2;
				s1 = s3.erase(j - 1, 1);

			}
			else if (i > 0)
			{
				string s3 = s2;
				if (j >= s2.size())
					break;
				s1 = s3.erase(j, 1);
			}

			for (int k = 0; k < str.size(); k++)
			{
				if (i == 0 && j == 0)
				{
					int cnt1 = 0;
					string s = str;
					s = s.erase(k, 1);
					for (auto v : str1)
					{
						if (s != v)
							cnt1++;
						if (s == v)
							break;
					}
					if (cnt1 == str1.size())
					{
						str1.push_back(s);
						cnt++;
					}
					

				}
				else if (i == 0 && j > 0)
				{

					string s = s1;
					int cnt1 = 0;
					if (k >= (s1.size()))
						break;
					s = s.erase(k, 1);

					for (auto v : str2)
					{
						if (s != v)
							cnt1++;
						if (s == v)
							break;
					}
					if (cnt1 == str2.size())
					{
						str2.push_back(s);
						cnt++;
					}

				}
				else if (i > 0 && j >= 0)
				{
					string s = s1;
					int cnt1 = 0;
					if (k >= (s1.size()))
						break;
					s = s.erase(k, 1);

					for (auto v : str3)
					{
						if (s != v)
							cnt1++;
						if (s == v)
							break;
					}
					if (cnt1 == str3.size())
					{
						str3.push_back(s);
						cnt++;
					}
				}

			}

		}



	}
	for (auto v : str1)
	{
		cout << v << endl;
	}
	cout << cnt + 1<<endl;
	long finish = clock();   //结束时间
	long t = (finish - start) / CLOCKS_PER_SEC * 1000;
	cout << t <<"ms" << endl;
	system("pause");
	return 0;
}


