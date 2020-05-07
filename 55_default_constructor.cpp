// If you create a constructor that takes arguments, then C++ will no longer create the default constructor
// with no arguments. So you have to explicitly create that constructor too.

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
    void set_name(string player_name)
    {
        name = player_name;
    }
    string get_name(void)
    {
        return name;
    }
    Player(string player_name)
    {
        name = player_name;
    }
};

int main(void)
{
    // The following code will produce an error since we got rid of the default constructor by making our own
    // cosntructor and by not writing the no-args constructor ourselves.
    
    // Player frank;
    // frank.set_name("Frank");

    return 0;
}