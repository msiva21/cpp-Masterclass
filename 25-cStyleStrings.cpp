#include <iostream>
#include <cstring> // For c-style strings
#include <cctype>  // For character-based functions
using namespace std;

int main()
{

    char str[80];
    cout << str << endl; // This prints out garbage
    strcpy(str, "Hello ");
    strcat(str, "there");
    cout << strlen(str) << endl;
    cout << strcmp(str, "A") << endl; // If you get back a 0, then both strings  are the same.

    // char first_name[20] {};
    // char last_name[20] {};
    char full_name[50]{};
    char temp[50]{};

    // cout << "Enter your first name: ";
    // cin >> first_name;
    // cout << "-----------------" << endl;

    // cout << "Enter your last name: ";
    // cin >> last_name;
    // cout << "-----------------" << endl;

    // cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters." << endl;
    // cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters." << endl;

    // strcpy(full_name, first_name); // Copy first_name to full_name
    // strcat(full_name, " "); // Concatanate full_name and a space
    // strcat(full_name, last_name); // Concatanate last_name to full name
    // cout << "Your full name is " << full_name << endl;

    cout << "Enter your full name (You may use spaces, but press Enter only ONCE): ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;
    for(int le: full_name){
        cout << le << endl;
    }

    cout << "--------------------" << endl;
    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
    {
        cout << full_name << " and " << temp << " are the same." << endl;
    }
    else
    {
        cout << full_name << " and " << temp << " are differerent." << endl;
    }
    for (size_t i{0}; i < strlen(full_name); i++)
    {
        if (isalpha(full_name[i]))
        {
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name is " << full_name << endl;

    // Check again if the characters are the same, this time the comparison returns a number other than zero.
    if (strcmp(temp, full_name) == 0)
    {
        cout << full_name << " and " << temp << " are the same." << endl;
    }
    else
    {
        cout << full_name << " and " << temp << " are differerent." << endl;
    }
    cout << "-------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name << " is " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << " is " << strcmp(full_name, temp) << endl;


    return 0;
}