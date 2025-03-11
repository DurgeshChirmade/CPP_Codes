#include<iostream>
using namespace std;

int getLength(char str[]){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

const char* reverseString(char str[]){
    int len=getLength(str);

    for(int i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    return str;
}

int countChar(char str[]){
    int len=getLength(str);
    int cnt=0;
    for(int i=0;i<len;i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            cnt++;
        }
    }
    return cnt;
}

int countDigit(char str[]){
    int len=getLength(str);
    int cnt=0;
    for(int i=0;i<len;i++){
        if(str[i]>='0' && str[i]<='9'){
            cnt++;
        }
    }
    return cnt;
}

bool isPalindrome(char str[]){
    int len=getLength(str);

    for(int i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            return false;
        }
    }
    return true;
}
int checkVowels(char str[]){
    int len=getLength(str);
    int cnt=0;

    for(int i=0;i<len;i++){
        if((str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U') ){
            cnt++;
        }
    }
    return cnt;
}

int main(){

    char str[30];

    cout<<"Enter your string : ";
    cin>>str;
    
    cout<<"Length of string : "<<getLength(str);
    cout<<endl<<"Reverse String : "<<reverseString(str);
    cout<<endl<<"Count of Character : "<<countChar(str);
    cout<<endl<<"Count of Digits : "<<countDigit(str);

    if(isPalindrome(str)){
        cout<<endl<<str<<" is palindrome.";
    }
    else{
        cout<<endl<<str<<" is not a palindrome.";
    }

    cout<<endl<<"Count of Vowels : "<<checkVowels(str);
}