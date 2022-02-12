#include<iostream>
using namespace std;
#include<string.h>
class BankAccount{
    char name[100];
    int AccountNumber;
    char AccountType[100];
    float Balance;
    
    public:
    void setData(void){
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter account number"<<endl;
        cin>>AccountNumber;
        cout<<"Enter Type of account"<<endl;
        cin>>AccountType;
        cout<<"Enter Balance"<<endl;
        cin>>Balance;
    }
    void Display(void){
        cout<<name<<" has "<<Balance<<" balance in the bank account"<<endl;
    }
    void Deposit(void){
        int money;
        cout<<"Enter amount to deposit"<<endl;
        cin>>money;
        Balance = Balance + money;
        Display();
    }
    void Withdraw(void){
        int money;
        cout<<"Enter amount to withdraw"<<endl;
        cin>>money;
        if(money>Balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            Balance = Balance - money;
        }
        Display();
    }
};

int main(){
    BankAccount a,b,c;
    a.setData();
    a.Display();
    a.Deposit();
    a.Display();
    a.Withdraw();
    a.Display();
    
}
