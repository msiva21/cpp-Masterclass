#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Example of input validation using booleans
    bool done{false};
    int integer{};
    const int min {1};
    const int max {5};

    while(!done){
        cout << "Enter a number between " << min << " and " << max << ": ";
        cin >> integer;
        if(integer < 1 || integer >5){
            cout << "Out of range, try again!" << endl;
        }
        else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    // More validation
    int validate{};
    const int maximum {100};

    cout << "Enter a number less than " << maximum << ": ";
    cin >> validate;
    while(validate >= maximum){
        cout << "Enter a number less than " << maximum << ": ";
        cin >> validate;
    }
    cout << "Thanks!" << endl;

    // Start a countdown
    int counter {};

    cout << "Enter the countdown number: ";
    cin >> counter;

    while(counter > 0){
        cout << counter << endl;
        counter--;
    }
    cout << "Blastoff!!!" << endl;

    // Count up
    int stopwatch {};
    int uno{1};

    cout << "Enter a number to count up to: ";
    cin >> stopwatch;

    while(stopwatch + 1 > uno){
        cout << uno << endl;
        uno++;
    }
    cout << "Finished!" << endl;


    return 0;
}