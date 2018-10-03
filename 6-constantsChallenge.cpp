#include <iostream>
using namespace std;

// Ask the user to input the amount of rooms they want to get cleaned accoding to the size of such room;

int main() {
    cout << "\nWelcome to Mike's Carpet Cleaning Service." << endl;
    cout << endl;
    cout << "We have different prices according to the size of your room. We got large and small size." << endl;
    
    int large_room_quantity{0};
    cout << "How many large rooms would you like cleaned: ";
    cin >> large_room_quantity;
    int small_room_quantity;
    cout << "How many small size rooms would you like cleaned?: ";
    cin >> small_room_quantity;
    
    cout << "Estimate for cleaning service." << endl;
    cout << "===================================================" << endl;
    cout << "Number of large rooms: " << large_room_quantity << endl;
    cout << "Number of small rooms: " << small_room_quantity << endl;

    const double large_room_price{35.00};
    cout << "Price per large room: $" << large_room_price << endl;
    const double small_room_price{25.00};
    cout << "Price per small room: $" << small_room_price << endl;

    double large_room_cost = large_room_price * large_room_quantity;
    double small_room_cost = small_room_price * small_room_quantity;
    double cost = large_room_cost + small_room_cost;
    cout << "Cost: $" << cost << endl;
    const double tax{.06};
    double tax_cost = cost * tax;
    cout << "Tax: $" << tax_cost << endl;
    cout << "===================================================" << endl;

    double total = cost + tax_cost;
    cout << "Total estimate: $" << total << endl;
    const int promotion_length{30};
    cout << "This estimate is valid for " << promotion_length << " days." << endl;

    return 0;
}