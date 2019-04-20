#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main()
{
	vector<int> num;
	int m,sum=0;	
	int N,M;
	cin >> N>>M;
	for (N; N > 0; N--)
	{
		cin >> m;
		num.push_back(m);
	}
	sort(num.begin(), num.end());
	
	for (auto i : num)
	{
		sum += i;
		if (sum == M)
		{

		}
	}
	system("pause");
	return 0;
}