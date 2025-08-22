#include<iostream>
#include<string.h>
using namespace std;

class Student {
public:
    string name;
    int age;

    void isStudent(string new_name) {
        name = new_name;
    }
};

int main() {
    Student s1;
    s1.name = "Renu";
    s1.age = 19;
    cout<<s1.name<<endl;
    return 0;
}