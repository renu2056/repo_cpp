#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    void setArea(int l, int b) {
        length = l;
        breadth = b;
    }
    int getArea() {
        return length*breadth;
    }
};

int main() {
    Rectangle r1;
    r1.setArea(2,4);
    cout<<"Area of rectangle is: "<<r1.getArea()<<endl;
    return 0;
}