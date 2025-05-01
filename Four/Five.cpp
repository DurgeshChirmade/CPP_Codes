#include<iostream>
#include<cstring>
using namespace std;

class Product{
    char *product_name;
    int product_code;
    float unit_price;

    public:
    Product(){
        product_name=new char[100];
        strcpy(product_name,"NA");
        product_code=0;
        unit_price=0.0f;
    }

    Product(char *name,int code,float price){
        product_name=new char[strlen(name)+1];
        strcpy(product_name,name);
        product_code=code;
        unit_price=price;
    }

    Product(Product &p){
        this->product_name=new char[100];
        strcpy(this->product_name,p.product_name);
        this->product_code=p.product_code;
        this->unit_price=p.unit_price;
    }

    void display(){
        cout<<product_name<<" "<<product_code<<" "<<unit_price<<endl;
    }

    ~Product(){
        delete product_name;
    }
};

int main(){

    Product p;
    p.display();

    Product p1("AJAY",101,789.98);
    p1.display();

    Product p2(p1);
    p2.display();
}