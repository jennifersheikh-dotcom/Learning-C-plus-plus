#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int x;
    cin >> x;

    if(x % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}