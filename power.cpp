#include <iostream>
using namespace std;

int power (int a, int b){
    if( b == 0) return 1;

    return a * power (a, b-1);

}


int main(){
    cout << "Enter a number: ";
    int a;
    cin>> a;


    cout << "Enter power: ";
    int b;
    cin >> b;

    cout << power( a, b) << endl;

}