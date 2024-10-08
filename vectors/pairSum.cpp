#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
            }
        }
    }
    return ans;
}
int main(){
vector<int> nums = {2,3,2,4,5};
int target = 5;
vector<int> ans = pairSum(nums, target);

cout<<ans[0]<<", "<<ans[1]<<endl;
}