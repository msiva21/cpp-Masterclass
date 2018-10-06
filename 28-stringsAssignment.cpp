#include <iostream>
#include <string>
using namespace std;

int main(){

    string pyramid_message {};
    cout << "Enter a message that will be displayed as a pyramid: ";
    getline(cin, pyramid_message);

    // Loop through the message
    for(size_t i{0}; i < pyramid_message.length(); i++){

        // Create and display the whitespaces
        for(size_t s{pyramid_message.length() - 1}; s > i; s--){
            cout << " ";
        }
        // Create and display the letters up letter at i
        for(int k{0}; k < i; k++){
            cout << pyramid_message.at(k);
        }

        // Display the letter at i
        cout << pyramid_message.at(i);

        // Create and display the letters after i
        for(size_t j{i}; j > 0; j--){
            cout << pyramid_message.at(j);
        }

        // Start a new line
        cout << endl;
    }

    return 0;
}

// Teacher's Solution
// #include <iostream>
// #include <string>
 
 
// int main()
// {
//     std::string letters{};
 
//     std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
//     getline(std::cin, letters);
 
//     size_t num_letters = letters.length();
 
//     int position {0};
 
//     // for each letter in the string
//     for (char c: letters) {
 
//         size_t num_spaces = num_letters - position;
//         while (num_spaces > 0) {
//             std::cout << " ";
//             --num_spaces;
//         }
 
//         // Display in order up to the current character
//         for (size_t j=0; j < position; j++) {
//             std::cout << letters.at(j);
//         }
 
//         // Display the current 'center' character
//         std::cout << c;
 
//         // Display the remaining characters in reverse order
//         for (int j=position-1; j >=0; --j) {
//             // You can use this line to get rid of the size_t vs int warning if you want
//             auto k = static_cast<size_t>(j);
//             std::cout << letters.at(k);
//         }
 
//         std::cout << std::endl; // Don't forget the end line
//         ++position;
//     }
 
//     return 0;
// }