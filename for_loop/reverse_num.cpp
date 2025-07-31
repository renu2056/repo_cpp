// reverse a number:

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int reverse=0;
    while(n>0) {
        int n=n%10;
        reverse = reverse * 10 + n;
    }
    cout<<"Reversed number: "<<reverse<<"\n";
    return 0;
}