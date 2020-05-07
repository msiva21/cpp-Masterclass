// Delegating constructors allows these constructors to call on other constructors in the initialization list
// in order to avoid duplicated code, since constructor code looks very similar.

// This method only works in the initialization list, not in the body of the cosntructors.

#include<iostream>
#include<string>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;
public:
    Player(); 
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
    string get_name(void){return name;}
};

Player::Player() : Player{"None", 0, 0}
{
    cout << name << "-player created." << endl;
};

Player::Player(string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Stats for " << name << ": "<< endl;
    cout << "\tHealth: " << health << endl;
    cout << "\tXP: " << xp << endl;
};

Player::Player(string name_val) : Player{name_val, 0, 0}
{
    cout << name << "-player created." << endl;
};
int main(void)
{
    // Pay attention to the output. As it shows how the body of the ONE constructor is always executed since it 
    // is called all the time.
    Player frank;
    Player villain("Villain");
    Player hero("Hero", 1052, 3033);


    
    return 0;
}