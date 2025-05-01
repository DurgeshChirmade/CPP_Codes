#include<iostream>
using namespace std;

class Date{
    int dd;
    int mm;
    int yy;

    public:
    Date();
    Date(int dd,int mm,int yy);
    void show();
};
Date::Date(){
    dd=1;
    mm=1;
    yy=2000;
}
Date::Date(int dd,int mm,int yy){
    this->dd=dd;
    this->mm=mm;
    this->yy=yy;
}
void Date::show(){
    cout<<"Date : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}