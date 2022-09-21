#include <iostream>
using namespace std;

// Takes in a char* and copies it into another allocated space of input size and returns the pointer
char* duplicate(char* input){
    // Gets the length of input
    int length;
    for(length = 0; input[length] != '\0';){
        length++;
    }

    // Allocates space for the copied input using the length of the input
    char* copy_input = new char[length];

    // Puts the chars in input into the copied input
    int i;
    for(i = 0; i < length; i++){
        copy_input[i] = input[i];
    }
    copy_input[i]='\0'; // null terminator

    return copy_input;
}

int main(){
    char* original = "This is a sentence.";
    char* copy = duplicate(original);
    char* copy2 = duplicate(copy);
    cout << "Original sentence: " << original << endl;
    cout << "Copied sentence: " << copy << endl;
    cout << "Copied sentence address: " << &copy << endl;
    cout << "Copied the copied sentence: " << copy2 << endl;
    cout << "Copied the copied sentence address: " << &copy2 << endl;

    delete[] copy;
    delete[] copy2;
    return 0;
}