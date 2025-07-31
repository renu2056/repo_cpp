// 4. vowel or consonant checker:

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' ||
    ch == 'o' || ch == 'u') {
        cout<<"Entered character is vowel";
    } else {
        cout<<"Entered charcter is consonant";
    }
    return 0;
}

