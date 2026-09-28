#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int x;
    cin >> x;

    if(x < 1000)
        cout << "YES! It is a three digit number. ";

    else 
        cout << "NO! It is not a three digit number. ";
}