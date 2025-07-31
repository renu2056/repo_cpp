// basic pointers structure:

#include<iostream>
using namespace std;
int main()
{
    int n=2056;
    int *s=&n;
    cout<<"value of the number: "<<n<<endl;
    cout<<"address of the variable: "<<&n<<endl;
    cout<<"value of the variavle stored at its address: "<<*s<<endl;
    cout<<"pointer holds: "<<s<<endl;
    return 0;
}

