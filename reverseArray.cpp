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

    for(int i = 0; i < n / 2; i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n - 1 -i];
        arr[n - 1 -i] = temp;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}