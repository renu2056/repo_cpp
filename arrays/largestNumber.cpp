#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int largest_number = arr[0];     //lets assume that the first number is greatest in an array
    for(int i=0;i<n;i++) {
        if(arr[i] > largest_number) {
            largest_number = arr[i];
        }
    }
    cout<<largest_number<<endl;
    return 0;
}