#include <iostream>
using namespace std;
//Program to Check Armstrong Number
bool ArmstrongNumber(int n){
    int r,temp=n,sum=0;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r); 
        n=n/10;
    }
    if(temp == sum){
        return true;
    }
    return false;
    
}
int main(){
    int n;
    cout<<"Enter number "<<endl;
    cin>>n;
    cout<<ArmstrongNumber(n)<<endl;
}
