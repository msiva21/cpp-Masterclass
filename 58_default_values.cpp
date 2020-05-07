// Constructor parameters and default values

// Deafult values can get rid of many constructors since we don't need to create one for each constructor
// with a different number of parameters.

// However, you must be careful about creating other constructors because it creates ambiguioty and the compiler
// doesn't know which constructor to call.

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
    Player(string name_val = "None", int health_val=0, int xp_val=0);
    // Player(); // This constructor creates ambiguity since there are constructors with default values.
};

Player::Player(string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three args constructort used." << endl;
}

int main(void)
{
    // All objects with 0-3 parameters will be created with a single constructor with default values.
    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero", 50};
    Player mike{"Mike", 333, 34};

    return 0;
}