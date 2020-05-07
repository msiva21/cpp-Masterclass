// Introduction to classes and objects.

// Classes are blueprints for objects.
#include<iostream>
#include<vector>
using namespace std;

// Remember to add ";" at the end of class declarations.
class Player
{
    // Attributes
    std::string name {"Player"}; // In c++11, initialization was added to attributes.
    int health;
    int xp;

    // Methods
    void talk(std::string text_to_say);
    bool is_dead();
};

int main(void)
{
    cout << endl;
    cout << "Program started." << endl;
    Player frank;
    Player hero;

    Player players [] {frank, hero};
    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    // You can also create Player objects on the heap by using pointers. Remember to deallocate the storage.
    Player *enemy = new Player();
    delete enemy;

    cout << endl;
    cout << "Program Finished" << endl;
    return 0;
}