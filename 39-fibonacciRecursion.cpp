#include <iostream>
using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n){
    // Base case
    if (n <=1){
        return n;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {

    cout << fibonacci(5) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;
    cout << fibonacci(43) << endl;

    return 0;

}