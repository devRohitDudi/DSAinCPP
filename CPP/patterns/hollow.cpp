#include <iostream>
using namespace std;
int main(){
    int num = 4;
    for(int i=0; i<num; i++){
        
        for(int j = num; j>i; j--){
            cout<<" ";
        } 
            cout<<"*";

            for(int k = 0; k < 2*i-1; k++){
            cout<<" ";
             }
         
          if (i!=0){
            cout<<"*";
            }
        
        cout<<endl;
    }
    for(int i = 0; i < num-1; i++){
         for(int k = 0; k < i+2; k++){
            cout<<" ";
             }

            cout<<"*";
            
         if(i!=(num-2)){

            for(int j = 0; j < 2 * (num-i) - 5; j++){
                cout<<" ";
            }

            cout<<"*";
         }

        cout<<endl;
    }
      return 0;
}