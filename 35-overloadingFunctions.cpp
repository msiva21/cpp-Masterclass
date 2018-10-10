#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Prototypes
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

// Definitions
void print(double num)
{
    cout << "Printing double " << num << endl;
}
void print(string s)
{
    cout << "Printing string " << s << endl;
}
void print(string s, string t)
{
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}
void print(int num)
{
    cout << "Printing int " << num << endl;
}

void print(vector<string> s)
{
    cout << "Printing vector of strings:   ";
    for (auto elem : s)
    {
        cout << elem << " ";
    }
    cout << endl;
}
int main()
{
    print(100); // Printing int
    print('A'); // Printing int, because a character is always promoted to int and when passed as int, it returns its ASCII code

    print(123.5);  // Print double
    print(123.3F); // Print double, this is a double until you add the "F", then it becomes a float. Floats is promoted to double

    print("C-Style strings"); // Promoted to C++ string

    string s{"C++ string"};
    print(s);

    print("C-Style strings, s"); // First argument promoted to c++ string

    vector<string> stooges{"Larry", "Moe", "Curly"};
    print(stooges);

    cout << endl;

    return 0;
}