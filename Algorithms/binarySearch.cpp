#include <iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr, int target){
    int st = arr[0], end = arr.size()-1;
    while (st<=end)
    {  int mid = (st+end)/2;
       if(target < arr[mid]){
            end = mid-1;
       }
       else if(target>arr[mid]){
         st = mid+1;
       }
       else{
         return mid;
       }
    }
    return -1;
}
int main(){
    int target = 7;
    vector<int> arrOdd = {-2,0,3,6,7,8,9};
    vector<int> arrEven = {-2,0,3,7,8,9,12,15};
    
    int ans = BinarySearch(arrEven,target);
    cout<<"the target "<<target<<" is exists at "<<ans<<"th Index on array."<<endl;
}