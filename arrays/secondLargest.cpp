#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int first_max = arr[0];
    int second_max = INT_MIN;

    for(int i=0;i<n;i++) {
        if(arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        }
        else if(arr[i] > second_max && arr[i] != second_max) {
            second_max = arr[i];
        }
    }
    if(second_max == INT_MIN) {
        cout<<0<<endl;
    } else {
        cout<<"Second largest element in an array is: "<<second_max<<endl;
    }
    return 0;
}