#include<iostream>
using namespace std;
/*
int main(){
    int i = 65;
    char c = i;
    cout<<c<<endl;
    cout<<i<<endl;
}
*/
/*int main(){
    int i = 65;
    int * p = &i;
    
    //char * pc = (char*)p;
    //cout<<pc<<endl;
    char *pc = (char*)&i;
    cout<<pc<<endl;
}
*/
int main(){
    char ch = 'A';
    cout<<ch<<endl;
    
    char *pc = &ch;
    cout<<*pc<<endl;
    cout<<pc<<endl;
    
    
    
    
    
    
}



/*int main(){
    int i = 10;
    int * p = &i;
    cout<<p<<endl;
    
    cout<<*p<<endl;
    cout<<*p + 1<<endl;
    cout<<p+1<<endl;
}
*/
