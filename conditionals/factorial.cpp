#include <iostream>
using namespace std;
int main(){
    int num = 5;
    int ans = 1;
    for (int i = 1; i <= num; i++){
        ans *= i;

    }
    cout<<"the answer is:"<<ans<<endl;
    return 0;
}