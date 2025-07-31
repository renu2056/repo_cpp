// 1. find the gretaest number of three:\

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3) {
        cout<<"n1 is the greatest of three number";
    } else if(n2>n1 && n2>n3) {
        cout<<"n2 is the greatest of three number";
    } else if(n3>n1 && n3>n2) {
        cout<<"n3 is the greatest of three number";
    } else {
        cout<<"error";
    }
    return 0;
}