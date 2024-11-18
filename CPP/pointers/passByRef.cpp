#include<iostream>
using namespace std;
void changeNum(int* num){
    *num = 20;
}
int main(){
    int a = 10;
    changeNum(&a);
    cout<<a<<endl;
}