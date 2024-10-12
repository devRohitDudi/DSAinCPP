#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x = 3, n = 4;
    long binform = n;
    double ans = 1;
    while(binform > 0){
        if(binform % 2 == 1){
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    cout<<"3 to the power "<<n<<" is: "<<ans<<endl;
}
