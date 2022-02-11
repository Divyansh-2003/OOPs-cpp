#include <iostream>
#include <math.h>
using namespace std;
// Program to Find All Roots of a Quadratic Equation
void QuadraticRoots(int a, int b, int c, int d){
    float r1,r2;
    if(d==0){
        r1 = -b / (2*a);
        r2 = r1;
    }
    else{
        r1 = (-b + sqrt(d))/(2 * a);
        r2 = (-b - sqrt(d))/(2 * a);
    }
    cout<<"ROOTS ARE "<<r1<<" and "<<r2<<endl;
}
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float d = b * b - 4 * a * c;
    if(d>=0){
       QuadraticRoots(a,b,c,d);
    }
    else{
        float real = -b / (2 * a);
        float img = sqrt(-d) / (2 * a);
        cout<<"ROOTS ARE :-"<<endl;
        cout<<real<<" + "<<img<<" i and ";
        cout<<real<<" + "<<img<<" i "<<endl;
    }
}
