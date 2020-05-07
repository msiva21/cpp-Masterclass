#include <iostream>
using namespace std;

// Never return a pointer that comes from a local variable inside a function.
int *bad_pointer_function()
{
    int size{};
    return &size; // This memmory address will most likely be used by some other data and your program won't know.
}

int *create_array(size_t size, int init_value = 0){
    int *new_storage {nullptr};
    new_storage = new int [size]; // Remember this will be created on the heap by using the keyword 'new'.
    for(size_t i {0}; i < size; i++){
        *(new_storage + i) = init_value;
    }
    return new_storage; // This pointer is the address of the first value in the array.
}

void display(const int *const array, size_t size){
    for(size_t i{0}; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
int main(){

    int *my_array{nullptr};
    size_t size{};
    int init_value{};

    cout << "How many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;

    my_array = create_array(size, init_value); // We assign the return pointer to this pointer (in main)
                                               // Othwerwise, we would lose the return pointer after
                                               // the function is finished.
    cout << "---------------------------" << endl;

    display(my_array, size);
    delete [] my_array;
    return 0;


    // One more thing, be careful when you have multiple pointers pointing to the same data and one releases that data,
    // while the others do not. This is a dngling pointer or wild/straight pointers. They point to data that is no
    // longer valid.
}