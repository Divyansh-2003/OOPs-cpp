#include<iostream>
using namespace std;

// Base Class
class Employee{
    public:
        int id;
        int salary;
        
        //  Default Constructor
        Employee(){
            id = 0;
            salary = 1000;
        }
        
        Employee(int y){
            id = y;
            salary = 3000;
        }
        
};

// Derived class
class Programmer : public Employee{
    public: 
        int languageCode;
        
        Programmer(int y,int z){
            id = y;
            languageCode = z;
            salary = 5000;
            
        }
        
        void getData(){
            cout<<"Salary of employee with id: "<<id<<" and languageCode: "<<languageCode<<" is: "<<salary<<endl;
        }
};

int main(){
    Employee e1(1) , e2(2);
    cout<<e1.id<<endl;
    cout<<e1.salary<<endl;
    cout<<endl;
    cout<<e2.id<<endl;
    cout<<e2.salary<<endl;
    
    cout<<endl;
    cout<<"ACCESING Programmer CLASS"<<endl;
    cout<<endl;
    
    
    Programmer p1(1,1001) , p2(2,1002);
    cout<<p1.id<<endl;
    cout<<p1.salary<<endl;
    cout<<endl;
    cout<<p2.id<<endl;
    cout<<p2.salary<<endl;
    
    
    p1.getData();
    p2.getData();
}
