/*
Templatize the fibonacci() function on the type of value that it produces
(so it can produce long, float, etc. instead of just int).

Introduction to Fibonacci numbers:
The formula to calculate the (n + 1)th number in the sequence of Fibonacci 
numbers can be given as Fn= Fn-1 + Fn-2 where n > 1, 
    Fn-1 → nth Fibonacci number, 
    Fn-2 → (n - 1)th Fibonacci number,
    F0 = 0,
    F1 = 1.

In your implementation, fibonacci(n) returns Fn.
Output: In main(), call fibonacci(90) to print out F90
*/

#include <iostream>

using namespace std;
template <class T>
T fibonacci(T n){
    // from textbook fibonacci.cpp
    const int sz = 100;
    static T f[sz]; // initizaling the to 0
    f[0] = f[1] = 1;
    // Scan for unfilled array elements:
    int i;
    for(i = 0; i < sz; i++)
        if(f[i] == 0) break;
    while(i <= n){
        f[i] = f[i-1] + f[i-2];
        i++;
    }
    return f[n];
}

int main(){
    cout << fibonacci(90) << endl;
    return 0;
}