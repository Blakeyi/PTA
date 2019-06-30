#include<bits/stdc++.h>
using namespace std;
int main()
{
	int L, N, M = 1;
	int p, q;
	vector<int> vec;
	cin >> L >> N;
	vec.push_back(1);
	for (int i = 0; i < L; i++)
	{
		M *= 26;
		vec.push_back(M);
	}

	N = M - N ;
	q = N;

	for (int i = L - 1; i >=0; i--)
	{
		p = q / vec[i];
		q = q % vec[i];
		vec[i] = p;
	}
	
	for (int i = L - 1; i >= 0; i--)
	{
		char j = 'a';
		j += vec[i];
		cout << j;
			
	}
	
return 0;
	
}

//#include<bits/stdc++.h>
//using namespace std;
//int f(int x) {
//	int sum = 1;
//	for (int i = 0; i < x; i++) {
//		sum = sum * 26;
//
//	}
//	return sum;
//}
//int main()
//{
//	int l, n;
//	char a[10];
//	scanf_s("%d %d", &l, &n);
//	int ll = f(l);
//	int x = ll - n, j = 0;
//	for (int i = l - 1; i >= 0; i--) {
//		a[j] = x / f(i) + 'a';
//		x = x % f(i);
//		j++;
//	}
//	for (int i = 0; i < l; i++)
//		printf_s("%c", a[i]);
//	return 0;
//}
