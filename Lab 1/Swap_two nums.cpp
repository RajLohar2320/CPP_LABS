#include <iostream>
using namespace std;

int main() {
    int a,b, temp;
    cout<<"Enter values of A and B : "<<endl;
    cin>>a>>b;
    cout<<"Values before swap : "<<a << "  "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"Values after swap : "<<a << "  "<<b<<endl;
    return 0;
}

