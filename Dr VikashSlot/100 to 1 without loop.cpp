#include<iostream>
using namespace std;

int printNumber(int x){
    if(x == 1){
        return x;
    }
    cout<<x<<" ";
    return printNumber(x-1);
}

int main(){
    cout<<printNumber(100)<<endl;
}
