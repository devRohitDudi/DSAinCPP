#include <iostream>
using namespace std;
int main(){
    int num = 5;
    for (int i = 1; i <= num ; i++){
        for (int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int k = num; k > i; k--){
            cout<<i;
        }
        cout<<endl;
    }
}