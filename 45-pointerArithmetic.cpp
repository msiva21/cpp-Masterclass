#include <iostream>
#include <string>
using namespace std;

int main()
{
    int scores[]{100, 95, 89, 68, -1};
    int *scores_ptr{scores};

    while (*scores_ptr != -1)
    {
        cout << *scores_ptr << endl;
        scores_ptr++;
    }

    // Another more common way
    cout << "\n-----------------------------" << endl;
    scores_ptr = scores; // Reset the value of the pointer to scores so it can loop again
    while (*scores_ptr != -1)
    {
        cout << *scores_ptr++ << endl;
    }
    
    cout << "\n-----------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha; // Prints true/false
    // Evaluate the address of both pointers
    cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl;
    cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl;

    // Evaluate the value that the pointers are pointing to.
    cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;

    p3 = &s3;

    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;

    cout << "\n-----------------------------" << endl;
    char name []{"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0];  // F
    char_ptr2 = &name[3];  // n

    cout << "In the string '" << name << "', " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

    cout << "\n-----------------------------" << endl;
    // Pointers to constants
    // The data pointed to by the pointer CANNOT be changed
    // Pointer can change and point somewhere else.
    int high_score {100};
    int low_score {50};
    const int *test_ptr{&high_score};

    cout << test_ptr << endl;
    cout << *test_ptr << endl;

    test_ptr = &low_score;     // This is allowed.
    // *test_ptr = 45;         // This is NOT allowed.
    cout << &low_score <<endl;
    cout << test_ptr << endl;
    cout << *test_ptr << endl;

    // Constant pointers
    // The data pointed by the pointer can be changed.
    // Pointer CANNOT change and point somewhere else
    cout << "-------------------------" << endl;
    int high_num{5000};
    int *const my_num{&high_num};

    cout << my_num << endl;
    cout << *my_num << endl;

    *my_num = 66;
    // my_num = &low_num;       // This is not allowed
    cout << my_num << endl;
    cout << *my_num << endl;

    // Constant pointers to constants
    // You cannot change the pointer or the data that it's pointing to.
    cout << "-------------------------" << endl;
    int high_int{500};
    const int *const my_int{&high_int};

    cout << my_int << endl;
    cout << *my_int << endl;

    // *my_int = 66;            // This is not allowed
    // my_int = &low_int;       // This is not allowed

    return 0;
}