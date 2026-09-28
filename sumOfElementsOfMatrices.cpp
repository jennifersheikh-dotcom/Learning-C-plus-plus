#include <iostream>
using namespace std;

int main(){
    cout << "Rows: ";
    int r;
    cin >> r;

    cout << "Columns: ";
    int c;
    cin >> c;

    int matrices[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> matrices[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum = sum + matrices[i][j];
        }
    }

    cout << sum;
}