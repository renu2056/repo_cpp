#include<iostream>
using namespace std;
int power(int base, int exponent) {
    if(exponent<0) {
        return -1;
    }
    if(exponent==0) {
        return 1;
    }

    int half_power = power(base,exponent/2);
    if(exponent % 2 == 0) {
        return half_power * half_power;
    } else {
        return base* half_power *half_power;
    }
}
int main()
{
    int base,exponent;
    cin>>base>>exponent;
    cout<<power(base,exponent);
    return 0;
}