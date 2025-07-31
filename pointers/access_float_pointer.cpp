// access float using pointers:

#include<iostream>
using namespace std;
int main()
{
    float n=12.5;
    float *m = &n;
    cout<<*m<<endl;
    return 0;
}
