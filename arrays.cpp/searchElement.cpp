#include<iostream>
using namespace std;
int searchElement(int arr[], int n, int x) {
    for(int i=0;i<n;i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] ={1,2,34,5,6,7,8,9,29,64};
    int x=64;
    int location = searchElement(arr,10,x);
    cout<<"Element found at location = "<<location;
    return 0;
}