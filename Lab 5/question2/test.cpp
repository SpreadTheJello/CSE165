/* 
Create a vector< Counted*>and fill it with pointers to 
new Counted objects (from Exercise 1). Move through the 
vector and print the Countedobjects, then move through
again and delete each one.
*/

#include <iostream>
#include <vector>
using namespace std;

// From exercise 1
class Counted {
    int id;
    static int count;
public:
    Counted() : id(count++) { 
        cout << "An object is being created is created, id: " << id << endl; 
    }
    ~Counted() { 
        cout << "The created object is being destroyed, id: " << id << endl; 
    }
// added operator to be friend in order to print pointers of id
friend ostream& operator<< (ostream& out, const Counted& out2);
};

int Counted::count = 0;

// allows us to print pointers of id
ostream& operator<< (ostream& out, const Counted& out2) {
    out << out2.id;
    return out;
}

int main() {
    vector<Counted*> v;

    for (int i = 0; i < 10; i++) // addes to vector
        v.push_back(new Counted);

    cout << "Vector contains: ";
    for (int i = 0; i < v.size(); i++) // prints vector
        cout << *v[i] << ' '; // uses our new operator access
    cout << endl;

    while (v.size() > 0) { // deletes vector
        Counted* temp = v.back();
        v.pop_back();
        delete temp;
    }
    return 0;
}