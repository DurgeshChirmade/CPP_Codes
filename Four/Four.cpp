#include<iostream>
using namespace std;

class Complex{
    int real;
    int imagenary;

    public:
    Complex(){
        real=0;
        imagenary=0;
    }

    Complex(int real,int imagenary){
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
};

int main(){

    Complex c;

    c.setReal(10);
    c.setImagenary(20);

    c.display();

    cout<<c.getReal()<<"+"<<c.getImagenary()<<"i"<<endl;

    Complex c1(30,40);

    c1.display();
}