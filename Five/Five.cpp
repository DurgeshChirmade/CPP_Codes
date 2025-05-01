#include<iostream>
using namespace std;

class Complex{
    int real;
    int imagenary;
    static int count;

    public:
    Complex(){
        count++;
        real=0;
        imagenary=0;
    }

    Complex(int real,int imagenary){
        count++;
        this->real=real;
        this->imagenary=imagenary;
    }

    void setReal(int real){
        this->real=real;
    }

    int getReal(){
        return real;
    }

    void setImagenary(int imagenary){
        this->imagenary=imagenary;
    }

    int getImagenary(){
        return imagenary;
    }

    void display(){
       cout<<real<<"+"<<imagenary<<"i"<<endl;
    }

    void showCount(){
        cout<<"Count : "<<count<<endl;
    }
};
int Complex::count=0;
int main(){

    Complex c;

    c.setReal(10);
    c.setImagenary(20);

    c.display();

    c.showCount();

    cout<<c.getReal()<<"+"<<c.getImagenary()<<"i"<<endl;

    Complex c1(30,40);

    c1.display();

    c1.showCount();
}