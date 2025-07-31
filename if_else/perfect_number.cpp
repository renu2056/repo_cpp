// perfect number finder:

#include<iostream>
using namespace std;
int perfect_number(int n) {
    int sum=0;
    for(int i=1;i<=n/2;i++) {
        if(n % i == 0)
            sum+=i;
    }
    return sum==n;
}
int main()
{
    int n;
    cin>>n;
    if(perfect_number(n)) {
        cout<<n<<" is a perfect number"<<"\n";
    } else {
        cout<<n<<" is not a perfect number"<<"\n";
    }
    return 0;
}






























