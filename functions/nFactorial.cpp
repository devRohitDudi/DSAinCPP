#include <iostream>
using namespace std;
int sumOfN(int n){
    int product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    return product;
}
int main(){
    cout<<sumOfN(5)<<endl;
    return 0;
}