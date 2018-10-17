#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int score{100};
    int *score_ptr{&score};

    cout << score_ptr << endl; // The value of the pointer still is just an address
    cout << *score_ptr << endl; // However, the pointer points to score, so when dereferencing that pointer the value will be 100
    
    *score_ptr = 200; // Change the value of the variable this pointer is pointing to

    cout << score_ptr << endl;     // 200
    cout << *score_ptr << endl;    // 200
    cout << score << endl;

    cout << "\n---------------------" << endl;
    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    cout << *temp_ptr << endl;       // 100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;       // 37.4

    cout << "\n---------------------" << endl;
    string name{"Frank"};
    string *str_ptr{&name};

    cout << *str_ptr << endl;
    name = "James";
    cout << *str_ptr << endl;

    cout << "\n---------------------" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> *vec_ptr{nullptr};
    vec_ptr = &stooges;

    cout << "Firts stooge is " << (*vec_ptr).at(0) << endl; // dereferencing the pointer means we are accesing the vector it points to, in this case, the stooges vector.

    cout << "Stooges are: ";
    for(auto elem: (*vec_ptr)){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}