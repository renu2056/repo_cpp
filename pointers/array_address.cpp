// to print the address:

#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int *n = arr;
    for(int i=0;i<=10;i++) {
        cout<<&n<<endl;
    }
    return 0;
}


// to print the numbers:

#include<iostream>
using namespace std;
int main()
{
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    int *n = arr;
    for(int i=0;i<10;i++) {
        cout<<*(n+i);
    }
    return 0;
}


