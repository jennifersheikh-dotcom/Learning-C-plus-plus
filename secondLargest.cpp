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
    for(int i = 0; i < n; i++){
        if(arr[i] > l)
            l = arr [i];
    }

    int sl = arr[0];
    for(int i = 0; arr[i] < l; i++){
        if(arr[i] > sl)
            sl = arr[i];
    }

    cout << "Second largest: " << sl;
    
}