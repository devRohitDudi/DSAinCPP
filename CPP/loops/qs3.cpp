// sum of 1 to n which are divisible by 3
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int sum;
    for(int i = 1;i <= num;i++){
        if(i%3 == 0){
            sum += i;
        }
    }
cout<<"the sum of 1 to n which are divisible by 3 is:"<<sum<<endl;
    return 0;
}