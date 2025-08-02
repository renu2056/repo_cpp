#include<iostream>
using namespace std;
int sumOfDigits(int n) {
    if(n==0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
int main()
{
    int n;
    cin>>n;
    if(n<0) {
        cout<<"not a valid integer";
    } else {
        int sum = sumOfDigits(n);
        cout<<"the sum of digits is: "<<sum<<endl;
    }
    return 0;
}