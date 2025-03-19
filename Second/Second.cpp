#include<iostream>
using namespace std;

int multiply(int num1,int num2=1,int num3=1){
    return num1*num2*num3;
}
int main(){
    cout<<"Multiplication : "<<multiply(11,22,33)<<endl;
    cout<<"Multiplication : "<<multiply(11,22)<<endl;
    cout<<"Multiplication : "<<multiply(11)<<endl;
}