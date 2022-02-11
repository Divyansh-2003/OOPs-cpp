#include <iostream>
using namespace std;
//Program to Display Prime Numbers Between Two Intervals
bool Prime(int n){
    int i = n/2;
    while(i>1){
        if(n%i == 0){
            return false;
        }
        i = i - 1;
    }
    return true;
}
int main(){
    int x,y;
    cout<<"Enter numbers "<<endl;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(Prime(i)){
            cout<<i<<" ";
        }
    }
}
