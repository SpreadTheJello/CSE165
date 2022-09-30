#include "Handle.h"
#include "Handle.cpp"

int main() { 
    Handle u; 
    u.initialize(); 
    u.read(); 
    u.change(1); 
    u.cleanup();
}