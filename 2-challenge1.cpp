// Write a program that asks the user of a number between 1 - 100;
// and then display the number back;

#include <iostream>
using namespace std;

int main(){

    int favorite_number;

    cout << "Enter your favorite number between 1-100: " << endl;
    cin >> favorite_number;
    cout << "Amazing!! That's my favorite number too!" << endl;
    cout << "No really!!, " << favorite_number << " is my favorite number!" << endl;

    return 0;
}