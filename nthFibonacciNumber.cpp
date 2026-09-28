#include <iostream>
using namespace std;

int fib(int n);

int nthFib(int n){
    return fib(n);
}

int fib(int n){
    if(n == 0 || n == 1) return n;

    return fib (n - 1) + fib (n - 2);
}

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout << "The fibonacci number at position " << n << " is: " << nthFib(n);
}