#include<iostream>
using namespace std;

class Date{
    int day;
    int month;
    int year;

    public:
    Date(){
        day=0;
        month=0;
        year=0;
    }

    void setDay(int day){
        this->day=day;
    }

    int getDay(){
        return this->day;
    }

    void setMonth(int month){
        this->month=month;
    }

    int getMonth(){
        return this->month;
    }

    void setYear(int year){
        this->year=year;
    }

    int getYear(){
        return this->year;
    }

    void setDate(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }

    void showDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main(){

    Date d1;

    d1.setDay(22);
    d1.setMonth(8);
    d1.setYear(2000);

    cout<<d1.getDay()<<"/"<<d1.getMonth()<<"/"<<d1.getYear()<<endl;

    d1.setDate(1,1,2001);

    d1.showDate();
}