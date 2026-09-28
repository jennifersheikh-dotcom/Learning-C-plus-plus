#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    int f = 1;

    for(int i = 1; i < n; i++){
        if (n % i == 0){
            f = i;
        }
    }

    if(f > 1){
        cout << n << " is a composite number.";
    }

    else 
        cout << n << " is a prime number";

}