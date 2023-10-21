#include<iostream>
using namespace std;
class emp
{
	int id;
	public :
		emp(int);
		void display();
		virtual int find_salary()=0;
};
emp :: emp(int id)
{
	this->id = id;
}
void emp :: display()
{
	cout << "ID : " << this->id << endl;
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
	
	emp *ptr;
//	ptr = new emp (101);
//	cout << "Salary : " << ptr->find_salary() << endl;
//  Error because class emp contain pure virtual function so it become abstract class, hence obj can't be created.

	ptr = new wage_emp (101, 10, 800);
	cout << "Salary : " << ptr->find_salary() << endl;
	
	ptr = new salesman (101, 10, 800, 50, 15);
	cout << "Salary : " << ptr->find_salary() << endl;
	
	return 0;
	
}
