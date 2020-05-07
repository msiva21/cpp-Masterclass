#include <iostream>
#include <random>
using namespace std;

/*******************
Pointers CAN have null values, where as references CANNOT. So they are used in certain occasions where you
expect null references.
*********************/


// We are passing an address here, and then dereferencing it. So in this case, we are passing values by reference
// because we will affect the variable directly.
void double_data(int *int_ptr){
    *int_ptr *= 2;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *const vec_ptr){
    for(auto elem : *vec_ptr){
        cout << elem << " ";
    }
    cout << endl;
}
// The sentinel is the value that we want to stop at.
void display2(const int *array, int sentinel){
    while(*array != sentinel){
        // *array = 5;          // This is not allowed because you said the pointer points to a const type.
        cout << *array++ << " ";
    }
    cout << endl;
}
int main(){

    int value{10};
    int *int_ptr {nullptr};

    cout << "value: " << value << endl;
    double_data(&value);
    cout << "value: " << value << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "value: " << value << endl;

    cout << "----------------------" << endl;
    int x{100};
    int y{200};

    cout << "x is " << x << endl;
    cout << "y is " << y << endl;

    swap(&x, &y);

    cout << "\nx is " << x << endl;
    cout << "y is " << y << endl;

    cout << "----------------------" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    cout << "----------------------" << endl;
    int scores []{100, 98, 79, 85, 68, -1};
    display2(scores, -1); 

    return 0;
}