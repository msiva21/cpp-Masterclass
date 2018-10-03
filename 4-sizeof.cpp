#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;


int main(){
    cout << "Size information for my device." << endl;
    cout << "================================" << endl;
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "signed int: " << sizeof(signed int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;

    // Float values;
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;

    // Minimum values;
    cout << "================================" << endl;
    cout << "Minimum values:" << endl;
    cout << "char: "<< CHAR_MIN << endl;
    cout << "int: "<< INT_MIN << endl;
    cout << "short: "<< SHRT_MIN << endl;
    cout << "long: "<< LONG_MIN << endl;
    cout << "long long: "<< LLONG_MIN << endl;

    // Maximum values;
    cout << "================================" << endl;
    cout << "Maximum values: " << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

    // Values of a variable;
    cout << "================================" << endl;
    cout << "Examples of the size of an int variable 'int age{21}' and a double variable 'double wage{22.24}.'" << endl;
    int age{21};
    cout << "age is " << sizeof(age) << " bytes." << endl;
    cout << "age is " << sizeof age << " bytes." << endl;
    double wage{22.24};
    cout << "wage is " << sizeof(wage) << " bytes." << endl;
    cout << "wage is " << sizeof wage << " bytes." << endl;

    return 0;
}