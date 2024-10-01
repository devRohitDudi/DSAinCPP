#include <iostream>
using namespace std;
void prime(int n){
    bool isPrime = false;
    for(int num = 2; num <= n; num++){

        for (int i = 2; i*i <= num; i++ ){
        if (num%i == 0){
            cout<<num<<" is not prime."<<endl;
            break;
        }
        else{
            isPrime = true;
        }
    }
    cout<<num<<" is prime number."<<endl;
    }
    
}
int main(){
    int n = 15;
    prime(n);
}