#include <iostream>
using namespace std;

class Complex
{
	int real, img;
	public :
		Complex();
		Complex(int, int);
		void display();
		Complex operator+ (Complex &); 
		Complex operator- (Complex &);
		Complex operator= (Complex &);
		friend void operator<< (ostream &, Complex &);
		friend void operator>> (istream &, Complex &);
};
Complex :: Complex()
{
	this->real = 0;
	this->img = 0;
}
Complex :: Complex(int real, int img)
{
	this->real = real;
	this->img = img;
}
void Complex :: display()
{
	if(img<0)
	{
		cout << this->real << "-" << this->img << "i" << endl;
	}
	else
		cout << this->real << "+" << this->img << "i" << endl;
}
Complex Complex :: operator+(Complex &c)
{
	Complex temp;
	temp.real = this->real + c.real;
	temp.img = this->img + c.img;
	return temp;
}
Complex Complex :: operator-(Complex &c)
{
	Complex temp;
	temp.real = this->real - c.real;
	temp.img = this->img - c.img;
	return temp;
	
}
Complex Complex :: operator= (Complex &temp)
{
	this->real = temp.real;
	this->img = temp.img;
	return *this;
}
void operator<< (ostream &out, Complex &temp)
{
	out << temp.real << "+" << temp.img << "i";
}
void operator>> (istream &in, Complex &temp)
{
	in >> temp.real >> temp.img;
}
int main()
{
	Complex c1(7,5);
	c1.display();
	
	Complex c2(2,3);
	c2.display();
	
	Complex c3 = c1+c2;
	cout << "Addition of C1 to C2 : " << endl;
	c3.display();
	
	Complex c4 = c1-c2;
	cout << "Subtraction of C1 to C2 : " << endl;
	c4.display();
	
	c1 = c2;
	cout << "Assign the value of C2 to C1 : " << endl;		
	c1.display();
	
	Complex c5;
	cout << "Insertion and Extraction of New object : " << endl;
	cin >> c5;
	cout << c5;
	
	return 0;
	
}
