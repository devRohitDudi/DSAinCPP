// maximum subarray
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int end = sizeof(arr)/sizeof(arr[0]);
    int cs = 0, maxSum = INT_MIN;
    for(int value : arr){
        cs += value;
        maxSum = max(maxSum, cs);
        if(cs<0){
            cs = 0;
        }
    }
    cout<<"maximum subarray is: "<<maxSum<<endl;
}