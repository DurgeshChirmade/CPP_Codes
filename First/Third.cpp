#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int add = num1 + num2;
    cout << "Addition : " << add << endl;

    int sub;
    if (num1 > num2)
    {
        sub = num1 - num2;
    }
    else
    {
        sub = num2 - num1;
    }
    cout << "Subtraction : " << sub << endl;

    int mult = num1 * num2;
    cout << "Multiplication : " << mult << endl;

    int div;
    if (num2 == 0)
    {
        cout << "Denominator should be greater than zero.";
        exit(0);
    }
    div = num1 / num2;
    cout << "Division : " << div << endl;

    return 0;
}
