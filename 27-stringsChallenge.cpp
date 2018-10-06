#include <iostream>
#include <string>
using namespace std;

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"zebPXENjyZDWsgkhwFSaBVYMQKxpctmUJdCfOTlHunivqrGoLRIA"};

    string secret_message {};
    cout << "Enter a secret message to encrypt: " << endl;
    getline(cin, secret_message);

    // Loop through the message
    for(size_t i{0}; i < secret_message.length(); i++) {
        size_t position {alphabet.find(secret_message.at(i))}; // Find the index of each letter in the message in the alphabet.
        if(position != string::npos){ 
        // If the letter is found in the alphabet string then do the following:
            swap(secret_message.at(i), key.at(position)); // Exchange each letter in the message found in the alphabet,
            //  with the letter in the key according to the same position as its counterpart in the alphabet string.
        }
    }

    cout << "Encrypted Message is....." << endl;
    cout << secret_message << endl;


    // An easier method
    string decrypted_message {};
    for(char c: secret_message){
        size_t position {key.find(c)};
        cout << position << endl;
        if(position != string::npos){
            char new_char{key.at(position)};
            cout << " -char- " << endl;
            decrypted_message += new_char;
        }
        else{
            cout << " -no letter- " << endl;
            decrypted_message += c;
        }
    }
    cout << "Decrypted message is......" << endl;
    cout << decrypted_message << endl;

    return 0;
}