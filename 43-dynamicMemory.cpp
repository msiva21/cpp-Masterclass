#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Pointers can be used to dynamically allocate storage from the heap (free store) at RUN TIME
    int *int_ptr{nullptr}; // Initialize pointer
    int_ptr = new int; // Allocate an int on the heap (free store)
    cout << endl;
    cout << int_ptr << endl; // Display the address of this memory location
    *int_ptr = 200;
    cout << *int_ptr << endl; // 200
    delete int_ptr; // We delete the storage after using it


    // Creating an array using dynamic memory allocation
    size_t size{}; // How big the array will be?
    double *temp_ptr{nullptr}; // The pointer that will point to the beginning of this array.

    cout << "How many temperatures? ";
    cin >> size;

    // Here we are creating an array of type double, but we don't name this array like normal variables.
    temp_ptr = new double[size]; // We allocate the size of this array on the heap. We must not lose this pointer,
                                 // or we will lose the location of this memory forever.
    cout << temp_ptr << endl; // This is the address of the first double in newly-created array.
    delete [] temp_ptr; // Always delete the allocation after using it. Don't put anything inside the brackets.
    cout << endl;
    return 0;
}