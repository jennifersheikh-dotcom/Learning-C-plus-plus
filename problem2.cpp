// input a string and update all the 
// even positions in the string to character 'a'


#include <iostream>
using namespace std;

int main(){
    cout << "Enter a string: ";
    string s;
    getline(cin, s);

    for(int i = 0; i < s.length(); i++){
        if((i == 0 || i % 2 == 0) && s[i] != ' ')
            s[i] = 'a';
    }

    cout << s;
}
