#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
 return (n > 0) && ((n & (n - 1)) == 0);
}

int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    if (isPowerOfTwo(n)){
        cout<<n<<" number is power of 2.";
    }
    else{
        cout<<"not power of 2.";
    }
}