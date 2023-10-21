#include<iostream>
using namespace std;

void U_strcat(char *, char *);
int main()
{
    char a[20];
    char b[20];
    cout << "Enter 1st String : "<< endl;
    cin >> a;
    cout << "Enter 2nd String : " << endl;
    cin >> b;
    U_strcat(b, a);
    cout << "1st String : " << a << endl;
    cout << "2nd String : " << b << endl;
    return 0;
}
void U_strcat(char *q, char *p)
{
    while(*q != '\0')
    {
        q++;
    }
    while(*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
}
