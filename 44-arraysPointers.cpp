#include <iostream>
using namespace std;

int main() {
    int scores[]{100, 95, 89};

    cout << "\nValue of scores:     " << scores << endl; // The name of the array is the address of the first element in the array.

    int *scores_ptr {scores}; // There is no need to use the ampersand here since you already have an address value in "scores".
    cout << "Value of scores_ptr: " << scores_ptr << endl;

    cout << "\n------------------Array subscript notation------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\n------------------Pointer subscript notation------------------" << endl;
    cout << scores_ptr[0] << endl;
    cout << scores_ptr[1] << endl;
    cout << scores_ptr[2] << endl;

    cout << "\n------------------Pointer offset notation------------------" << endl; // We add the index value to the pointer.
    // Remember, you are not literally adding 1 or 2 to the address, you are instead adding the size of that value type, 
    // in this case 4 bytes.
    cout << *scores_ptr << endl; // This is like *(scores+ptr + 0)
    cout << *(scores_ptr + 1) << endl;
    cout << *(scores_ptr + 2) << endl;

    cout << "\n------------------Array offset notation------------------" << endl; 
    // The array name "scores" is basically a pointer, so we can use it the same way as in Pointer Offset Notation. 
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

}