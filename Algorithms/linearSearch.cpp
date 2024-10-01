#include <iostream>
using namespace std;

int linearSearch(int total, int input, int arr[]){
    
    for (int i = 0; i <= total; i++){
    if(arr[i] == input){
        return i+1;
        break;
    }
  }
  return -1;
}

int main(){
int arr[] = {2,5,7,9,3,6,8,5};
int input = 8;
int totalIndex = sizeof(arr) / sizeof(int);
int ans = linearSearch(totalIndex,input,arr);
cout<<"the input "<<input<<" is stored at index: "<<ans<<endl;
}
