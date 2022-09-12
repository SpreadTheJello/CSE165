#include <iostream>
using namespace std;

int main(){
    int radius;
    float result;

    cout << "Enter the radius of a circle: ";
    cin >> radius;
    result = (atan(1)*4)*(radius*radius);
    cout << result << endl;
    
    return 0;
}