#include<iostream>
using namespace std;
void sum(int a, int b) {
    cout<<"Sum of two numbers is: "<<(a+b)<<endl;
}
void product(int a, int b) {
    cout<<"Product od two numbers is: "<<(a*b)<<endl;
}
int main()
{
    int a=14,b=22;
    sum(a,b);
    product(a,b);
}
