#include <iostream>
using namespace std;

void printNto1(int n){
    cout << n << endl;

    if(n == 0) return;
    printNto1 (n - 1);
}

int main(){
    cout << "Enter n: ";
    int n;
    cin >> n;

    printNto1(n);
}