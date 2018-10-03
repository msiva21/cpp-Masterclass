#include <iostream>
using namespace std;

int main(){

    // Create a program that takes a number (cents) and returns that amount in US coins

    // Ask user for a number
    int cents {};
    cout << "Enter an amount (cents) that you would like in coins: ";
    cin >> cents;

    // Coins values in cents
    const int dollar {100}; 
    const int quarter {25};
    const int dime {10};


    // Even number of times each coin goes into the number of cents
    int even_dolllars{};
    int even_quarters{};
    int even_dimes{};
    int even_pennies{};


    // Remainder from each coin;
    int balance {};

    // Operations to decide the right amount of coins for each
    even_dolllars = cents / dollar;                      // Number of whole dollars
    balance = cents % dollar;              
    even_quarters = balance / quarter;          // Number of whole quarters
    balance %= quarter;
    even_dimes = balance / dime;               // Number of whole dimes
    balance %= dime;
    even_pennies = balance;                       // Number of whole pennies
 
    // Display the results
    cout << "Dollars: " << even_dolllars << endl;
    cout << "Quarters: " << even_quarters << endl;
    cout << "Dimes: " << even_dimes << endl;
    cout << "Pennies: " << even_pennies << endl;

    



    return 0;
}