// Constructor Initialization lists.

/***************************
 So far we have set the value of data members inside the body of the construcot. Actually, this is not initialization
 in fact it is assignment. Because by the time the constructor body is execute, those members have already been
 initialized.
 In order to achieve true, and more efficient, initialization with provide the initialization list immediately
 after the parameters. The order you provide that list doesn't matter, as the members will be initialized in the
 order the class declaration has them.

 You can use "{}" or "()" to place the initialization values inside.
****************************/

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

Player::Player()
{
    name = "None";
    health = 0;
    xp = 0;
}
Player::Player(string name_val):name(name_val), health(0), xp(0)
{
    cout << name << " player created." << endl;
};
Player::Player(string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Stats for " << name << ": "<< endl;
    cout << "\tHealth: " << health << endl;
    cout << "\tXP: " << xp << endl;
};
int main(void)
{
    Player frank;
    Player villain("Villain");
    Player hero("Hero", 1050, 303403);


    
    return 0;
}