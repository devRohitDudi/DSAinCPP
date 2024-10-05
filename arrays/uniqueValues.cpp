#include <iostream>
using namespace std;
int unique(int arr[], int totalIndex){
    for(int i = 0; i<totalIndex; i++){
        for(int j = i+1; j < totalIndex; j++){
            if(arr[i] == arr[j]){
                int ans = arr[j];
                return ans;
                break;
            }
        }
    }
    return 0;
}
int main(){
    int arr[] = {12,13,14,15,12,13,14};
    int totalIndex = sizeof(arr)/sizeof(int);
    int ans = unique(arr,totalIndex);
    cout<<"the duplicate value is: "<<ans;
}