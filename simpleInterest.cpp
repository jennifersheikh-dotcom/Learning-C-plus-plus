#include<iostream>
using namespace std;

int main(){
    cout << "Enter Yearly Rate: ";
    float r;
    cin >> r;

    cout << "Enter number of years: ";
    int n;
    cin >> n;

    cout << "Enter investment: ";
    float P;
    cin >> P;

    float I = P * (r / 100) * n;

    cout << "Yearly Interest: " << I;
}