#include <bits/stdc++.h>
using namespace std;
#define cin f
int main()
{
	ifstream f;
	f.open("L047_PreSleep.txt");
	vector<string> name;
	vector<string>::iterator it;
	int num;
	f >> num;
	for (int i = 0; i < num; i++)
	{
		string str;
		int breath, pulse;
		f >> str >> breath >> pulse;
		if ((breath >= 15 && breath <= 20) && (pulse >= 50 && pulse <= 70))
			;
		else
			name.push_back(str);
	}
	for (it=name.begin(); it!=name.end(); it++)
	{
		cout << *it<<endl;
	}
}