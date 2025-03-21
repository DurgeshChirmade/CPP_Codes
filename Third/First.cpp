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

    d1.setDate(1,1,2001);

    d1.showDate();
}