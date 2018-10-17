#include <iostream>
using namespace std;

int main(){
    // Left values : Values that have names and are addressable, and are NOT literals.
    int x{100}; // x is an l-value
    x = 23 + 544;
    // 100 + 2 = x;  // (100 + 2) is not an l-value

    // Right values: Everything that is not a left value, literals!!!
    int y{90}; // 90 is an r-value
    y = 40 + x;  // (40 + x) is an r-value

    // Left Values references: passing a left value to a reference
    int z{900};

    int &ref1{z};  // z is a l-value
    // int &ref2{330}; // You cannot referece a right value to a reference

    return 0;
}