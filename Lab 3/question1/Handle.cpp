// Get help from: https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm

#include "Handle.h" 
#include "require.h"
#include <iostream>

struct Handle::Cheshire {
    int i;
};
Handle::Handle(){ // Constructor
    std::cout << "Constructor." << std::endl;
}
void Handle::initialize() { 
    smile = new Cheshire; 
    smile->i = 0;
}
void Handle::cleanup() {
    delete smile;
}
int Handle::read() { 
    return smile->i;
}
void Handle::change(int x) { 
    smile->i = x;
}
Handle::~Handle(){ // Destructor
    std::cout << "Destructor." << std::endl;
}