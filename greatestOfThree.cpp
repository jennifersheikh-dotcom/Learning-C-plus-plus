#include <iostream>
using namespace std;

int main(){
    cout << "Enter 3 numbers. First one: ";
    int a;
    cin >> a;

    cout << "Second one: ";
    int b;
    cin >> b;

    cout << "Third one: ";
    int c;
    cin >> c;

    if (a > b && a > c)
        cout << a << " is the greatest";
    
    else if (b > c && b > a)
        cout << b << " is the greatest";

    else 
        cout << c << " is the greatest";

}