#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 7, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int smallest =arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest number: " << largest << endl;
    cout<<"Smallest number: "<< smallest<<endl;
    return 0;
}
