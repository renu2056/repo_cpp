#include<iostream>
using namespace std;
int searchElement(int arr[], int n,int x) {
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

// #include<iostream>
// using namespace std;

// int linear_search(int arr[], int n, int x) {
//     int i;
//     for (i=0; i<n; i++)
//         if (arr[i] == x)    // Check each element of the array.
//             return i;        // if found return the position
//     return -1;    // otherwise return -1
// }

// int main() {
//     int array[]={10,11,12,13,14,25,26,37,48,29};
//     int x=25;    // Searched Element.

//     int loc=linear_search(array, 10, x);    // Call the search function

//     if(loc != -1)
//         cout<<"Element found at location : "<<loc;
//     else
//         cout<<"Element not present in the array.";
//     return 0;
// }
