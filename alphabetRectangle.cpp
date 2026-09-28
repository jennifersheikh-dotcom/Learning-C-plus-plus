#include <iostream>
using namespace std;

int main(){
    cout << "Enter number of rows: ";
    int r;
    cin >> r;

    cout << "Enter number of columns: ";
    int c;
    cin >> c;

    for (int i = 1; i <= r; i++){
        for (int i = 1; i <= c; i++){
            cout << (char) (i + 64) << " " ;
        }
        cout << endl;

    }

}
