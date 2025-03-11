#include<iostream>
using namespace std;

/*How to give command line argument --> ./a.exe Trupti --> Welcome Trupti */
int main(int argc, char const *argv[])
{
    cout<<"Welcome "<<argv[1]<<endl;
    return 0;
}
