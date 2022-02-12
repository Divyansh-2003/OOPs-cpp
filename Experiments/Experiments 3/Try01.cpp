#include<iostream>
using namespace std;
#include<string.h>
#include<math.h>
class Account{
    public:
        char name[100];
        int AccountNumber;
        char AccountType[100];
        float Balance;

        void setData(void){
            cout<<"Enter Name"<<endl;
            cin>>name;
            cout<<"Enter account number"<<endl;
            cin>>AccountNumber;
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
        
    
};

class Current_account : public Account{
    public:
        void panelty(void){
            if(Balance<1000){
                Balance = Balance - 100;
                cout<<"Rs. 100 service charge imposed as minimum balance should be more than Rps 1000"<<endl;
                
            }
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
            Display();
        }
    }
};

class Savings_account : public Account{
    public:
        void interest(void){
            int Time;
            float rate = 5;
            cout<<"Enter time in year"<<endl;
            cin>>Time;
            Balance =  Balance*pow((1 + rate / 100), Time);
            cout<<"AFTER INTREST"<<endl;
            Display();
        }
};

int main(){
    int x;
    cout<<"Enter Type of account:-"<<endl;
    cout<<"1. Saving Account"<<endl;
    cout<<"2. Current Account"<<endl;
    cin>>x;
    if(x==1){
        Savings_account a;
        a.setData();
        a.Display();
        ///a.AccountType = "SavingsAccount"
        a.interest();
    }
    else if(x==2){
        Current_account a;
        a.setData();
        a.panelty();
        ///a.AccountType = "CurrentAccount"
        a.Withdraw();
        a.panelty();
        a.Deposit();
    }

}
