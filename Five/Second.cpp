#include<iostream>
#include<cstring>
using namespace std;

class Player{
    static int Player_ID;
    char player_name[20];
    int runs;
    int wicket_taken;
    int innings_played;

    public:
    Player(){
        Player_ID++;
        strcpy(player_name,"");
        runs=0;
        wicket_taken=0;
        innings_played=0;
    }

    Player(char *name,int runs,int wicket_taken,int innings_played){
        Player_ID++;
        strcpy(player_name,name);
        this->runs=runs;
        this->wicket_taken=wicket_taken;
        this->innings_played=innings_played;
    }

    void accept(){
        cout<<"Enter your player name : ";
        cin>>player_name;
        cout<<"Enter player runs : ";
        cin>>runs;
        cout<<"Enter player wickets : ";
        cin>>wicket_taken;
        cout<<"Enter player innings : ";
        cin>>innings_played;
    }

    void display(){
        cout<<Player_ID<<" "<<player_name<<" "<<runs<<" "<<wicket_taken<<" "<<innings_played<<endl;
    }

};

int Player::Player_ID=100;

int main(){

    Player p;

    p.accept();

    p.display();

    Player p1("AJAY",264,45,457);
    
    p1.display();
}