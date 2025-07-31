// 5. check if character is alphabet, digit or special character:

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
        cout<<"Entered input is alphabet";
    } else if(ch>='0' && ch<='9') {
        cout<<"Entered input is a digit";
    } else {
        cout<<"Entered input is a special character";
    }
    return 0;
}