#include <iostream>
using namespace std;

int main() {
    int scores[]{100, 95, 89};

    cout << "\nValue of scores:     " << scores << endl; // The name of the array is the address of the first element in the array

    int *scores_ptr {scores}; // There is no need to use the ampersand here since you already have an address in scores.
    cout << "Value of scores_ptr: " << scores_ptr << endl;

    cout << "\n------------------Array subscript notation------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\n------------------Pointer subscript notation------------------" << endl;
    cout << scores_ptr[0] << endl;
    cout << scores_ptr[1] << endl;
    cout << scores_ptr[2] << endl;

    cout << "\n------------------Pointer offset notation------------------" << endl;
    cout << *scores_ptr << endl;
    cout << *(scores_ptr + 1) << endl;
    cout << *(scores_ptr + 2) << endl;

    cout << "\n------------------Array offset notation------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

}