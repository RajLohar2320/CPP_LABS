#include <iostream>
using namespace std;


void swap(int*,int*);
int main() {
    // Write C++ code here
    int a,b;
    cout<<"Enter values : "<<endl;
    cin>>a>>b;
   cout<<"Values before swap : "<<a<<b<<endl;
     swap(&a,&b);
}
void swap(int* p,int* q)
    {
       int temp;
       temp=*p;
       *p=*q;
       *q=temp;
       cout<<"Values after swapping : "<<*p<<*q<<endl;
    }
