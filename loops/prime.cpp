#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number: ";
    cin>>number;
    bool isPrime;
    for(int i = 2;i*i <= number; i++){
        if (number % i == 0){
          isPrime = false;
          cout<<isPrime<<endl;
          break;
        }
        else{
            isPrime = true;
        }
    }
    cout<<isPrime<<endl;
    return 0;
}
