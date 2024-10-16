#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int* ptr = arr;
    cout<<"using another pointer arr 1st index address is: "<<ptr<<endl;
    cout<<"using another pointer arr 1st index address is: "<<*ptr<<endl;
    cout<<"after incrementing ptr by 1 int: "<<*(ptr+1)<<endl;
    cout<<"after incrementing ptr by 2 int: "<<*(ptr+2)<<endl;
}