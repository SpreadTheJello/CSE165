/*
Create a class (MyClass) with member functions that throw exceptions.
Within this class, make a nested class (MyException) to use as an exception
object. It takes a single const char* as its argument; (MyException(const 
char* str) {myString = str;} Note myString is aprivate data member of 
MyException) this represents a description string. Create a member 
function (myFun) that throws this exception. (State this in the function’s
exception specification.) Write a try block that calls this
function and a catch clause that handles the exception by
displaying its description string. (printException)

In main(), do the following:
a. Create an object (e.g., myObj) of MyClass.
b. Write a try block that calls myObj.myFun().
c. Write a catch clause that handles the exception by printing out its 
description string (i.e., calling the member function printException() 
of MyException).
*/

#include <iostream>

class MyClass {
public:
    class MyException {
        const char* myString;
    public:
        MyException(const char* str) {myString = str;}
        void printException() {
            std::cout << myString << std::endl;
        }
    };
    
    void myFun() throw(MyException) {
        throw MyException("My Exception");
    }
};

int main(){
    MyClass myObj; // object creation
    try {
        myObj.myFun(); // calls myFun()
    }
    catch (MyClass::MyException& e){ // catch clause to call printException()
        e.printException();
    }
    return 0;
}
