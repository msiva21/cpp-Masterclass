#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

// Function Prototypes
void display_menu();
char get_selection();
void print_numbers(const vector<int> &vec); // We don't want this func to change the vector so we use const
void add_number(vector<int> &vec);
void display_mean(const vector<int> &vec); // We make sure the vector isn't change by using const
void display_smallest(const vector<int> &vec);
void display_largest(const vector<int> &vec);
void find_that_number(const vector<int> &vec);
bool is_there(const vector<int> &vec, int target);
void clear_list(vector<int> &vec);
void quit();
void invalid_input();

int main()
{
    char choice{};         // User's choice
    vector<int> numbers{}; // Vector where the variables will be stored

    do
    {
        display_menu();
        choice = get_selection();
        switch (choice)
        {
        case 'P':
            print_numbers(numbers);
            break;
        case 'A':
            add_number(numbers);
            break;
        case 'M':
            display_mean(numbers);
            break;
        case 'S':
            display_smallest(numbers);
            break;
        case 'L':
            display_largest(numbers);
            break;
        case 'F':
            find_that_number(numbers);
            break;
        case 'C':
            clear_list(numbers);
            break;
        case 'Q':
            quit();
            break;
        default:
            invalid_input();
        }
    } while(choice != 'Q');
    cout << endl;
    return 0;
}

// -------------------------------- Function Definitions --------------------------------
// Display the menu
void display_menu()
{
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "C - Clear list" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}
// Get the selection from the user. Notice we can use "cin" statements just like if it were a main()
char get_selection()
{
    char selection{};
    cin >> selection;
    return toupper(selection);
}

// If choice is P
void print_numbers(const vector<int> &vec)
{
    cout << "[ ";
    for (auto elem : vec)
    {
        cout << elem << " ";
    }
    cout << "]";
    cout << endl;
}
// If choice is A
void add_number(vector<int> &vec)
{
    int new_num{};
    cout << "Enter a number to be added to the list: ";
    cin >> new_num;
    vec.push_back(new_num);
    cout << new_num << " was added to the list." << endl;
}
// If choice is M
void display_mean(const vector<int> &vec)
{
    int total{};
    double mean{};
    if (vec.size() == 0)
    {
        cout << "No mean available. List empty!!!" << endl;
    }
    else
    {
        for (auto elem : vec)
        {
            total += elem;
        }
        mean = static_cast<double>(total) / vec.size();
        cout << "The mean of this list is " << mean << endl;
    }
}
// If choice is S
void display_smallest(const vector<int> &vec)
{
    int smallest{};
    if (vec.size() == 0)
    {
        cout << "There is no smallest number. List empty!!" << endl;
    }
    else
    {
        smallest = vec.at(0); // Assume the first element is the smallest element
        for (size_t i{1}; i < vec.size(); i++)
        {
            if (vec.at(i) < smallest) // Compare against the other elements
            {
                smallest = vec.at(i);
            }
        }
    }
    cout << smallest << " is the smallest number in the list." << endl;
}
// If choice is L
void display_largest(const vector<int> &vec)
{
    int largest{};
    if (vec.size() == 0)
    {
        cout << "There is no largest number. List empty!!" << endl;
    }
    else
    {
        largest = vec.at(0); // Assume the first element is the largest element
        for (size_t i{1}; i < vec.size(); i++)
        {
            if (vec.at(i) > largest) // Compare against the other elements
            {
                largest = vec.at(i);
            }
        }
    }
    cout << largest << " is the largest number in the list." << endl;
}
// If choice is F
void find_that_number(const vector<int> &vec){
    int target{};
    cout << "Enter a number you wish to find: ";
    cin >> target;
    if(is_there(vec, target)){
        cout << target << " is in the vector." << endl;
    }
    else{
        cout << target << " is not in the vecotr." << endl;
    }
}
// Check if number is in vector
bool is_there(const vector<int> &vec, int target){
    for(auto elem: vec){
        if(elem == target){
            return true;
        }
    }
    return false;
}

// If choice is C
void clear_list(vector<int> &vec)
{
    vec.clear();
    cout << "List emptied." << endl;
}
// If choice is Q
void quit()
{
    cout << "Goodbye!" << endl;
}
// If invalid input
void invalid_input()
{
    cout << "Sorry, you input an invalid value. Try again." << endl;
}