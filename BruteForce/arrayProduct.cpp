// product of array except self
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {1,3,2,4,5};
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i!=j){
                ans[i] *= nums[j];
            }
        }
    }
    cout<<"the answer is:"<<endl;
    for(int value: ans){
        cout<<value<<", ";
    }
}