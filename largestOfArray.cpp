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

    int l = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] > l)
            l = arr [i];
    }

    cout << "Largest number of the array is: " << l;
}