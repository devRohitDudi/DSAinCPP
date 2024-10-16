#include<iostream>
using namespace std;
int main(){
    int* ptr1;
    int* ptr2 = ptr1 + 2;
    cout<<ptr2-ptr1<<endl;
}