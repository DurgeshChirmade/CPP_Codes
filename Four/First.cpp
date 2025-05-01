#include<iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;

    public:
    Date(){
        day=1;
        month=1;
        year=2014;
    }

    Date(int val){
        day=val;
        month=val;
        year=2024;
    }

    void setDate(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }

    void displayDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main(){

    Date d1;

    d1.displayDate();

    d1.setDate(1,1,2001);

    d1.displayDate();

    Date d2(22);

    d2.displayDate();
}