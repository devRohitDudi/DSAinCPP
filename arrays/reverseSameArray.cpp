#include <iostream>
using namespace std;
int main(){
    int arr[] ={2,43,65,2,7,3,6,51,1};
    int totalIndex = sizeof(arr) / sizeof(int);
    int lastIndex = totalIndex-1;
    int firstIndex = 0;

    for(int i = 0 ; i <= totalIndex/2; i++){
    swap(arr[firstIndex+i], arr[lastIndex-i]);
    }

    cout<<"reversed array is: "<<endl;
    for (int i = 0; i < totalIndex; i++){
        cout<<arr[i]<<" ";
    }
}
// already did