#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    int factorial = 1;
    while (n != 0){
        factorial *= n;
        n -- ; 
    }

    cout << factorial;
}