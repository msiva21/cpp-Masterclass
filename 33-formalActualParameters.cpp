#include <iostream>
#include <vector>
#include <string>
using namespace std;

// A function doesn't actually change the value of a variable when the variable is a passed as an argument.
// A copy of that value/data is made when it is used in the function.

// You can see that even though we passed a variable into a function that changed that argument, the real variable was not 
// made as shown in the last output statement.
void parameter_test(int formal){
    cout << formal << endl;
    formal = 100;
    cout << formal << endl;
}
void pass_by_value_1(int num);
void pass_by_value_2(string s);
void pass_by_value_3(vector <string> vec);
void print_vector(vector <string> vec);

void pass_by_value_1(int num){
    num = 100;
}
void pass_by_value_2(string s){
    s = "Changed";
}
void pass_by_value_3(vector <string> vec){
    vec.clear();
}
void print_vector(vector <string> vec){
    for(auto elem: vec){
        cout << elem << " ";
    }
    cout << endl;
}

int main(){

    int actual {50};
    cout << actual << endl;
    parameter_test(actual);
    cout << actual << endl;

    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_value_1: " << num << endl;
    pass_by_value_1(num);
    cout << "num after calling pass_by_value_1: " << num << endl;

    cout << "\nanother_num before calling pass_by_value_1: " << another_num << endl;
    pass_by_value_1(another_num);
    cout << "another_num after calling pass_by_value_1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nname before calling pass_by_value_2: " << name << endl;
    pass_by_value_2(name);
    cout << "name after calling pass_by_value_2: " << name << endl;

    vector <string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value_3: ";
    print_vector(stooges);
    pass_by_value_3(stooges);
    cout << "stooges after calling pass_by_value_3: ";
    print_vector(stooges);

    
    return 0;
    
}