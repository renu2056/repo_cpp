// unique ptr example:

#include <iostream> 
using namespace std;
#include <memory>
int main() { 
    nique_ptr<int> p1(new int(42)); 
    out << "Number: " <<*p1<<endl;  // No delete needed—done automatically! 
    return 0; 
} 


// shared ptr example:

#include <iostream> 
using namespace std;
#include <memory> 
int main() { 
    shared_ptr<int> p1(new int(99)); 
    shared_ptr<int> p2 = p1; // Both share the memory!  
    cout << "p1: " << *p1 <<"\n"<< "p2: " << *p2 <<endl<<"Count: " << p1.use_count() <<endl; 
    return 0; 
}
