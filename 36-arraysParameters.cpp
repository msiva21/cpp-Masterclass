#include <iostream>

using namespace std;

// If you want to prevent arrays from being changed, then use the type "const" in the prototype and definition

// Prototypes
void print_array(int array[], size_t size);
void set_array(int array[], size_t size, int value);

// Definitions
void print_array(int array[], size_t size){
    for( size_t i{0}; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    // array[0] = 5000; // bug 
}
void set_array(int array[], size_t size, int value){
    for(size_t i{0}; i < size; i++){
        array[i] = value;
    }
}

int main() {
    int my_scores[]{100, 98, 90, 86, 84};

    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    print_array(my_scores, 5);
    cout << endl;
    return 0;
}