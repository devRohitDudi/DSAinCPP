#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,7,9};
    cout<<"array pointer 1st index address is: "<<arr<<endl;
    cout<<"array pointer 1st index value is: "<<*arr<<endl;
    cout<<"array pointer 2nd index value is:"<<*(arr+1)<<endl;
    cout<<"array pointer 3rd index value is:"<<*(arr+2)<<endl;
}