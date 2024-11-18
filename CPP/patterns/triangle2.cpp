#include <iostream>
using namespace std;
int main(){
    int num = 5;
    
    for(int i = 0; i < num; i++){
        int space = 5;
        for(int k = space; k <= 0; k--){
            cout<<" ";
            space--;
        }
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}