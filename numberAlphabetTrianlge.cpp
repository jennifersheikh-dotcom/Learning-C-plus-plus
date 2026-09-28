#include <iostream>
using namespace std;

int main(){
    cout << "Enter number of rows: ";
    int r;
    cin >> r;

    for (int i = 1; i <= r; i++){
        for (int j = 1; j<= i; j++){
            if(i % 2 != 0){
                cout << j;
            }

            else 
                cout << (char)(j + 64);
        }
        cout << endl;
    }
}