#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5};
    int maxSum = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int start = 0; start < n; start++){
        int curSum = 0;
        for(int end = start; end<n; end++){
            curSum += arr[end];
            maxSum = max(maxSum,curSum);
        }
    }
    cout<<"maximum sum of subarray is: "<<maxSum<<endl;
}