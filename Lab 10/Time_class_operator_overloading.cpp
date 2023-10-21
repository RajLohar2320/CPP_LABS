#include <iostream>
using namespace std;

class Time
{
	int hh,mm,ss;
	public :
		Time();
		Time(int,int,int);
		void Display();
		Time operator+ (int);
		Time operator- (int);
};

Time ::Time()
{
	this->hh=0;
	this->mm=0;
	this->ss=0;
}
Time :: Time(int hh,int mm,int ss)
{
	this->hh=hh;
	this->mm=mm;
	this->ss=ss;	
}
void Time ::Display()
{
	cout << this->hh <<":" << this->mm << ":" << this->ss << endl;		
}
		
Time Time :: operator+ (int val)
{
	this->hh = this->hh+ val;
	this->mm = this->mm+ val;
	this->ss = this->ss+ val;
	return *this;
}
Time Time ::operator- (int val)
{
	this->hh = this->hh- val;
	this->mm = this->mm- val;
	this->ss = this->ss- val;
	return *this;
	
}

int main()
{
	Time t1(13, 4, 10);
	t1.Display();
	t1+5; // t1.operator +(this, 5)
	t1.Display();
	t1-3; // t1.operator -(this, 3)
	t1.Display();
}

