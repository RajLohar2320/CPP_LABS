#include<iostream>
using namespace std;
void U_strcpy(char *, char *);
int main()
{
    char a[10];
    char b[10];
    printf("\nEnter a String : ");
    cin >> a;
    U_strcpy(b, a);
    cout << " Soucre String : " << a << endl;
    cout <<" Copy String : "<< b << endl;
   return 0;
}
void U_strcpy(char *q, char *p)
{
    while(*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
}
