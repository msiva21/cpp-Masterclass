#include <iostream>
using namespace std;

// You're only creating a third array so you have no business changing the pointers or what they point to,ergo you must use const
int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2){ 
    int *new_array{nullptr};
    size_t new_size{size1 * size2};
    new_array = new int [new_size];

    int position{0}; // This will serve as the index value to use in the for loop iterations
    for(size_t i{0};i < size2; i++){
        for(size_t j{0}; j < size1; j++){
            new_array[position] = arr1[j] * arr2[i];
            position++;
        }
    }
    return new_array;
}

void print(const int *const array, size_t size){ // This function expects a constant pointer point to a constant int
     for(size_t i{0}; i < size; i++){
         cout << array[i] << " ";
     }
     cout << endl;
}

int main(){

    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size{array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);
    delete[] results;

    cout << endl;
    return 0;

}