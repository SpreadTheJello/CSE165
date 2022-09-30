#include <iostream>
using namespace std;

class IntArray{
public:
    int size;
    int arr[10];
    int *p; // pointer that will be used later

    IntArray(){
        size = 10; 
        for(int i = 0; i < size; i++){ // sets array of 10 to: 1, 2, 3, 4..., 10.
            arr[i] = i + 1;
        }
        p = arr;
    }

    void printArray(){ // member function
        for(int i = 0; i < size; i++){
            cout << *(p + i) << " ";
        }
        cout << endl;
    }
};

int main(){
    IntArray arr;
    arr.printArray();
    
    return 0;
}