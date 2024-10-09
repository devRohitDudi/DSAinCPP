#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,1,2,1,1,3};
    int n = nums.size();
    int majority = 0;
    for(int value: nums){
        int frequency = 0;
        for(int ele: nums){
            if(value == ele){
                frequency++;
                }
        }
        if(frequency > n/2){
        majority = value;
        break;
        }
    }
    cout<<majority<<endl;
}
    
