#include<iostream>
using namespace std;

class Box{
    int height;
    int width;
    int depth;

    public:
    Box(){
        this->height=0;
        this->width=0;
        this->depth=0;
    }

    Box(int height,int width,int depth){
        this->height=height;
        this->width=width;
        this->depth=depth;
    }

    void SetHeight(int heigth){
        this->height=heigth;
    }
    void SetWidth(int width){
        this->width=width;
    }
    void SetDepth(int depth){
        this->depth=depth;
    }

    void displayDetails(){
        cout<<this->height<<" "<<this->width<<" "<<this->depth<<endl;
    }
};

int main(){

    Box b;

    b.SetHeight(30);
    b.SetWidth(40);
    b.SetDepth(50);

    b.displayDetails();

    Box b1(10,20,30);
    b1.displayDetails();
}