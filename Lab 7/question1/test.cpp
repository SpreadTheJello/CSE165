/*
Create a class (e.g.,myClass) that contains an array of 
char(e.g.,char myArray[100]). Add an inline constructor 
that uses the Standard C library function memset() to 
initialize the array to the constructor argument 
(default this to ‘ ’)(e.g., myClass(char c = ' '){ 
call memset(...) properly}), and an inline member function
called print() to print out all the characters in the 
array.

In main(), do the following:
1) create an object (e.g., myObj) of class myClass
2) call myObj.print( any character ) to print out all the 
characters in myArray.
*/

#include <iostream>
#include <cstring>
using namespace std;

class MyClass {
public:
    MyClass(char c = ' ') {
        memset(myArray, c, 100);
    }

    void print(char c) {
        for (int i = 0; i < 100; i++) {
            myArray[i] = c;
        }
        cout << myArray << endl;
    }
private:
    char myArray[100];
};

int main(){
    MyClass myObj;
    myObj.print('a');
    
    return 0;
}
