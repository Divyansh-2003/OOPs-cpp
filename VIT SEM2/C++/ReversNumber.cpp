#include <iostream>
using namespace std;
// Program to Reverse a Number
int ReversNumber(int n){
    int reverse = 0;
    while(n>0){
        reverse = reverse*10 + n%10;
        n = n/10;
    }
    return reverse;
}
int main(){
    int n;
    cout<<"Enter number "<<endl;
    cin>>n;
    cout<<ReversNumber(n)<<endl;
}
