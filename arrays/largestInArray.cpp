#include <iostream>
using namespace std;
int main(){
    int nums[] = {12,343,-23,54,1};
    int totalIndex = sizeof(nums) / sizeof(int);
    int forLargest = INT_MIN;

    for(int i = 0; i < totalIndex; i++){
        if (forLargest < nums[i]){
            forLargest = nums[i];
        }
    }
    cout<<"the largest num is: "<<forLargest<<endl;
}