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

    int transpose[c][r];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            transpose[j][i] = matrices[i][j];
        }
    }

    for(int j = 0; j < c; j++){
        for(int i = 0; i < r; i++){
            cout << transpose[j][i] << " ";
        }
        cout << endl;
    }
}