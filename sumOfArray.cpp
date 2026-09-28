#include <iostream>
using namespace std;

int main(){
    cout << "Enter how many numbers: ";
    int n;
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + arr [i];
    }

    cout << "Sum: " << sum;
}