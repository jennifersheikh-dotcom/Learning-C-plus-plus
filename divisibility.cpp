#include <iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int x;
    cin >> x;

    if(x % 3 == 00 || x % 5 == 00){
        if (x % 3 ==0 && x % 5 != 0)
            cout << "Only divided by 3!";
        
        else if(x % 3 != 0 && x % 5 == 0)
            cout << "Only divided by 5!";
        
        else 
            cout << "Divided by both 3 and 5";
    }

    else 
        cout << "Divided by none!";
}