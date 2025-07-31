// reverse:

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *x = &n;
    for(int i= *x ; i>=1 ; i--){
        cout<<i<<" ";
    }
    return 0;
}


