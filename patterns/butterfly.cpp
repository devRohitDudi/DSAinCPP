// *     *
// **   **
// *** ***
// *******
// *******
// *** ***
// **   **
// *     *
#include <iostream>
using namespace std;
int main(){
    int num = 4;
    for(int i = 1; i<=num; i++){
        for (int j = 0;j < i;j++){
            cout<<"*";
        }
        for(int k = 0; k < 2 * (num - i); k++){
            cout<<" ";
        }
        for (int j = 0;j < i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i<=num; i++){
        for (int j = num; j > i ;j--){
            cout<<"*";
        }
        for(int k = 0; k < i*3 -i; k++){
            cout<<" ";
        }
        for (int j = num;j > i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}