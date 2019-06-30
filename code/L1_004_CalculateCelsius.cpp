#include<iostream>
#include<fstream>
#include <math.h>
using namespace std;
int main()
{
	int Ce,F;
	cin >> F;
	Ce = 5 * (F - 32) / 9;
	cout << "Celsius = " << Ce;
	system("pause");

	return 0;
}