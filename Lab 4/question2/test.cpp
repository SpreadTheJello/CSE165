#include <iostream>

using namespace std;

void modify(int**& pp) {
    int x = 10;
    *pp = &x;
}

int main() {

    int x = 100; // x is 100
    int* p = &x; // p is 100
    int** pp = &p; // pp is 100

    cout << *(*pp) << endl; // 100
    modify(pp); // changes pp to 10
    cout << *(*pp) << endl; // 10

    return 0;
}