#include <iostream>
using namespace std;

class A
{
	class B
	{
		public :
			// func of class B
			void show()
			{
				cout << "Inside B" << endl;
			}
	};
	public :
		//func of class A
		void display()
		{
			cout << "Inside A" << endl;
		}
};

int main()
{
	A aobj;
	aobj.display();
//	bobj.show();
// func of inner class cannot access 
}
