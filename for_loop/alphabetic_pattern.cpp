// print the alphabetic triangle:

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=0;j<(2*i-1);j++) {
            cout<<(char)('A'+j);
        }
        cout<<"\n";
    }
    return 0;
}