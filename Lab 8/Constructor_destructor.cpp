#include <iostream>
#include <string.h>
using namespace std;

class Stud
{
	int r_no;
	char name[10];
	int marks;
	public :
		Stud();
		Stud(int, char*, int);
		void display();
		~Stud();
};
Stud :: Stud()
{
	cout << "Constructor !!" << endl;
	this->r_no = 0;
	strcpy(name,"");
	this->marks = 0;
}
Stud :: Stud(int r_no, char *name, int marks)
{
	cout << "Constructor !!" << endl;
	this->r_no = r_no;
	strcpy(this->name, name);
	this->marks = marks;
}
void Stud :: display()
{
	cout << "Roll No : " << r_no << endl;
	cout << "Name : " << name << endl;
	cout << "Marks : " << marks << endl;
}
Stud :: ~Stud()
{
	cout << "Destructor !!" << endl;
	if(!this)
		delete this;
}

int main()
{
	Stud s1(1, "Raj", 89);
	s1.display();
}
