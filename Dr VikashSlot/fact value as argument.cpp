#include<iostream>
using namespace std;
int fact(int x){
    if(x==1){
        return x;
    }
    return x*fact(x-1);
    
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}
