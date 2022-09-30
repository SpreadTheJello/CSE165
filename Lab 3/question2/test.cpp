#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Text { // creates a Text class
    string text; // string object
public:
    Text(){}; // default constructor
    Text(string filename){ // filename constructor
        // takes in file name and opens and reads the contents and puts it into the string object.
        // Got help from https://cplusplus.com/doc/tutorial/files/
        string line;
        ifstream file (filename.c_str()); // chose to do .c_str() since we're using std::string (https://stackoverflow.com/questions/4640162/does-ifstream-accept-variable-file-name)
        if(file.is_open()){ 
            while(getline(file, line)){
                text += line + '\n';
            }
            file.close();
        }
    }; 

    string contents(){ // member function to return strings
        return text;
    }
};

int main(){
    Text string1; // default text object
    Text string2("input.txt"); // text object with file name input

    cout << "string1: " << string1.contents() << endl;
    cout << "string2: " << string2.contents() << endl;
    
    return 0;
}

