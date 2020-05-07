// Copy constructor

/***********************************
 If you don't provide your own way of copying objects by value, then the compiler provides its own way.
 It will copy each data member.

 Becareful with pointer data members, as the copy will copy the pointer and NOT what it is pointing to.
*/

/***************
 * BEST PRACTICES
 * 
 * Provide a copy cosntructor when your class has raw pointer members.
 * Provide the copy constructor with a CONST REFERENCE parameter.
 * Use STL classes if possible.
 * Avoid using raw pointer data members if possible.
*/
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
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    string get_name(void){return name;};
    int get_health(void){return health;};
    int get_xp(void){return xp;};

    // Copy constructor
    Player(const Player &source);

    // Destructor
    ~Player(){ cout << "Destructor called for: " << name << endl;}

};

Player::Player(string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three-args constructor used for: " << name << endl;
}

Player::Player(const Player &source) : Player(source.name, source.health, source.xp) // Can use "{}" instead of "()"
                                                                                     // for the initializer list 
                                                                                     // object.
{
    cout << "Copy constructor - made copy of " + source.name << endl;
}

// The copy constructor we created will be called because this function uses pass-by-value which means it 
// creates a copy of the parameter.
void display_player(Player p)
{
    cout << "Name:   " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP:     " << p.get_xp() << endl;
    cout << "Location of this object: " << &p << endl;
}
int main(void)
{
    cout << endl;
    Player empty;
    display_player(empty); // Look at the output, it calls the copy constructor.

    Player frank("Frank");
    cout << "Location of Frank: " << &frank << endl;
    display_player(frank);

    Player hero("Hero", 140);
    Player villain{"Villain", 10000, 100};
    return 0;
}