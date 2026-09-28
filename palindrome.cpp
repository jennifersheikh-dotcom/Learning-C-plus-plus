#include <iostream>
using namespace std;

int main(){
    cout << "Enter how many numbers: ";
    int n;
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool palindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}

