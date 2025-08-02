#include<iostream>
using namespace std;
int gcd(int i , int j) {
    if(j==0) {
        return i;
    } else {
        return gcd(j,i%j);
    }
}
int main()
{
    int i,j;
    cin>>i>>j;
    cout<<gcd(i,j);
    return 0;
}