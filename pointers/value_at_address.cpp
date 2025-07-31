// printing the value present at the address:

#include<iostream>
using namespace std;
int main()
{
    int n=22;
    int *v = &n;
    cout<<*v;
    return 0;
}
