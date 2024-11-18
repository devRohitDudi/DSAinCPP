#include <iostream>
using namespace std;
int main(){
    int forMin = INT_MAX;
    int marks[] = {12,45,78,2,45};
    int totalIndex = sizeof(marks) / sizeof(int);

    for(int i = 0; i < totalIndex; i++){
        if (marks[i] < forMin ){
            forMin = marks[i];
        }
    }
    cout<<"the minimum marks in array is: "<<forMin<<endl;
}
