// practice questions:
// 28-7-25

// 1.
// to print the value of x:

#include<iostream>
using namespace std;
#include <memory>
int main() { 
    unique_ptr<int> x(new int(12)); 
    cout<<*x;
    return 0; 
} 

// 2.
// to print the number of owners:

#include<iostream>
using namespace std;
#include<memory>
int main()
{
    shared_ptr<int> a(new int(100)); 
    shared_ptr<int> b = a; 
    shared_ptr<int> c = b; 
    cout << a.use_count() <<endl; 
}

// 3.
// i) Line A: Create a smart pointer to a double with value 5.5

// #include <iostream> 
using namespace std;
#include <memory> 
int main() { 
    shared_ptr<float> n(new float(5.5));
    cout <<*n<<endl; 
    return 0; 
} 

// ii) to print the number of owners:

// #include <iostream> 
using namespace std;
#include <memory> 
int main() { 
    shared_ptr<float> n(new float(5.5));
    shared_ptr<float> m = n;
    shared_ptr<float> o = m;
    cout<<n.use_count() <<endl;
}

