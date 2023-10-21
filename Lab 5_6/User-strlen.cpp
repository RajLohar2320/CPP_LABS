#include<iostream>
using namespace std;

int U_strlen(char *);
int main()
{
    char a[10];
    cout << "Enter a String : "<< endl;
    cin >> a;
    int length = U_strlen(a);
    cout << "Length of Given String : "<< length << endl;
    return 0;
}
int U_strlen(char *temp)
{
    int len;
    len = 0;
    while(*temp != '\0')
    {
        len++;
        temp++;
    }
    return len;
}
