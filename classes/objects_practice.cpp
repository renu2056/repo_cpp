//create simple class with two data members:
//create objects and initialize

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

// make data members private and use public functions:
//final main fucntions:

#include<iostream>
#include<string.h>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void isStudent(string new_name, int a) {
        name = new_name;
        age = a;
    }
    void display() {
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
    }
};

int main() {
    Student s1;
    s1.isStudent("Renu",19);
    s1.display();
    return 0;
}
