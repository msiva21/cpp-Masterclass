#include <iostream>
using namespace std;

// Prototypes
void local_example();
void global_example();
void static_local_example();

int num{300}; // Global variable declare outside any class or function

// Definitions
void local_example(int x){
    int num{1000}; // Local to local_example function
    cout << "\nLocal num is " << num << " in local_example() scope at the beginning." << endl;
    num = x;
    cout << "Local num is " << num << " in local_example() scope at the end." << endl;
}
void global_example(){
    cout << "\nGlobal num is " << num << " in global_example() scope at the beginning." << endl;
    num *= 2;
    cout << "Global num is " << num << " in global_example() scope at the end." << endl;
}
void static_local_example(){
    static int num{5000}; // local static value is preserved between calls
    cout << "\nLocal static num is " << num << " in static_local_example() scope at the beginning." << endl;
    num += 100;
    cout << "Local static num is " << num << " in static_local_example() scope at the end." << endl;
}


int main(){
    int num{100}; // Local variable to main function
    int another_num{500}; // Local variable to main function

    cout << "\nLocal num is " << num << " in main function." << endl;

    // Make another level of scope
    {
        int num{200}; // Local variable to this inner block
        cout << "local num is " << num << " in inner block in main." << endl;
        cout << "This inner block in main function can see out 'another_num' is " << another_num << endl;
    }

    cout << "Local num is " << num << " in main." << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();
}