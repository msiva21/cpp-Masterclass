#include <iostream>
using namespace std;

int main() {

    char letter_grade{};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade) {
        case 'a':
        case 'A': cout << "You need a 90 or higher, study hard!" << endl;
        break;
        case 'b':
        case 'B': cout << "You need an 80 at least." << endl;
        break;
        case 'c':
        case 'C': cout << "You need a 70 at least." << endl;
        break;
        case 'd':
        case 'D': cout << "Will you even try?" << endl;
        break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you sure? (Y/N): ";
            cin >> confirm;
            if(confirm == 'y' || confirm == 'Y') {
                cout << "Ok, I guess you dind't study." << endl;
            }
            else if(confirm == 'n' || confirm == 'N') {
                cout << "Good, go on and study!" << endl;
            }
            else{
                cout << "Sorry invalid input." << endl;
            }
            break;
        }
        break;
        default: cout << "Sorry, that's not a valid grade." << endl;

    }
}