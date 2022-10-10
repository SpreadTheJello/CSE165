#include <iostream>

using namespace std;

int& func(int* num) {
    int& num2 = *num;
    num2 = 200;
    return num2;
}

int main() {

    int x = 100;
    cout << "x value before passing into function: " << x << endl;
    cout << "x value after passing into function: " << func(&x) << endl;

return 0;
}