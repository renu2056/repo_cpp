#include<iostream>
using namespace std;
class Fruits {
    public:
        int Fruits;
};
int main()
{
    Fruits f1, f2;
    f1.Fruits = 40;
    f2.Fruits= 70;
    cout<<f1.Fruits<<", "<<f2.Fruits<<endl;
    return 0;
}