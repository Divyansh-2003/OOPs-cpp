#include<iostream>
using namespace std;
#include<string.h>
class BankAccount{
    char name[100];
    int AccountNumber;
    char AccountType[100];
    float Balance;
    
    public:
    BankAccount();
    BankAccount(char *name_1, int AccountNumber,char *AccountType_1,float Balance ){
        strcpy(name, name_1);
        this->AccountNumber = AccountNumber;
        strcpy(AccountType, AccountType_1);
        this->Balance = Balance;
    }
    /*void setData(void){
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter account number"<<endl;
        cin>>AccountNumber;
        cout<<"Enter Type of account"<<endl;
        cin>>AccountType;
        cout<<"Enter Balance"<<endl;
        cin>>Balance;
    }*/
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
    char name[100];
    int AccountNumber;
    char AccountType[100];
    float Balance;
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter account number"<<endl;
    cin>>AccountNumber;
    cout<<"Enter Type of account"<<endl;
    cin>>AccountType;
    cout<<"Enter Balance"<<endl;
    cin>>Balance;
    BankAccount a(name,AccountNumber,AccountType,Balance);
    //a.setData();
    a.Display();
    a.Deposit();
    a.Withdraw();   
}
