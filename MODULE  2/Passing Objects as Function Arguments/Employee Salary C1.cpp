#include<iostream>
using namespace std;

class Employee{
    private:
        int Salary;
        int Shares;
    public:
        void setData(int a,int b);
        
        void totalData(Employee x,Employee y);
        
        void printData(){
            cout<<"Total Salary: "<<Salary<<endl;
            cout<<"Total Shares: "<<Shares<<endl;
        }
};

void Employee :: setData(int a,int b){
    Salary=a;
    Shares=b;
    }

void Employee :: totalData(Employee x,Employee y){
    Salary = x.Salary + y.Salary;
    Shares = x.Shares + y.Shares;
    }


int main(){
    Employee vaasu,mohit,total;
    vaasu.setData(100,2);
    mohit.setData(150,1);
    
    total.totalData(vaasu,mohit);
    
    total.printData();
}
