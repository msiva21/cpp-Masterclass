#include <iostream>
using namespace std;

int main() {
    char vowels []{'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;

    // This line of code creates an error and doesn't run the program;
    // cin << vowels[5]; 

    // Assigning a new value to an existing element;
    int test_scores []{100, 50, 40, 73};
    cout << "\nElement at test_scores[0] is " << test_scores[0] << endl;
    cout << "Element at test_scores[3] is " << test_scores[3] << endl;
    cout << "Changing the element at test_scores[0] to 0."<< endl;
    test_scores[0] = 0;
    cout << "The new element at test_scores[0] is " << test_scores[0] << endl;

    // Seeing the values of an un-initialized array to garbage values;
    int credits [100];
    cout << "\nThis array of three elements has been automatically initialized to garbage values." << endl;
    cout << "Element at index 0 is " << credits[0] << endl;
    cout << "Element at index 1 is " << credits[1] << endl;
    cout << "Element at index 2 is " << credits[2] << endl;

    // Seeing the values of an array automatically initialized to zero by adding brackets at the end;
    int scores [5]{};
    cout << "\nThis array of five elements has been automatically initialized to 0." << endl;
    cout << "Element at index 0 is " << scores[0] << endl;
    cout << "Element at index 1 is " << scores[1] << endl;
    cout << "Element at index 2 is " << scores[2] << endl;
    cout << "Element at index 3 is " << scores[3] << endl;
    cout << "Element at index 4 is " << scores[4] << endl;

    // Create your own array;
    int my_array[4]{};
    cout << "\nEnter 4 values to populate an array of length 4." << endl;
    cin >> my_array[0] >> my_array[1] >> my_array[2] >> my_array[3];
    cout << "This is your first index: " << my_array[0] << endl;
    cout << "This is your second index: " << my_array[1] << endl;
    cout << "This is your third index: " << my_array[2] << endl;
    cout << "This is your fourth index: " << my_array[3] << endl;

    // Printing the array will give out the location in your machine's memory;
    cout << "\nIf you print out the name of your array, it will give out it's location not all the elements in it." << endl;
    cout << "This is the vowels array's location (this location is interesting for 'char' types arrays): " << vowels << endl;
    cout << "This is the test scores array's location: " << test_scores << endl;
    cout << "This is the automatically initialized array's location: " << scores << endl;
    cout << "This is your created array's location: " << my_array << endl;

    return 0;
}