#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout<<"original value in int pointer is: "<<ptr<<endl;
    ptr = ptr+1;
    cout<<"after increment 1 int memory: "<<ptr<<endl;
    ptr = ptr+3;
    cout<<"after increment 4 int memory: "<<ptr<<endl;
}