/* 
Create a class Counted that contains an int id and a static int count. 
The default constructor should begin: Counted() : id(count++). It should 
also print its id and that it’s being created. The destructor should print 
that it’s being destroyed and its id. Test your class.
*/
#include <iostream>
using namespace std;

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
};

int Counted::count = 0;

int main() {
    Counted obj1, obj2;
    return 0;
}