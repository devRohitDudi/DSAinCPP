// moore's voting algorithm
  
        #include<iostream>
#include<vector>
using namespace std;
    int majority(vector<int>& nums){
    int freq = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
}
int main(){
    vector<int> nums = {2,1,3,2,2,2,4};
    int ans = majority(nums);
    cout<<"the majority element is: "<<ans<<endl;
}