#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number you want you want highest factor of: ";
    int n;
    cin >> n;

    int f = 1;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            f = i;
        }
    }

    cout << "Highest factor of " << n << " except itself is " << f;
}