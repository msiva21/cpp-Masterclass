#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int num{100};
    int &ref{num}; // Alias to the number

    cout << num << endl;
    cout << ref << endl;

    // Changing num can change ref, and vice versa
    cout << "+++++++++++++++++++++++++" << endl;
    ref = 300;
    cout << num << endl;
    cout << ref << endl;
    cout << "==================" << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};

    for (auto elem : stooges)
    {
        elem = "Funny";
    }
    for (auto elem : stooges)
    {
        cout << elem << " "; // Prints out the original because the elem variable is just a copy of the original
    }
    cout << endl;
    cout << "==================" << endl;
    
    // We use a reference
    for (auto &elem : stooges)
    {
        elem = "Funny";
    }
    for (auto const &elem : stooges) // We use & because maybe the original vector is too expensive(uses too much memory), so it is better to use the original and not make a copy but also make sure we don't change any value by using const.
    {
        cout << elem << " "; // Prints out the original because the elem variable is just a copy of the original
    }
    cout << endl;

    int number{10};
    cout << &number << endl;

    int *num_ptr{nullptr};
    num_ptr = &number;
    cout << num_ptr << endl;

    
}