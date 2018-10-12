#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function Prototypes
void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector <string> &vec);
void print_vector(const vector <string> &vec);

// Function Definitions
void pass_by_ref1(int &num){
    num = 1000;
}
void pass_by_ref2(string &s){
    s = "Changed";
}
void pass_by_ref3(vector <string> &vec){
    vec.clear();
}
void print_vector(const vector <string> &vec){
    for(auto elem:vec){
        cout << elem << " ";
    }
    cout << endl;
}


int main() {

    int num{10};
    int another_num{20};

    cout << "\nnum before calling pass_by_ref1(): " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1(): " << num << endl;
    cout << endl;

    cout << "another_num before calling pass_by_ref1(): " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1(): " << another_num << endl;
    cout << endl;

    string name{"Frank"};
    cout << "name before calling pass_by_ref2(): " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2(): " << name << endl;
    cout << endl;

    vector <string> stooges{"Larry", "Moe", "Curly"};
    cout << "stooges before calling pass_by_ref3(): ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3(): ";
    print_vector(stooges);
    cout << endl;

    return 0;

}