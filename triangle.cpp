#include <iostream>
using namespace std;

int main(){
    cout << "Enter three Sides. First one: ";
    int a;
    cin >> a;

    cout << "Second one: ";
    int b;
    cin >> b;

    cout << "Third one: ";
    int c;
    cin >> c;

    if(a + b > c && a + c > b && b + c > a)
        cout << "Yes";
    
    else 
        cout << "No";
}