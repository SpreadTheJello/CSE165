#include <iostream>
using namespace std;
int main(){
    string str;
    int num;
    cin >> str;
    while(str != "stop"){
        if(str == "apple" || str == "banana" || str == "orange"){
            num = 1;
        }
        else if(str == "cucumber" || str == "artichoke" || str == "pumpkin"){
            num = 2;
        }
        else if(str == "milk" || str == "steak" || str == "chicken"){
            num = 3;
        }
        else{
            num = 4;
        }
        switch(num){
        case 1:
            cout << "this is a fruit" << endl;
            break;
        case 2:
            cout << "this is a vegetable" << endl;
            break;
        case 3:
            cout << "this is an animal product" << endl;
            break;
        case 4:
            cout << "no meaning" << endl;
            break;
        }
        cin >> str; 
    }
}