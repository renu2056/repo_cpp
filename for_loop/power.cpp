// a raise to power b question:

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int result = 1;
    for(int i=1;i<=b;i++) {
        result = result * a;
        cout<<result<<"\n";
    }
    return 0;
}