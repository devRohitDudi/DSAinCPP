#include <iostream>
using namespace std;
// int* reverse(int totalIndex, int arr[]){
//     int ansArr[totalIndex];
//     for(int i = totalIndex; i >= 0; i--){
//         for(int j = 0; j <= totalIndex; j++){
//             ansArr[j] = arr[i];
//         }
//     }
//     return ansArr;
// }
int main(){
    int arr[] = {3,5,7,65,9,4,22};
    int total = sizeof(arr) / sizeof(int);
    //int* reversedArray = reverse(total, arr);
    //cout<<"the reversed array is: "<<reversedArray<<endl;
    int newArr[total];
    int index = 0;
    for(int i = total-1; i >= 0; i--){
            newArr[index] = arr[i];
            index++;
    }
    cout<<"the reversed array is: "<<endl;
    for(int i = 0;i < total;i++){
        cout<<newArr[i]<<" ";
    }
    }
    
// already did