#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5];

    for(int i=0;i<argc;i++){
        arr[i]=atoi(argv[i+1]);
    }

    int sum=0,avg=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    avg=sum/5;

    cout<<endl<<"Sum : "<<sum<<endl;
    cout<<"Avg : "<<avg<<endl;

    return 0;
}
