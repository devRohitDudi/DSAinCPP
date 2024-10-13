#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> height = {1,7,4,3,8,4,6};
    int maxWater = 0;
    int lp = 0, rp = height.size()-1;
    while(lp<rp){
        int w = rp-lp;
        int ht = min(height[rp], height[lp]);
        maxWater = max(maxWater,w*ht);
        height[lp]<height[rp]? lp++:rp--;
    }
    cout<<"this container can store maximum water of: "<<maxWater<<"m^2"<<endl;
}