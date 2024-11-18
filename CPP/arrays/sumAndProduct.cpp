#include <iostream>
using namespace std;
int main(){
    int arr[] = {3,5,7,2};
    int totalIndex = sizeof(arr)/sizeof(int);
    int sum = 0;
    int product = 1;
    for(int i = 0 ; i < totalIndex; i++){
        sum += arr[i];
    }
    cout<<"the sum of all array elements is: "<<sum<<endl;

    for(int i = 0 ; i < totalIndex; i++){
        product *= arr[i];
    }
    cout<<"the product of all array elements is: "<<product;
}