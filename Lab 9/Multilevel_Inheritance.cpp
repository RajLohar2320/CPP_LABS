#include<iostream>
using namespace std;
class emp
{
	int id;
	public :
		emp(int);
		void display();
		int find_salary();
};
emp :: emp(int id)
{
	this->id = id;
}
void emp :: display()
{
	cout << "ID : " << this->id << endl;
}
int emp :: find_salary()
{
	return 0;
}
class wage_emp : public emp
{
	int hrs;
	int rate;
	public :
		wage_emp(int, int, int);
		void display();
		int find_salary();
};
wage_emp :: wage_emp(int id, int hrs, int rate) : emp(id)
{
	this->hrs = hrs;
	this->rate = rate;
}
void wage_emp :: display()
{
	emp :: display();
	cout << "Hours : " << hrs << endl;
	cout << "Rate : " << rate << endl;
}
int wage_emp :: find_salary()
{
	return hrs * rate;
}

class salesman : public wage_emp
{
	int sales;
	int comm;
	public :
		salesman(int, int, int, int, int);
		void display();
		int find_salary();
};
salesman :: salesman(int id, int hrs, int rate, int sales, int comm) : wage_emp(id, hrs, rate)
{
	this->sales = sales;
	this->comm = comm;
}
void salesman :: display()
{
	wage_emp :: display();
	cout << "Sales : " << sales << endl;
	cout << "Commission : " << comm << endl;
}
int salesman :: find_salary()
{
	return (wage_emp :: find_salary()) + sales * comm;
}

int main ()
{
	salesman manager(101, 10, 600, 50, 15);
	manager.display();
	cout << "   Salary : " << manager.find_salary();
}
