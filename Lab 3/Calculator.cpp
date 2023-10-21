#include<iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main()
{
	int n1, n2, ans, choice;
	do
	{
		cout << endl <<  "----- CALCULATOR -----" << endl;
		cout << "1. Addition. " << endl;
		cout << "2. Subtraction. " << endl;
		cout << "3. Multiplication. " << endl;
		cout << "4. Division. " << endl;
		cout << "0. Exit. " << endl;
		cout << "Enter Choice : " << endl;
		cin >> choice;
		switch(choice)
		{
			case 0:
				exit(0);
				
			case 1:
				cout << "Enter First Number : ";
				cin >> n1;
				cout << "Enter Second Number : ";
				cin >> n2;
				cout << "Addition : " << add(n1, n2) << endl;
				break;
				
			case 2:
				cout << "Enter First Number : ";
				cin >> n1;
				cout << "Enter Second Number : ";
				cin >> n2;
				cout << "Subtraction : " << sub(n1, n2) << endl;
				break;	
				
			case 3:
				cout << "Enter First Number : ";
				cin >> n1;
				cout << "Enter Second Number : ";
				cin >> n2;
				cout << "Multiplication : " << mul(n1, n2) << endl;
				break;
				
			case 4:
				cout << "Enter First Number : ";
				cin >> n1;
				cout << "Enter Second Number : ";
				cin >> n2;
				ans = div(n1,n2);
				if(!ans)
					cout << "Invalid !! " << endl;
				else
					cout << "Division : " << ans << endl;	
				break;
				
			default :
				cout << "Invalid Choice !!" << endl;
				break;
		}
	}while(choice!=0);
	return 0;
}
int add(int n1, int n2)
{
	return n1+n2;
}

int sub(int n1, int n2)
{
	return n1-n2;
}

int mul(int n1, int n2)
{
	return n1*n2;
}

int div(int n1, int n2)
{
	if(n2 == 0)
		return 0;
	else
		return n1/n2;
}
