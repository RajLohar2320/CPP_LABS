#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float p,r,t,ci;
    cout<<"Enter Principal, Rate and Time : "<<endl;
    cin>>p>>r>>t;
    ci=p*pow(1+r/100,t)-p;
    cout<<"Compound Interest : "<<ci<<endl;
    return 0;
}
