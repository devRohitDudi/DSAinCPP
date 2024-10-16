#include<iostream>
using namespace std;
void changeNum(int &b){
    b = 20;
}
int main(){
    int a =10;
    changeNum(a);
    cout<<a<<endl;
}