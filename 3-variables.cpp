#include <iostream>
using namespace std;

int main(){

    // It is best practice to put the variables close to where they will be used as well as to initialize them.

    cout << "Enter the room's width: ";
    int room_width {0};
    cin >> room_width;
    cout << "Enter the room's length: ";
    int room_length {0};
    cin >> room_length;
    cout << "The are of the room is: " << room_width * room_length << " square feet." << endl; 
    return 0;
}