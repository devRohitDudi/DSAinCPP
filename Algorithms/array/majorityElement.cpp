#include<iostream>
#include<vector>
using namespace std;
    int majority(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int freq = 1, ans = nums[0];
    for(int i = 1; i < n; i++){
        
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,1,1,1,4};
    int ans = majority(nums);
    cout<<"the majority element is: "<<ans<<endl;
}