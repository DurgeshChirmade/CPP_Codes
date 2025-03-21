#include <iostream>
using namespace std;

class Calculator
{
    int no1;
    int no2;

public:
    Calculator()
    {
        no1 = 0;
        no2 = 0;
    }

    void Accept_values()
    {
        cout << "Enter your first number : ";
        cin >> no1;

        cout << "Enter your second number : ";
        cin >> no2;
    }

    void Display_values()
    {
        cout << "No.1 : " << no1 << " No.2 : " << no2 << endl;
    }

    int Addition()
    {
        return no1 + no2;
    }

    int Subtraction()
    {
        if (no1 > no2)
        {
            return no1 - no2;
        }
        else
        {
            return no2 - no1;
        }
    }

    int Multiplication()
    {
        return no1 * no2;
    }

    int Division()
    {
        if (no2 > 0)
        {
            return no1 / no2;
        }
        else
        {
            cout << "no2 should be greater than 0." << endl;
        }
        return no1/no2;
    }
};

int main()
{

    Calculator c;

    c.Accept_values();

    c.Display_values();

    cout << "Addition : " << c.Addition() << endl;
    cout << "Subtraction : " << c.Subtraction() << endl;
    cout << "Multiplication : " << c.Multiplication() << endl;
    cout << "Division : " << c.Division() << endl;
}