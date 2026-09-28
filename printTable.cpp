#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number you want table of: ";
    int n;
    cin >> n;

    cout << "Table of" << n << endl;
    for (int i  = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
}