#include<iostream>
using namespace std;
class A
{
	public :
		A()
		{
			cout << "In const of A !! " << endl;
		}
};
class B : virtual public A
{
	public :
		B()
		{
			cout << "In const of B !! " << endl;
		}
};
class C : virtual public A
{
	public :
		C()
		{
			cout << "In const of C !! " << endl;
		}
};
class D : public B, public C
{
	public :
		D()
		{
			cout << "In const of D !! " << endl;
		}
};

int main()
{
	D dobj;
	return 0;
	
}
