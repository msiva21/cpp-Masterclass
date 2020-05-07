/*********************************
 CONSTRUCTORS
 - Special member method.
 - Are invoked during object creation.
 - Useful for initialization.
 - Have the same name as the class.
 - No return type specified.
 - Can be overloaded.
**********************************/

/*********************************
 DESTRUCTORS
 - Special member method.
 - Have same name as the class but with a tilde (~) before it .
 - Invoked automatically when the object is destroyed.
 - No return type and no parameters.
 - No overloading.
 - Useful to release memory and other resources.
 - Will be called when the object goes out of scope, meaning the scope where the object was created is no longer
   the code that is currently executing. 
 - Whatever code is provided inside the Destructor will be executed before the object is destroyed.
**********************************/

// If you provide no CONSTRUCTOR or no DESTRUCTOR, c++ will provide a default cosntructor and destructor 
// that are both EMPTY. Object creation and destruction follow the LIFO (Last In First Out) method.
#include<iostream>
#include<string>
#include<vector>

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

  // Overloaded constructors
  Player()
  {
    cout << "No args constructor called." << endl;
  } 

  Player(string player_name)
  {
    cout << "String arg constructor called." << endl;
  }

  Player(string player_name, int health, int xp)
  {
    name = player_name;
    cout << "Three args constructor called." << endl;
  }

  ~Player()
  {
    cout << "Destructor called for: " << name << endl;
  }
};

int main(void)
{
    {
      Player slayer;
      slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero;
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
    }

    Player *enemy = new Player();
    enemy->set_name("Enemey");

    Player *level_boss = new Player("Level Boss", 1000, 300);

    delete enemy;
    delete level_boss;

    return 0;
}