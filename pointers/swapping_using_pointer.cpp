// swapping two variables usign pointers:

#include<iostream>
using namespace std;
void swapping(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int x=14, y=22;
    cout<<"Before: "<<"a = "<<x<<" , b = "<<y<<endl;
    swapping(&x,&y);
    cout<<"After: "<<"a = "<<x<<" , b = "<<y<<endl;
    return 0;
}