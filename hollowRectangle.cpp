#include <iostream>
using namespace std;

int main(){
    cout << "Enter how many  rows: ";
    int r; 
    cin >> r;

    cout << "Enter how many columns: ";
    int c;
    cin >> c;

    for(int i = 1; i<= r; i++){
        for (int j = 1; j<= c; j++){
            if((i == 1) || (i == r) || (j == 1) || (j == c)){
                cout << "* ";
            }

            else 
                cout << "  ";
        }
        cout << endl;
    }
}