#include<iostream>
using namespace std;
class Fruits {
    public:
        int Fruits;
};
int main()
{
    Fruits fruits1, fruits2;
    fruits1.Fruits = 40;
    fruits2.Fruits= 70;
    cout<<fruits1.Fruits<<", "<<fruits2.Fruits<<endl;
    return 0;
}