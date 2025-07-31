// prime number checker:
// #1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++) {
        if(n % i== 0)
            count++;
    }
    if(count==2)
        cout<<"It is a Prime number";
    else
        cout<<"It is not a prime number";
    return 0;
}

// #2
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int primeNumber=1;
    if(n<=1) {
        primeNumber=0;
    } else {
        for(int i=2;i*i<n;i++) {
            if(n%i==0) {
                primeNumber=0;
            }
        }
    }
    if(primeNumber) {
        cout<<n<<" is a prime number";
    } else {
        cout<<n<<" is not a prime number";
    }
    return 0;
}