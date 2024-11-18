#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,5,7,4,8,50};
    int totalIndex = sizeof(arr)/ sizeof(int);
    int forMin = INT_MAX;
    int forMax = INT_MIN;
    for(int i = 0; i < totalIndex; i++){
        if(arr[i] < forMin){
            forMin = i;
        }
    }
    for(int i = 0; i < totalIndex; i++){
        if(arr[i] > forMax){
            forMax = i;
        }
    }
    swap(arr[forMin], arr[forMax]);
    cout<<"array after swaping"<<endl;
    for(int i = 0; i < totalIndex; i++){
    cout<<arr[i]<<" ";
    }
}