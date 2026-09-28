#include <iostream>
using namespace std;

int main(){
    cout << "Enter number of rows: ";
    int r;
    cin >> r;
    
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= r - i + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}