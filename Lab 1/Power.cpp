#include<iostream>
#include<Math.h>
using namespace std;
int main()
{
	int base, exp, powr;
	cout << "Enter Base : ";
	cin >> base;
	cout << "Enter Exponent : ";
	cin >> exp;
	powr = pow(base, exp);
	cout << "Power : " << powr;
	return 0;
}
