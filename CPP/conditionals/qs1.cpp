#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "enter a character: \n";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z'){
        cout << "lowercase" << endl;
    }
    else {
        cout << "UPERCASE" << endl;
    }
    int number = 12;
    cout << (number >= 0? "positive": "negetive");
    return 0;
}