#include <iostream>
using namespace std;

int main() {

    cout << "Row: ";
    int r;
    cin >> r;

    cout << "Column: ";
    int c;
    cin >> c;

    int matrix[r][c];

    cout << "Enter first matrix:\n";

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    int matrices[r][c];

    cout << "Enter second matrix:\n";

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> matrices[i][j];
        }
    }

    int sum[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = matrix[i][j] + matrices[i][j];
        }
    }

    cout << "Sum:\n";

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}