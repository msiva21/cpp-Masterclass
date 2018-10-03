#include <iostream>
using namespace std;

int main(){

    int num1 {}, num2 {}, num3 {};
    int total {};
    int amount_of_numbers {3};
    double average {0.0};

    cout << "\nPlease enter 3 numbers separated by a space: ";
    cin >> num1 >> num2 >> num3;
    cout << "The numbers you input were: " << num1 << " " << num2 << " " << num3 << " "<< endl;
    total = num1 + num2 + num3;
    cout << "The sum of these numbers is: " << total << endl;
    average = total / amount_of_numbers;
    cout << "The average of these numbers without using 'static_cast' to change the type of the total is: " << average << endl;
    average = static_cast <double> (total) / amount_of_numbers;
    cout << "The new average (right average for answers with decimals) using 'static_cast' is: " << average << endl;

    return 0;
}