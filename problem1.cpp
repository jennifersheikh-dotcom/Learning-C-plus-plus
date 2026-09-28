//given an array of integers, change the value of all odd indexed elememts to its second multiple and increment all 
//even indexed integers by 10

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

    for (int i = 0; i < n; i++){
        if(i == 0 || i % 2 == 0)
            arr[i] = arr[i] + 10;

        else
            arr[i] = arr[i] * 2;
    }

    cout << "Modified array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}