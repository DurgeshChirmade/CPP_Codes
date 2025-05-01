#include <iostream>
#include <cstring>
using namespace std;

class Player
{
    static int Player_ID;
    int id;
    char player_name[20];
    int runs;
    int wicket_taken;
    int innings_played;

public:
    Player()
    {
        id=++Player_ID;
        strcpy(player_name, "");
        runs = 0;
        wicket_taken = 0;
        innings_played = 0;
    }

    Player(char *name, int runs, int wicket_taken, int innings_played)
    {
        id=++Player_ID;
        strcpy(player_name, name);
        this->runs = runs;
        this->wicket_taken = wicket_taken;
        this->innings_played = innings_played;
    }

    void accept()
    {
        // id=Player_ID++;
        cout << "Enter your player name : ";
        cin >> player_name;
        cout << "Enter player runs : ";
        cin >> runs;
        cout << "Enter player wickets : ";
        cin >> wicket_taken;
        cout << "Enter player innings : ";
        cin >> innings_played;
    }

    void display()
    {
        cout << id << " " << player_name << " " << runs << " " << wicket_taken << " " << innings_played << endl;
    }

    friend int maxRuns(Player plr[], int size);
    friend int maxWickets(Player plr[], int size);
};

int Player::Player_ID = 100;

int maxRuns(Player plr[], int size)
{
    int max = plr[0].runs;
    for (int i = 0; i < size; i++)
    {
        if (plr[i].runs > max)
        {
            max = plr[i].runs;
        }
    }
    return max;
}

int maxWickets(Player plr[], int size)
{
    int max = plr[0].wicket_taken;
    for (int i = 0; i < size; i++)
    {
        if (plr[i].wicket_taken > max)
        {
            max = plr[i].wicket_taken;
        }
    }
    return max;
}

int main()
{

    int size = 2;

    Player p[size];

    for (int i = 0; i < size; i++)
    {
        cout << "\nPlayer " << (i + 1) << ":\n";
        p[i].accept();
    }

    cout << "\nPlayer Details:\n";
    for (int i = 0; i < size; i++)
    {
        p[i].display();
    }

    // Find max runs and max wickets
    cout << "\nMaximum Runs: " << maxRuns(p,size) << endl;
    cout << "Maximum Wickets: " << maxWickets(p,size) << endl;
}