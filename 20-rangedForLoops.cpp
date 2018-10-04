#include <iostream>
#include <vector>
#include <iomanip> // input output manipulator
using namespace std;

int main() {

    // A modern way of using for loops

    // Vector loop
    vector <double> temps {88.9, 87.8, 90.1, 88.7};
    double avg_temp {};
    double total {};

    for(auto temp: temps){
        total += temp;
    }
    if(temps.size() != 0){
        avg_temp = total / temps.size();
    }
    cout << fixed << setprecision(1);
    cout << "Average Temperature is " << avg_temp << endl;

    // Initializing the list in the for loop
    for(auto element: {1, 23, 4, 21, 32}){
        cout << element << endl;
    }
    cout << "=======================" << endl;

    // Looping through a string
    for(auto i:"Hello World!"){
        cout << i << endl;
    }

    return 0;
}