#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{

    char selection{};  // User's selection from the menu
    vector<int> vec{}; // Vector that will serve as a list to hold all the numbers
    int new_num{};     // User's addition to the list
    int total{};       // Total sum of all the vector's elements
    double mean{};     // Mean value of all the numbers in the list
    int smallest{};    // Smallest number in the list
    int largest{};     // Largest number in the list
    int size_of_vec;   // The size of the vector

    do
    {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear list" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> selection;

        switch (selection)
        {
        case 'P':
        case 'p':
            cout << "[";
            for (auto elem : vec)
            {
                cout << " " << elem << " ";
            }
            cout << "]" << endl;
            break;
        case 'A':
        case 'a':
            cout << "Enter a number to be added to the list: ";
            cin >> new_num;
            vec.push_back(new_num);
            cout << new_num << " was added to the list." << endl;
            break;
        case 'M':
        case 'm':
            size_of_vec = vec.size();
            if (size_of_vec == 0)
            {
                cout << "No mean available. List empty!!!" << endl;
                break;
            }
            else
            {
                for (auto elem : vec)
                {
                    total += elem;
                }
                mean = static_cast<double>(total) / vec.size(); // Make sure the answer contains decimal points by using "static_cast<double>()"
                cout << "The mean of this list is " << mean << endl;
                break;
            }
        case 'S':
        case 's':
            size_of_vec = vec.size();
            if (size_of_vec == 0)
            {
                cout << "There is no smallest number. List empty!!" << endl;
                break;
            }
            else
            {
                smallest = vec.at(0); // Assume the first element is the smallest element
                for (int i{1}; i < size_of_vec; i++)
                {
                    if (vec.at(i) < smallest) // Compare against the other elements
                    {
                        smallest = vec.at(i);
                    }
                }
            }
            cout << smallest << " is the smallest number in the list." << endl;
            break;
        case 'L':
        case 'l':
            size_of_vec = vec.size();
            if (size_of_vec == 0)
            {
                cout << "There is no largest number. List empty!!" << endl;
                break;
            }
            else
            {
                largest = vec.at(0); // Assume the first element is the largest element
                for (int i{1}; i < size_of_vec; i++)
                {
                    if (largest < vec.at(i)) // Compare against the other elements
                    {
                        largest = vec.at(i);
                    }
                }
            }
            cout << largest << " is the largest number in the list." << endl;
            break;
        case 'C':
        case 'c':
        vec.clear();
            cout <<  "List emptied." << endl;
            break;
        case 'Q':
        case 'q':
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "\n" << selection << " is an incorrect input. Try Again." << endl;
        }

    } while (
        selection != 'q' && selection != 'Q');

    return 0;
}