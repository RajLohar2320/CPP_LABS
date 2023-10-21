#include<iostream>
using namespace std;
class shape
{
	public :
		virtual void display() = 0;
		virtual int area() = 0;
};

class square : public shape
{
	int side;
	public :
		square(int);
		void display();
		int area();
	
};
square :: square(int side)
{
	this->side = side;
}
void square :: display()
{
	cout << "Side : " << side << endl;
}
int square :: area()
{
	return side * side;
}

class rectangle : public shape
{
	int l, b;
	public :
		rectangle(int, int);
		void display();
		int area();
};
rectangle :: rectangle(int l, int b)
{
	this->l = l;
	this->b = b;
}
void rectangle :: display()
{
	cout << "Length : " << l << endl;
	cout << "Breadth : " << b << endl;
}
int rectangle :: area()
{
	return l * b;
}

int main()
{
	shape *s_ptr;
	s_ptr = new square(20);
	s_ptr->display();
	cout << "Area of Square : " << s_ptr->area() << endl;
	
	s_ptr = new rectangle(20, 30);
	s_ptr->display();
	cout << "Area of Rectangle : " << s_ptr->area() << endl;
}
