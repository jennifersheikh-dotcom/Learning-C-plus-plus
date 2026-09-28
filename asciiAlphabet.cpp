#include <iostream>
using namespace std;

int main(){
    int i, j;

    for(i = 65, j = 97; i <= 90, j <= 122; i++, j++ ){
        cout << (char)i << "\t\t" << (char)j << endl;
    }
}
