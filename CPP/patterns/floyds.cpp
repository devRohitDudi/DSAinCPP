#include <iostream>
using namespace std;
int main(){
    int input = 5;
    int ch = 'A';
    for(int i = 1; i < input; i++){
        for(int j = 0; j < i; j++){
            cout<<char(ch)<<" ";
            ch++;
        }
        cout<<endl;
    }
}