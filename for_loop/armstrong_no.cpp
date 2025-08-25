// armstrong number checker:

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int n=num;
    int sum=0;
    while(n>0) {
        int digit= n%10;
        sum = sum +(digit*digit*digit);
        n=n/10;
    }
    if(num==sum)
        cout<<"Entered number is an armstrong number";
    else
        cout<<"Entered number is not an armstrong number";
    return 0 ;
}
