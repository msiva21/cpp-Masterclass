#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Adding by 1's
    for(int i {1}; i < 11; i++){
        cout << i << endl;
    }
    cout << "===================" << endl;
    // Adding by 2's
    for(int i {1}; i < 11; i += 2){
        cout << i << endl;
    }
    cout << "===================" << endl;
    // Decresing by 1's
    for(int i {10}; i > 0; i--){
        cout << i << endl;
    }
    cout << "===================" << endl;
    // Adding by 10's
    for(int i {1}; i < 101; i += 10){
        cout << i << endl;
    }
    cout << "===================" << endl;
    // Using two iterators
    for(int i {1}, j {5}; i < 6; i++, j++){
        cout << i << " + " << j << " = " << i + j << endl;
    }
    cout << "===================" << endl;
    // Arranging the ouput using if/else statements
    for(int i {1}; i < 101; i++){
        if(i < 10) {
            cout << " " << i << " ";
        }
        else if (i % 10 == 0){
            cout << i << endl;
        }
        else {
            cout << i << " ";
        }
    }
    cout << "===================" << endl;
    // Looping through an array
    int scores[]{100, 45, 84};
    for(int i {0}; i < 3; i++){
        cout << scores[i] << endl;
    }
    cout << "===================" << endl;
    // Looping through a vector
    vector <int> records { 43, 12, 65, 2095};
    for( int i {0}; i < records.size(); i++){
        cout << records.at(i) << endl;
    }

    return 0;
}