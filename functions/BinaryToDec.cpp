#include <iostream>
using namespace std;
int BinaryToDec(int input){
    int power = 1, ans = 0;
    while(input > 0){
        int remainder = input%10;
        ans += remainder * power;
        input /= 10;
        power *= 2;
    }
    return ans;
}

int main(){
    int input = 101010;
    cout<<"decimal number conversion of "<<input<<" is: "<<BinaryToDec(input)<<endl;
}