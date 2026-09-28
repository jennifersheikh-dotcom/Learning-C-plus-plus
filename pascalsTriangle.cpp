#include <iostream>
using namespace std;

int ncr(int p, int q);
int factorial(int a);

void pascal (int n){
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
}

int ncr(int p, int q){
    int c = factorial(p)/(factorial(q) * factorial(p - q));
    return c;
}

int factorial (int a){
    int f = 1;
    
    while (a != 0){
        f = f*a;
        a--;
    }

    return f;
}

int main(){
    cout << "Print Pasacal's triangle upto: ";
    int n;
    cin >> n;

    pascal(n);

    return 0;
}