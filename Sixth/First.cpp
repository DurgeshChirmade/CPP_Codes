#include<iostream>
#include<cstring>
#include "Date.cpp"
using namespace std;

class Person{
    char name[20];
    Date dateOfBirth;

    public:
    Person():dateOfBirth(){
        strcpy(name,"NA");
    }
    Person(char *name,int dd,int mm,int yy):dateOfBirth(dd,mm,yy){
        strcpy(this->name,name);
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        dateOfBirth.show();
    }
};

int main(){

    Person p;

    p.display();

    Person p1("AJAY",22,8,2000);

    p1.display();
}