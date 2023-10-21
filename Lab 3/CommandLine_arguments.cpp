#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    cout << "No. of Arguments : " << argc << endl;
    cout << "Arguments : " << endl;
    for(int j=0; j<argc; j++)
    {
        cout << argv[j] << endl;
    }
}
