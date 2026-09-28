#include <iostream>
using namespace std;

int main(){
    cout << "Enter Cost Price: ";
    int cp;
    cin >> cp;

    cout << "Enter Selling Price: ";
    int sp;
    cin >> sp;

    if(cp < sp){
        cout << "Seller has made a PROFIT!!" << endl;
        cout << "Percentage of profit: " << ((sp - cp) * 100.0 ) / cp << "%"; 
    }

    else if (cp > sp){
        cout << "Seller has encurred a LOSS!!" << endl;
        cout << "Percentage of loss: " << ((cp - sp) * 100.0 ) / cp << "%";
    }

    else 
        cout << "NO profit, NO loss!";
}