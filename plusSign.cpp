#include <iostream>
using namespace std;

int main() {

    int r;
    cout << "Enter an odd number: ";
    cin >> r;

    for(int i = 1; i <= r; i++) {

        for(int j = 1; j <= r; j++) {

            if(i == r / 2 || j == r / 2) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }

        cout << endl;
    }
}