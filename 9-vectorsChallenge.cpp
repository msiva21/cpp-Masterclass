#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Declare 2 empty int vectors
    vector <int> vector1;
    vector <int> vector2;

    // Add 10 and 20 to vector1
    vector1.push_back(10);
    vector1.push_back(20);

    // Display vector1's elements and its size
    cout << "These are vector1's elements:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector1 is " << vector1.size() << endl;

    // Add 100 and 200 to vector2
    vector2.push_back(100);
    vector2.push_back(200);

    // Display vector2's elements and its size
    cout << "These are vector2's elements:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The size of vector2 is " << vector2.size() << endl;

    // Declare an empty 2D vector
    vector <vector<int>> vector_2d;

    // Add vector1 and vector2 to this 2D vector
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display its elements
    cout << "Vector1's element are: " << endl;
    cout << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl;
    cout << "Vector2's element are: " << endl;
    cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;

    // Set vector1[0] = 1000;
    vector1.at(0) = 1000;

    // Display vector_2d's elements again
    cout << "--------------vector_2d's vectors-----------------" << endl;
    cout << "We changed vector1[0] value to 1000, but this updated vector was not the one we added to vector_2d therefore it isn't showing that new value." << endl;
    cout << "Vector1's element are: " << endl;
    cout << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl;
    cout << "Vector2's element are: " << endl;
    cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;

    // Display vector1's elements one final time, what do you see now?
    cout << "These are vector1's elements: " << vector1.at(0) << "\t" << vector1.at(1) << endl;

    return 0;
}