#include <iostream>
using namespace std;
void fibonacci(int n){
  
  int a= 0, b= 1, c;
  for (int i = 2; i <= n; i++){
    c= a+b;
    a = b;
    b = c;
    
  }
  cout<<"the fibonacci of "<<n<<" is: "<<c<<endl;
  return;
}
int main(){
 int n = 10;
 if (n==0){
    cout<<"fibonacci can't be of zero";
 }
 else{
    fibonacci(n);
 }
 
}