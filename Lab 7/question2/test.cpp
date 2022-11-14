/*
Create a simple class (e.g.,mySimpleClass) containing an
int (e.g., intx) and overload the addition operator(+) and
the multiplication operator (*) as two member functions. 
Also provide a print() member function that takes an 
ostream& (e.g., cout) as an argument (e.g., void 
print(ostream& out)) and print x to that ostream& 
(e.g., out << x).

In main(), do the following:
1) create two objects (e.g., a and b) of class mySimpleClass.
2) create another object (e.g., c) of class mySimpleClass and
   let c = a * a + b * b.
3) call c.print(cout) to print x.
*/

#include <iostream>
using namespace std;

class mySimpleClass {
public:
    mySimpleClass(int x = 0) : x(x) {}

    mySimpleClass operator+(const mySimpleClass& rhs) {
        return mySimpleClass(x + rhs.x);
    }

    mySimpleClass operator*(const mySimpleClass& rhs) {
        return mySimpleClass(x * rhs.x);
    }

    void print(ostream& out) {
        out << x << endl;
    }
private:
    int x;
};

int main(){
    mySimpleClass a(1), b(2), c;
    c = a * a + b * b;
    c.print(cout);
    
    return 0;
}