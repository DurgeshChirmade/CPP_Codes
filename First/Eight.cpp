#include<iostream>
using namespace std;

void calculate(int a,int b,int &add,int &prod){
    add=a+b;
    prod=a*b;
}

int main(){

    int a=10,b=20,add=0,prod=1;

    calculate(a,b,add,prod);

    cout<<endl<<add;
    cout<<endl<<prod;
}