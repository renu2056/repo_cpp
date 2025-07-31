// call by value:

#include<iostream>
using namespace std;
void function(int n) {
    n=10;
}
int main()
{
    int num = 5;
    function(num);
    cout<<"Number: "<<num;
    return 0;
}

// call by reference:

#include<iostream>
using namespace std;
void new_function(int &n) {
    n = 22;
}
int main()
{
    int num=14;
    new_function(num);
    cout<<"Number: "<<num;
    return 0;
}