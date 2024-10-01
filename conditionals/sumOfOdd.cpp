#include <iostream>
using namespace std;
int main(){
    int number = 10;
    int sum;
    for(int i = 1; i<10 ;i++){
       if (i%2 != 0){
       sum += i;
       }
    }
    cout<<"the sum of odd numbers is: "<<sum<<endl;
    return 0;
}