#include<iostream>
using namespace std;
long long gcd(long long a, long long  b)
 {//求最大公约数
	return b == 0 ? a : gcd(b, a%b);
 }
long long  lcm(long long  a, long long  b)
 {//最小公倍数
	 return (a*b / gcd(a, b));
 }
int main()
{
	int len,num;
	cin >> len;
	long long  *a, *b;
	a = (long long *)malloc(len*sizeof(long long));
	b = (long long *)malloc(len*sizeof(long long));
	long long  fz, fm; char c; long long  lcm1 = 1, gcd1;
	for (int i = 0; i < len; i++)
	{
		cin >> fz >> c >> fm;
		//fz = fz*m + fm*z;
		//fm = m*fm;
		a[i] = fz;
		b[i] = fm;
	}
	//求出最小公倍数
	for (int i = 0; i < len; i++)
	{
		lcm1 = lcm(lcm1, b[i]);
	}
	fz = 0; fm = lcm1;
	for (int i = 0; i < len; i++)
	{
		a[i] = lcm1 / b[i] * a[i];
		b[i] = lcm1;
		fz += a[i];
	}
	num = fz / lcm1;
	fz = fz - num*lcm1;
	gcd1 = gcd(fz, lcm1);
	if (gcd1)
	{
		fz = fz / gcd1; fm = lcm1 / gcd1;
		if (fz == 0)
			cout << num << endl;
		else if (num==0)
			cout<< fz << "/" << fm << endl;
		else
			cout << num << " " << fz << "/" << fm << endl;
	}
	else
	{
		if (fz==0)
			cout << num <<  endl;
		else if (num == 0)
			cout << fz << "/" << lcm1 << endl;
		else
			cout << num << " " << fz << "/" << lcm1 << endl;
	}
		

	system("pause");
	return 0;
}




