#include <iostream>
using namespace std;
int DecToBinary(int num){
    int power = 1, ans = 0;
    while(num > 0){
        int remainder = num%2;
        num /= 2;

        ans += (remainder * power);
        power *= 10; 
    }
return ans;
}
int main(){
    int input = 20;
    cout<<"Binary conversion of "<<input<<" is: "<<DecToBinary(input)<<endl;
}
