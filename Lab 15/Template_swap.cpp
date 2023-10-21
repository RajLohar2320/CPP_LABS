#include <iostream>
using namespace std;

template <class T>
	void swap_t(T& n1, T& n2)
	{
		T temp = n1;
		n1 = n2;
		n2 = temp;
	}
int main()
{
	int a, b;
	float x, y;
	cout << "(For Integers) Enetr A and B : ";
	cin >> a >> b;
	cout << "(For Integers) A and B Before swap : " << a << " and " << b << endl;
	swap_t(a,b);
	cout << "(For Integers) A and B After swap : " << a << " and " << b << endl;
	cout << "===================================================" << endl;
	cout << "(For Floats) Enetr A and B : ";
	cin >> x >> y;
	cout << "(For Floats) A and B Before swap : " << x << " and " << y << endl;
	swap_t(x,y);
	cout << "(For Floats) A and B After swap : " << x << " and " << y;		
	return 0;
}
