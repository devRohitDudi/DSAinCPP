#include <iostream>
using namespace std;
bool isPrime(int n){
    bool ans = false;
    for (int i = 2; i*i <= n; i++ ){
        if (n%i == 0){
            ans = false;
            return 0;
        }
        else{
            ans = true;
        }
    }
    return ans;
}
int main(){
    int num = 5;
    bool ans = isPrime(num);
    if(ans == true){
        cout<<num<<" is prime number"<<endl;
    }
    else{
        cout<<"not prime."<<endl;
    }
}