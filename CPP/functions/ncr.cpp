#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r){
  int factN =  factorial(n);
  int factR =  factorial(r);
  int factNMR = factorial(n-r);
  int ans = factN / (factR * factNMR);
  return ans;
}
int main(){
int n = 8;
int r = 2;
cout<<"nCr of "<<n<<" and " << r <<" is: "<<ncr(8,2)<<endl;
}