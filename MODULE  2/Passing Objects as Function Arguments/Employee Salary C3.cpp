#include<iostream>
using namespace std;

class Employee{
    private:
        int Salary;
        int Shares;
    public:
        void setData(){
            cout<<"Enter Salary: "<<endl;
            cin>>Salary;
            cout<<"Enter Shares: "<<endl;
            cin>>Shares;
        }
        void totalData(Employee x,Employee y){
            Salary = x.Salary + y.Salary;
            Shares = x.Shares + y.Shares;
        }
        void printData(){
            cout<<" Salary: "<<Salary<<endl;
            cout<<" Shares: "<<Shares<<endl;
        }
        
        void printTotalData(){
            cout<<"Total Salary: "<<Salary<<endl;
            cout<<"Total Shares: "<<Shares<<endl;
        }
};

int main(){
    Employee vaasu,mohit,total;
    vaasu.setData();
    vaasu.printData();
    
    mohit.setData();
    mohit.printData();
    
    total.totalData(vaasu,mohit);
    
    total.printTotalData();
}
