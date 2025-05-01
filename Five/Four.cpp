#include<iostream>
#include<cstring>
using namespace std;

class Account{
    static int accno;
    char *name;
    double balance;
    static float int_rate;

    public:
    Account();
    Account(char *name,double balance);
    static void updateIntRate();
    void displayBalance();
    void display(int rate);
};
int Account::accno=100;
float Account::int_rate=10;

Account::Account(){
    accno++;
    name=new char[100];
    strcpy(name,"");
    balance=0.0;
}

Account::Account(char *name,double balance){
    accno++;
    this->name=new char[100];
    strcpy(this->name,name);
    this->balance=balance;
}

void Account::displayBalance(){
    int interest=(balance*int_rate)/100;
    cout<<"Interest : "<<interest<<endl;
}

void Account::display(int rate){
    int_rate=rate;
    int interest=(balance*int_rate)/100;
    cout<<"Interest : "<<interest<<endl;
}

int main(){

    Account a;

    a.displayBalance();

    a.display(11);

    Account a1("AJAY",10000);

    a1.displayBalance();

    a1.display(12);
}