#include <iostream>
using namespace std;

int main() {

    int num{};
    cout << "Enter a number: ";
    cin >> num;

    // Check location of number according to range(10, 100)
    const int min{10};
    const int max{100};

    if(num >= min) {
        cout << "=================================== 1 ===================================" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        int diff {num - min};
        cout << "The difference between " << num << " and " << min << " is " << diff <<endl;
    };
    if(num <= max) {
        cout << "=================================== 2 ===================================" << endl;
        cout << num << " is less than or equal to " << max << endl;
        int diff {max - num};
        cout << "The difference between " << max << " and " << num << " is " << diff <<endl;
    };
    if(num >= min && num <= max) {
        cout << "=================================== 3 ===================================" << endl;
        cout << num << " is in the interval " << min << " and " << max << endl;
        int diff {num - min};
        cout << "The difference between " << num << " and " << min << " is " << diff <<endl;
    };
    if(num == min || num == max) {
        cout << "=================================== 4 ===================================" << endl;
        if( num == min) {
                    cout << num << " is equal to the lower endpoint " << min << endl;
        }
        else{
            cout << num << " is equal to the higher endpoint " << max << endl;

        }
    };

    
    return 0;
}