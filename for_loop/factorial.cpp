// factorial of a number:
// #1
#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1;
    cin>>n;
    if(n<0) {
        cout<<"factorial not defined";
    } else {
        for(int i=1;i<=n;i++) {
            factorial = factorial * i;
        }
        cout<<"Factorial of a number is: "<<factorial;
    }
    return 0;
}

// #2

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++) {
        fact = fact * i;
        cout<<"factorial is: "<<fact<<"\n";
    }
    return 0;
}