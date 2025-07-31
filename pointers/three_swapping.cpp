// swapping

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

    int* ptra = &a;
    int* ptrb = &b;
    int* ptrc = &c;
    cout<<"for a: "<<endl<<"value = "<<a<<", orginal address = "<<ptra<<endl;
    cout<<"for b: "<<endl<<"value = "<<b<<", orginal address = "<<ptrb<<endl;
    cout<<"for c: "<<endl<<"value = "<<c<<", orginal address = "<<ptrc<<endl;

    cout<<"Before swapping:"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;
    three_variable_swapping(&a,&b,&c);
    cout<<"After swapping: Final Values are - "<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;
    
    findlargest(p,q,r);
    return 0;
}

int* findlargest(int* p, int* q , int* r) {
    int* largest_no = p;
    if(*q > *largest_no) {
        largest_no = q;
    }
    if(*r > *largest_no) {
        largest_no = r;
    }
    return largest_no;
}




























