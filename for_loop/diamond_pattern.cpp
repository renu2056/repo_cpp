// print a diamond pattern:

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        int space = n-i;
        for(int s=0;s<space;s++) {  //this loop is for creating space before printing characters in upper triangle
            cout<<" ";
        }
        for(int j=0;j < (2*i-1); j++) {  //this loop works for printing the characters
            char ch = (char)('A'+j);
            cout<<ch;
        }
        cout<<"\n";
    }
    for(int i=n-1; i>=1; i--) {      //this loop is for lower triangle(we reversed the condition of upper triangle)
        int space = n-i;             
        for(int s=0;s<space;s++) {
            cout<<" ";
        }
        for(int j=0; j < (2*i-1);j++) {
            cout<<(char)('A'+j);
        }
        cout<<"\n";
    }
    return 0;
}


