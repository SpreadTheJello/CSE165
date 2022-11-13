/* 
Create a class containing both a const and a non-const float. 
Initialize f1 and f2 using the constructor initializer list. 

a. No output is needed. 
b. Just ensure that your code will (1) instantiate 
you-defined-class in main() and (2) use the constructor 
initializer list to initialize the above-mentionedconst 
and non-const floats.
*/

#include <iostream>
using namespace std;

class MyClass {
    const float f1;
    float f2;
public:
    MyClass() : f1(0.0), f2(0.0) {}
    MyClass(float f1, float f2) : f1(f1), f2(f2) {}
};

int main(){
    MyClass mc(1.5, 2.3);
    
    return 0;
}


