#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    // Normal variable
    int num{10};
    cout << "\nvalue of num is " << num << endl;
    cout << "sizeof num is " << sizeof num << endl;
    cout << "address of num is " << &num << endl;

    // Pointer variable
    int *p;
    cout << "\nvalue of p is " << p << endl; // This is a garbage value since it was not initialized
    cout << "size of p is " << sizeof p << endl; // Pointers pointing to different types have ALL the same size, but this size depends on the machine.
    cout << "address of p is " << &p << endl; // Use the ampersand sign to find the address of a variable
    p =nullptr; // The address that p is pointing is set to 0, so it's pointing nowhere.
    cout << "value of p when p=nullptr is " << p << endl;

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    // They all have the same size, in my machine is 8 bytes
    cout << "\nsizeof int *p1 is " << sizeof p1 << endl;
    cout << "sizeof double *p2 is " << sizeof p2 << endl;
    cout << "sizeof unsigned long long *p3 is " << sizeof p3 << endl;
    cout << "sizeof vector<string> *p4 is " << sizeof p4 << endl;
    cout << "sizeof string *p5 is " << sizeof p5 << endl;

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr}; // Initialize the pointer to zero

    score_ptr = &score; // Set the pointer to the address of score
    cout << "\nValue of score is " << score << endl;
    cout << "Address of score is   " << &score << endl;
    cout << "Value of score_ptr is " << score_ptr << endl;

    // This code print an error because the pointer was declared as an int pointer, not double pointer
    // score_ptr = high_temp; 
    cout << endl;

    return 0;
}