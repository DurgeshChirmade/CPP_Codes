#include<iostream>
using namespace std;

struct Student{
    private:
    int rno;
    char name[20];
    int total;

    public:
    void accept(){
        cout<<"Enter roll number : ";
        cin>>rno;
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter total marks : ";
        cin>>total;
    }
    void display(){
        cout<<rno<<" "<<name<<" "<<total<<endl;
    }
    int getRno(){
        return rno;
    }
    const char *getName(){
        return name;
    }
    int getTotal(){
        return total;
    }
};

int main(){
    struct Student s1[5];

    for(int i=0;i<3;i++){
        s1[i].accept();
    }

    for(int i=0;i<3;i++){
        s1[i].display();
    }

    int max=s1[0].getTotal();
    int maxi=0;

    for(int i=0;i<3;i++){
        if(s1[i].getTotal()>max){
            max=s1[i].getTotal();
            maxi=i;
        }
    }

    cout<<"Student Details : "<<endl;
    cout<<s1[maxi].getRno()<<" "<<s1[maxi].getName()<<" "<<s1[maxi].getTotal()<<endl;
}