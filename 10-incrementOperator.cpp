#include <iostream>
using namespace std;

int main(){
    
    // Using the pre-increment method
    cout << "\nHere we use the pre-increment method:" << endl;
    int result {0};
    int counter {10};
    cout << "The result variable is equal to: " << result << endl;
    cout << "The counter variable is equal to: " << counter << endl;
    cout << "We create the expression 'result = ++counter;'." << endl;
    result = ++counter;
    cout << "The value of result is now: " << result << endl;
    cout << "The value of counter is now: " << counter << endl;
    cout << "In this example, counter is increased by one before we use it as the value to be assigned to result." << endl;

    // Using the post-increment method
    cout << "===========================================" << endl;
    cout << "Here we use the post-increment method:" << endl;
    result = 0;
    counter = 10;
    cout << "The result variable is equal to: " << result << endl;
    cout << "The counter variable is equal to: " << counter << endl;
    cout << "We create the expression 'result = counter++;'." << endl;
    result = counter++;
    cout << "The value of result is now: " << result << endl;
    cout << "The value of counter is now: " << counter << endl;
    cout << "In this example, counter is increased by one after we use it in the assignment expression. During the assignment operation, counter is still 10." << endl;

    return 0;
}