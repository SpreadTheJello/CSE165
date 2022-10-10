// Help from: https://refactoring.guru/design-patterns/proxy/cpp/example
#include <iostream>

using namespace std;

class Subject {
public:
    virtual void f(){}
    virtual void g(){}
    virtual void h(){}
};

class Proxy : public Subject {
    Subject* subP;
public:
    Proxy(Subject* s) : Subject(), subP(s) {}
    void f(){ 
        subP->f(); 
    }
    void g(){ 
        subP->g(); 
    }
    void h(){ 
        subP->h(); 
    }
    void changeImplementation(Subject* s) { 
        subP = s; 
    }
};

class Implementation1 : public Subject {
public:
    void f(){ 
        cout << "Implementation1, f() called." << endl; 
    }
    void g(){ 
        cout << "Implementation1, g() called." << endl; 
    }
    void h(){ 
        cout << "Implementation1, h() called." << endl; 
    }
};

class Implementation2 : public Subject {
public:
    void f(){ 
        cout << "Implementation2, f() called." << endl; 
    }
    void g(){ 
        cout << "Implementation2, g() called." << endl; 
    }
    void h(){ 
        cout << "Implementation2, h() called." << endl; 
    }
};



int main() {
    Implementation1 i1;
    Implementation2 i2;

    Proxy p(&i1);

    p.f(); p.g(); p.h(); // calls f, g, h in Impl 1

    p.changeImplementation(&i2); // changes proxy to Impl 2
    cout << "changeImplemntation called." << endl;

    p.f(); p.g(); p.h(); // calls f, g, h in Impl 2

return 0;
}