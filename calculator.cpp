#include <iostream>
using namespace std;

int main(){
    cout << "WELCOME TO CALCULATOR!!\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication \n";
    cout << "4. Division\n";
    cout << "Enter a choice (1-4): ";

    int c;
    cin >> c;

    if(c <= 0 || c >= 5)
        cout << "Invalid choice";

        cout << "Enter first number: ";
        int a;
        cin >> a;

        cout << "Enter second number: ";
        int b;
        cin >> b;

        switch (c){
            case 1: 
                cout << a + b;
            break;


            case 2:
                cout << a - b;
                break;

            case 3:
                cout << a * b;
                break;
            
            case 4:
                if ( b == 0)
                    cout << "Invalid! ";

                else 
                    cout << (float) a / b;
                break;

            default:
                return 0;
            
        }
}

