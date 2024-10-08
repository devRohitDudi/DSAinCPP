#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;
    int ps = 0;
    while(i<j){
        int ps = nums[i] + nums[j];
        if(ps < target){
            i++;
        }
        else if(ps > target){
            j--; 
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
vector<int> nums = {2,3,4,5,6};
int target = 7;
vector<int> ans = pairSum(nums, target);

cout<<ans[0]<<", "<<ans[1]<<endl;
}