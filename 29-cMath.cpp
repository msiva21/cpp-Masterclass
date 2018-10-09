#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double num {};
    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The square root of " << num << " is " << sqrt(num) << endl;
    cout << "The cube root of " << num << " is " << cbrt(num) << endl;

    cout << "The sine of " << num << " is " << sin(num) << " in radians." << endl;
    cout << "The cosine of " << num << " is " << cos(num) << " in radians." << endl;
    cout << "The tangent of " << num << " is " << tan(num) << " in radians." << endl;

    cout << "The ceiling of " << num << " is " << ceil(num) << endl;
    cout << "The floor of " << num << " is " << floor(num) << endl;
    cout << "The round of " << num << " is " << round(num) << endl;

    double power {};
    cout << "Enter a power (double) to raise " << num << " to: ";
    cin >> power;
    cout << fixed << setprecision(2);
    cout << num << " raise to the " << power << " power is " << pow(num, power) << endl;


    return 0;
}