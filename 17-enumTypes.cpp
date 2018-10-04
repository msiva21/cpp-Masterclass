#include <iostream>
using namespace std;

int main() {

    enum Direction {
        left, right, up, down
    };

    Direction heading {left};
    switch(heading) {
        case left: cout << "Going left." << endl;
        break;
        case right: cout << "Going right." << endl;
        break;
        default: cout << "Ok." << endl; // We use this so that the compiler will not show warnings of unused enum values.
        break;
    }
    return 0;
}