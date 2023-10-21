#include <iostream>
#include <iomanip>
#define SIZE 2
using namespace std;
class DOB
{
    int dd, mm, yy;
    public : 
        void set();
        void show();
};
void DOB :: set()
{
    cout << "Enter Date of Birth (DD/MM/YY) : " <<endl;
    cin >> this->dd >> this->mm >> this->yy;
}
void DOB :: show()
{
    cout << this->dd <<"/"<< this->mm <<"/"<< this->yy;
}

class Student
{
    int r_no;
    int t_marks;
    DOB date;
    public :
        void set();
        void show();
        int get_roll();
};

void Student :: set()
{
    cout << "Enter Roll No : ";
    cin >> this->r_no;
    date.set();
    cout << "Enter Total Marks : ";
    cin >> this->t_marks;
    cout << endl;

}
void Student :: show()
{
    cout << this->r_no;
    cout << setfill((char)32) << setw(27); 
    date.show();
    cout << setfill((char)32) << setw(27);
    cout << this->t_marks << endl;
}
int Student :: get_roll()
{
	return r_no;
}

void sort_by_roll (Student*, int);
int main()
{
    Student s_arr[SIZE];
    for(int i=0; i<SIZE; i++)
    {
        cout << "Enter " << i+1 << "th Student Details : "<<endl;
        s_arr[i].set();
    }

    cout << "Sort By Roll No. " <<endl;
    sort_by_roll(s_arr, SIZE);
    cout << "Roll No";
    cout << setfill((char)32) << setw(30);
    cout << "Date of Birth";
    cout << setfill((char)32) << setw(30);
    cout << "Total Marks" << endl;
    for(int i=0; i<SIZE; i++)
    {
        s_arr[i].show();
    }
    return 0;
}

void sort_by_roll(Student* temp, int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(temp[i].get_roll()> temp[j].get_roll())
			{
				Student temp_var = temp[i];
				temp[i] = temp[j];
				temp[j] = temp_var;
			}
		}
	}
}

