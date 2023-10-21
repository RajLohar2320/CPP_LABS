#include<iostream>
using namespace std;
inline void square(int);
int main()
{
	int n;
	cout << "Enter Number : " << endl;
	cin >> n;
	cout << "Square : " << endl;
	square(n);
	return 0;
}
void square(int n)
{
	cout << n*n;
}
