#include <iostream>
#include <string>
using namespace std;

int main() {

    // string str1 {"Frank"};
    // for (int letter : str1){
    //     cout << letter << endl; // No "null" character displayed because c++ strings don't have them. 
    // }

    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1, 0, 3};
    string s7(10, 'X'); //Use parentheses not curly

    cout << s0 << endl; // Displays no garbage because c++ strings are objects
    cout << s0.length() << endl; // Empty

    // Display initialization values
    cout << "s0 is initialized to " << s0 << endl;
    cout << "s1 is initialized to " << s1 << endl;
    cout << "s2 is initialized to " << s2 << endl;
    cout << "s3 is initialized to " << s3 << endl;
    cout << "s4 is initialized to " << s4 << endl;
    cout << "s5 is initialized to " << s5 << endl;
    cout << "s6 is initialized to " << s6 << endl;
    cout << "s7 is initialized to " << s7 << endl;

    // Comparisons
    cout << "\n---------Comparisons---------" << endl;
    cout << boolalpha; // This will display True or False instead of 1 and 0
    cout << s1 << " == " << s5 << ":" << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ":" << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ":" << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ":" << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ":" << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ":" << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ":" << (s1 == "Apple") << endl;

    // Assignments
    cout << "\n---------Assignments---------" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;
    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;
    s3[0] = 'C';
    cout << "s3[0] is now: " << s3[0] << endl;
    cout << "s3 is now: " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3.at(0) is now: " << s3.at(0) << endl;
    cout << "s3 is now: " << s3 << endl;

    // Concatenation
    cout << "\n---------Concatenation---------" << endl;
    s3 = s5 + " and " + s2 + " juice."; // This is ok because you are adding a string object to string literal.
    // s3 = "apple" + "and" + s2 + " juice."; //This doesnt work because you have string literals (c-style strings) with a plus operator in between
    cout << "s3 is now: " << s3 << endl;

    // Looping
    cout << "\n---------Looping---------" << endl;
    s1 = "Apple";
    cout << "s1 is now: " << s1 << endl;
    cout << "Using for loops and 'size_t' for the data type of the iterator" << endl;
    for(size_t i{0}; i < s1.length(); i++){
        cout << s1.at(i) << endl;
    }
    cout << "Using ranged based loops and 'size_t' for the data type of the iterator" << endl;
    for(size_t el: s1){
        cout << el << endl;
    }
    cout << "Using ranged based loops and 'auto' for the data type of the iterator" << endl;
    for(auto el: s1){
        cout << el << endl;
    }

    // Substring
    cout << "\n---------Substring---------" << endl;
    s1 = "This is a test.";
    cout << "s1 is now:      " << s1 << endl;
    cout << "s1.substr(0, 4) is " << s1.substr(0,4) << endl;
    cout << "s1.substr(5, 2) is " << s1.substr(5,2) << endl;
    cout << "s1.substr(10, 4) is " << s1.substr(10,4) << endl;

    // Erase
    cout << "\n---------Erase---------" << endl;
    s1 = "This is a test.";
    cout << "s1 is now:     " << s1 << endl;
    cout << "s1.erase(0, 5) is:   " << s1.erase(0,5) << endl;
    cout << "s1 is now:     " << s1 << endl;
    cout << "s1.erase() is:   " << s1.erase() << endl;
    cout << "s1 is now:     " << s1 << endl;

    // Find
    cout << "\n---------find---------" << endl;
    s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the word/letter to find: ";
    cin >> word;

    size_t position {s1.find(word)};
    if(position != string::npos) // If Word IS found!
        cout << "Found '" << word << "' at position:  " << position << endl;
    else
        cout << "Sorry, '" << word << "' not found." << endl;
    cout << "The whole sentence was:   " << s1 << endl;

    // Getline
    cout << "\n---------getline---------" << endl;
    string full_name {};
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Your full name is " << full_name << endl;

    string no_fives{};
    cout << "Enter a text, but I will only display it until you type a 5: ";
    getline(cin,no_fives, '5');
    cout << "You entered:    '" << no_fives << "'    before you typed a 5." << endl;
  












    return 0;

}