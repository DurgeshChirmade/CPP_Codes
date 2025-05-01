#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }

    Point(int x,int y){
        this->x=x;
        this->y=y;
    }

    void SetPoint(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void displayPoint()
    {
        cout << "[" << x << "," << y << "]" << endl;
    }
};

int main(){

    Point p;

    p.SetPoint(10,20);

    p.displayPoint();

    Point p1(40,50);

    p1.displayPoint();
}