// sum of digits:
// #1
#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cin>>number;
    for(int i = number ; i != 0 ; i = i / 10) {
        int digits = i % 10;
        sum = sum + digits;
    }
    cout<<"SUM OF DIGITS : "<<sum;
    return 0;
}

// #2
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int digits=0;
    while(n>0) {
        digits++;
        n = n/10;
        sum += digits;
    }
    cout<<"Sum: "<<sum<<"\n";
    return 0;
}