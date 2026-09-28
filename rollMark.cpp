#include <iostream>
using namespace std;

int main(){
    cout << "Enter how many students: ";
    int n;
    cin >> n;

    int arr[n][2];

    for(int i = 0, j = 0; i < n , j < n; i++, j++){
        cout << "Enter roll: ";
        cin >> arr[i][0];

        cout << "Enter marks: ";
        cin >> arr[i][1];
    }

    cout << "Rolls: ";
    for(int i = 0, j = 0; i < n , j < n; i++, j++){
        cout << arr[i][0] << " " ;
    }

    cout << endl;

    cout << "Marks: ";
    for(int i = 0, j = 0; i < n , j < n; i++, j++){
        cout << arr[i][1] << " ";
    }
}