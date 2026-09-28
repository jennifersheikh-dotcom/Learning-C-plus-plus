#include <iostream>
using namespace std;

int main(){
    cout << "Enter how many numbers: ";
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int factorial = 1;

        for(int j = 1; j <= i ; j++){
            factorial = factorial * j;
        }

        cout << i << "! = " << factorial << endl;
    }

}
