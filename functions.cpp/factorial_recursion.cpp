#include<iostream>
using namespace std;
int factorial(int n) {
    if((n<0) || (n==1)) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}
int main() {
    int n;
    cin>>n;
    if(n<0) {
        cout<<"invalid integer";
    } else {
        cout<<"Factorial of a given number is: "<<factorial(n);
    }
    return 0;
}