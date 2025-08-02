#include<iostream>
using namespace std;
int newnumber(int n) {
    if(n==0) {
        return 0;
    }
    int remaining_digits = newnumber(n/10);
    int last_digit = n % 10;
    if(last_digit % 2 == 0) {
        return remaining_digits * 10+last_digit;
    } else {
        return remaining_digits;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<newnumber(n);
    return 0;
}