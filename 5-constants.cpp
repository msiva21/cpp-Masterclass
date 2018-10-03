#include <iostream>
using namespace std;

// Cleaning service example;

int main(){
    cout << "Hello, Welcome to Frank's Carpet Cleaning Service" <<endl;
    cout << endl;
    cout << "How many rooms would you like cleaned?: " << endl;
    int number_of_rooms{0};
    cin >> number_of_rooms;

    cout << "Estimate for cleaning service:" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    const double price_per_room{30.0};
    cout << "Price per room: $" << price_per_room << endl;
    double cost = price_per_room * number_of_rooms;
    cout << "Cost: $" << cost << endl;
    const double tax{.06};
    double tax_total = cost * tax;
    cout << "Tax: $" << tax_total << endl;
    cout << "===============================" << endl;
    double total = cost + tax_total;
    cout << "Total estimate: $" << total << endl;
    const int promotion_lenght{30};
    cout << "This estimate is valid for " << promotion_lenght << " days." << endl;

    return 0;
}