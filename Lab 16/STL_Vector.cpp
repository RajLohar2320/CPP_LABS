#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{
	int temp, sum = 0;
    vector<int> v;
    for(int i=0; i<5; i++)
	{
		cin >> temp;
		v.push_back(temp); 
	}  
    for(int i=0;i<v.size();i++)
	{
		cout<< v[i] << "  ";
		sum = sum + v[i];
	}
	cout << "\nSummation : " << sum << endl; 
	v.pop_back();

    if(!v.empty())
    	cout << "\nVector is Empty !!! " << endl;
    else
    	cout << "\nVector is not Empty !!! " << endl;
	return 0;
}  
