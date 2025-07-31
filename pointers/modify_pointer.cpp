// modify the number using pointers:

#include<iostream>
using namespace std;
void pointers(int* p){
    (*p)++;

}
int main()
{
    int x=2;
    pointers(&x);
    cout<<x<<endl;
}