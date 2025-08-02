#include<iostream>
using namespace std;
void primeFactors(int n, int divisor) {
    if(n==1) {
        return;
    }
    if(n % divisor == 0) {
        cout<<divisor<<endl;
        primeFactors(n/divisor,divisor);
    } else {
        primeFactors(n,divisor+1);
    }
}
int main()
{
    int n;
    cin>>n;
    if(n<2) {
        cout<<"number should be greater than or equal to 2";
    } else {
        primeFactors(n,2);
        cout<<endl;
    }
    return 0;
}