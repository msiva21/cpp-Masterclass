#include <iostream>
using namespace std;

int main(){

    // Boolean variables we will use
    bool equal {false};
    bool not_equal {false};
    bool left_greater {false};
    bool left_less {false};
    bool left_greater_equal {false};
    bool left_less_equal {false};



    // Test equality of 2 integers
    int num1{}, num2 {};
    cout << "\nEnter two numbers separated by a space: ";
    cin >> num1 >> num2;
    equal = (num1 == num2);
    not_equal = (num1 != num2);
    cout << "Using the standard notation without 'boolalpha'." << endl;
    cout << "Are they equal? " << equal << endl;
    cout << "Are they not equal? " << not_equal << endl;
    cout << "Using 'boolalpha'." << endl;
    cout << boolalpha;
    cout << "Are they equal? " << equal << endl;
    cout << "Are they not equal? " << not_equal << endl;

    // Testing equality 2 char types
    cout << "==========================================" << endl;
    char letter1{}, letter2{};
    cout << "Enter two characters separated by a space: ";
    cin >> letter1 >> letter2;
    equal = (letter1 == letter2);
    not_equal = (letter1 != letter2);
    cout << "Are they equal? " << equal << endl;
    cout << "Are they not equal? " << not_equal << endl;

    // Testing equality 2 double types
    cout << "==========================================" << endl;
    // Here a value of 12.0 will be equal to 11.9999999999999999 because the computer saves floating point numbers as approximations, so be careful.
    // If you want more precission then use a different library.
    double decimal1{0.0}, decimal2{0.0};
    cout << "Enter two decimal numbers separated by a space: ";
    cin >> decimal1 >> decimal2;
    equal = (decimal1 == decimal2);
    not_equal = (decimal1 != decimal2);
    cout << "Are they equal? " << equal << endl;
    cout << "Are they not equal? " << not_equal << endl;

    // Testing equality 2 values of different types (one int and one double)
    cout << "==========================================" << endl;
    // Here the compiler will do a type coercion of the int value into a double one. This may result for true values in the comparison.
    int value1 {};
    double value2 {0.0};
    cout << "Enter one integer value and one decimal one separated by a space: ";
    cin >> value1 >> value2;
    equal = (value1 == value2);
    not_equal = (value1 != value2);
    cout << "Are they equal? " << equal << endl;
    cout << "Are they not equal? " << not_equal << endl;

    // Testing less/greater than
    cout << "==========================================" << endl;
    int option1{}, option2{};
    cout << "Enter two integers separated by a space: ";
    cin >> option1 >> option2;
    left_greater = (option1 > option2);
    left_less = (option1 < option2);
    left_greater_equal = (option1 >= option2);
    left_less_equal = (option1 <= option2);
    cout << option1 << " is greater than " << option2 << "?...... " << left_greater << endl;
    cout << option1 << " is less than " << option2 << "?...... " << left_less << endl;
    cout << option1 << " is greater than or equal to " << option2 << "?...... " << left_greater_equal << endl;
    cout << option1 << " is less than or equal to " << option2 << "?...... " << left_less_equal << endl;

    return 0;
}