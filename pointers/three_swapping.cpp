#include<iostream>
using namespace std;
void three_variable_swapping(int* a, int* b, int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main()
{
    int a=10,b=20,c=30;
    three_variable_swapping(&a,&b,&c);
    cout<<"After swapping:"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;
    return 0;
}

























