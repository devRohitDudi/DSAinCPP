#include <iostream>
using namespace std;
int digitSum(int digit){
    int sum = 0;
    while(digit != 0){
        sum += digit%10;
        digit /= 10;
    }
    return sum;
}
int main(){
    int digit = 123;
    cout<<digitSum(digit)<<endl;
    return 0;
}