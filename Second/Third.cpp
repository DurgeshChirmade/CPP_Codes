#include<iostream>
using namespace std;

void Add(int num1,int num2){
    int ans=num1+num2;
    cout<<"Addition : "<<ans<<endl;
}
void Add(float num1,float num2){
    float ans=num1+num2;
    cout<<"Addition : "<<ans<<endl;
}
int main(){
    Add(10,20);
    Add(30.5f,50.5f);
}
