#include <iostream>
using namespace std;
int main(){
    int ch = 'A';
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++ ){
            cout<<char(ch);
            ch = ch + 1;
        }
        cout<<endl;
    }
    return 0;
}