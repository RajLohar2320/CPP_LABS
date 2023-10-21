#include<iostream>
using namespace std;

void U_strcpy(char *, char *);
void U_strrev(char *, char*);
int str_cmp(char *, char *);
int main()
{
    char str[10];
    char temp[10];
    cout << " Enter String : " << endl;
    cin >> str;
    U_strcpy(temp, str);
    U_strrev(temp, str);
    if(str_cmp(temp, str))
    {
        cout <<" Not Palindrome."<< endl;
    }
    else
    {
        cout <<" Palindrome." <<endl;
    }
    return 0;
}
void U_strcpy(char *temp, char *str)
{
    while(*str != '\0')
    {
        *temp = *str;
        temp++;
        str++;
    }
    *temp = '\0';
}
void U_strrev(char *temp, char* str)
{
    while (*temp != '\0')
    {
        temp++;
    }
    temp--;
    while (*str != '\0')
    {
        *str = *temp;
        str++;
        temp--;
    }
}
int str_cmp(char *temp, char *str)
{
    while(*str != '\0')
    {
        if(*str == *temp)
        {
            str++;
            temp++;
        }
        else if(*str > *temp)
        {
            return 1;
        }
        else 
        {
            return -1;
        }    
    }
    return 0;
}
