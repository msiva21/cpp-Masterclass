#include <iostream>
using namespace std;

int main() {
    
    int num {};
    cout << "Enter a whole number: ";
    cin >> num;

    // Using an if statement
    if(num % 2 == 0) {
        cout << num << " is even." << endl;
    }
    else{
        cout << num << " is odd." << endl;
    }

    // Using the conditional operator
    cout << num << " is " << ((num % 2 == 0) ? "even":"odd") << endl;

    int num2{};
    cout << "Enter a second whole number: ";
    cin >> num2;

    if(num != num2){
        cout << "Larger number is: " << ((num > num2) ? num:num2) << endl;
        cout << "Smaller number is: " << ((num < num2) ? num:num2) << endl;

    }
    else{
        cout << "Both numbers are the same." << endl;
    }

    return 0;
}