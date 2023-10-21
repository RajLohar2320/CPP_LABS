#include <iostream>
using namespace std;
int main()
{
	int a, b;
	try
	{
		cout << "Enter A and B for Division : ";
		cin >> a >> b;
		if(b == 0)
			throw b ;
		cout << "Division : " << a/b;
	}
	catch (int b)
	{
		cout << "Error : Denominator is 0...INVALID !!" << endl;
	}
	return 0;
}
