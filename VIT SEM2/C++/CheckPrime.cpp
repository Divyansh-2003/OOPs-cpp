#include <iostream>
using namespace std;
// Program to Check Whether a Number is Prime or Not
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
    int n;
    cout<<"Enter number "<<endl;
    cin>>n;
    cout<<Prime(n)<<endl;
}
