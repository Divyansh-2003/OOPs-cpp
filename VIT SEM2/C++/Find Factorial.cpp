#include <iostream>
using namespace std;
// Program to Find Factorial
int Factorial(int n){
    if(n==1){
        return 1;
    }
    return n*Factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter number "<<endl;
    cin>>n;
    cout<<Factorial(n)<<endl;
    
}
