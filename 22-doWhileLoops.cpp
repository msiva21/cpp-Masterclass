#include <iostream>
using namespace std;

int main()
{

    char selection{};
    do
    {
        cout << "\n1. Do this." << endl;
        cout << "2. Do that." << endl;
        cout << "3. Do something else." << endl;
        cout << "Q. Quit." << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        switch (selection)
        {
        case '1':
            cout << "Do this." << endl;
            break;
        case '2':
            cout << "Do that." << endl;
            break;
        case '3':
            cout << "Do something else." << endl;
            break;
        case 'q':
        case 'Q':
            cout << "Goodbye...." << endl;
            break;
        default:
            cout << "Invalid input. Try again!" << endl;
        }
    } while (selection != 'Q' && selection != 'q');
    return 0;
}