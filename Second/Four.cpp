#include<iostream>
using namespace std;

//Function to accept array elements
void acceptArray(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<"Enter Data : ";
        cin>>arr[i];
    }
}

//Function to display array elements
void displayArray(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

//Function to find max & min value
void findMaxMin(int *arr,int size,int &max,int &min){
    max=arr[0];
    min=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
}

//Function to search for an element in the array
bool searchElement(int *arr,int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

void countEvenOdd(int *arr,int size,int &oddc,int &evenc){
    oddc=0;
    evenc=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evenc++;
        }
        if(arr[i]%2==1){
            oddc++;
        }
    }
}

int main(){
    int size;

    //Accept array size
    cout<<"Enter array size : ";
    cin>>size;

    //Dynamic size allocate array
    int *arr=new int[size];

    //Accept Element array
    acceptArray(arr,size);

    //Display array elements
    displayArray(arr,size);

    //Find max & min
    int max,min;
    findMaxMin(arr,size,max,min);
    cout<<"Max : "<<max<<" Min: "<<min<<endl;

    //Search Element
    int oddc,evenc;
    countEvenOdd(arr,size,oddc,evenc);
    cout<<"Even Number Count : "<<evenc<<endl;
    cout<<"Odd Number Count : "<<oddc<<endl;

    delete []arr;
}