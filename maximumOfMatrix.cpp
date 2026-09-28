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

    int max = matrices[0][0];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if (matrices[i][j] > max)
                max = matrices[i][j];
        }
    }

    cout << max;

}