#include <iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	public :
		Date();
		Date(int,int,int);
		void Display();
		Date operator+ (int);
		Date operator- (int);
};

Date ::Date()
{
	this->dd=0;
	this->mm=0;
	this->yy=0;
}
Date :: Date(int dd,int mm,int yy)
{
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;	
}
void Date ::Display()
{
	cout << this->dd <<"/" << this->mm << "/" << this->yy<< endl;		
}
		
Date Date :: operator+ (int val)
{
	this->dd = this->dd+ val;
	this->mm = this->mm+ val;
	this->yy = this->yy+ val;
	return *this;
}
Date Date ::operator- (int val)
{
	this->dd = this->dd- val;
	this->mm = this->mm- val;
	this->yy = this->yy- val;
	return *this;
	
}

int main()
{
	Date d1(23, 9, 2023);
	d1.Display();
	d1+5; // d1.operator +(this, 5)
	d1.Display();
	d1-3; // d1.operator (this, 5)
	d1.Display();
}

