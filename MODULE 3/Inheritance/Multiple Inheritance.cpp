#include<iostream>
using namespace std;

class Base1{
    int Num1;
public:
    int Num2;
    void setData1(int a, int b){
        Num1 = a;
        Num2 = b;
    }
    int returnNum1(){
        return Num1;
    }
    
};

class Base2{
    int Num3;
public:
    int Num4;
    void setData2(int a, int b){
        Num3 = a;
        Num4 = b;
    }
    int returnNum3(){
        return Num3;
    }
    
};

class Derived : public Base1, public Base2{
    public:
        void printSum(){
            cout<<Num2 + Num4 + returnNum1() + returnNum3()<<endl;
        }
};

int main(){
    Derived d1;
    d1.setData1(1,2);
    d1.setData2(3,4);
    d1.printSum();
}
