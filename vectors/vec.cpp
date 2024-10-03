#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1,3,5,7};
    cout<<vec[0]<<endl;
    cout<<"size = "<<vec.size()<<endl;
    vec.push_back(9);
    cout<<"size after push_back = "<<vec.size()<<endl;
    vec.pop_back();
    vec.pop_back();
    cout<<"size after pop_back = "<<vec.size()<<endl;

    cout<<"vector first index value is: "<<vec.front()<<endl;
    cout<<"vector last index value is: "<<vec.back()<<endl;
    cout<<"vector second index value is: "<<vec.at(1)<<endl;

    for(int val : vec){
        cout<<vec[val]<<" ";
    } 
}