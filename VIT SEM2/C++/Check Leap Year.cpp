#include <iostream>
using namespace std;
// Program to Check Leap Year
bool Check_Leap_Year(int n){
    if((n % 400 == 0) && (n%100 == 0 )){
        return 1;
    }
    else if((n % 4 ==0) && (n % 100 != 0)){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter year "<<endl;
    cin>>n;
    cout<<Check_Leap_Year(n)<<endl;
    
}
