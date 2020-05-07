#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int num{100};
    int &ref{num}; // "ref" becomes an alias to "num" variable.

    cout << num << endl; // 100
    cout << ref << endl; // 100

    // Changing num can change ref, and vice versa
    cout << "+++++++++++++++++++++++++" << endl;
    ref = 300;
    cout << num << endl; // 300
    cout << ref << endl; // 300
    cout << "==================" << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};

    for (auto elem : stooges)
    {
        elem = "Funny"; // "elem" is a COPY of each element in the vector.
    }
    for (auto elem : stooges)
    {
        cout << elem << " "; // Prints out the original because the "elem" variable is just a copy of the original.
    }
    cout << endl;
    cout << "==================" << endl;
    
    // We use a reference to mean that the varaible "elem" is not a copy but an actual reference of the vector.
    for (auto &elem : stooges)
    {
        elem = "Funny"; // The vector has changed now.
    }
    for (auto const &elem : stooges) // We use & because we don't want to make a copy of the original vector, thus
                                     // saving memory. We then add "const" so that we don't change the elements 
                                     // unintentionally. Inside this loop body, we would get an error if we try to
                                     // assign new values to the vector.
    {
        cout << elem << " "; // Prints out the original because the elem variable is just a copy of the original
    }
    cout << endl;
    cout << "==================" << endl;

    int number{10};
    cout << &number << endl;

    int *num_ptr{nullptr};
    num_ptr = &number;
    cout << num_ptr << endl;

    
}