// Creating a cipher encryptor
#include <iostream>
#include <string>
using namespace std;

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string cipher {"zebPXENjyZDWsgkhwFSaBVYMQKxpctmUJdCfOTlHunivqrGoLRIA"};

    string secret_message {};
    cout << "Enter a secret message to encrypt: " << endl;
    getline(cin, secret_message);

    string encrypted_message{};
    // Loop through the message
    for(size_t i{0}; i < secret_message.length(); i++) {
        size_t position {alphabet.find(secret_message.at(i))}; // Find the index of each letter in the message in the alphabet.
        if(position != string::npos){ 
        // If the letter is found in the alphabet string then do the following:
            encrypted_message += cipher.at(position);
        } else{
        encrypted_message += secret_message.at(i);
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Encrypted Message is....." << endl;
    cout << endl;
    cout << encrypted_message << endl;

    // An easier method
    string decrypted_message {};
    for(char c: encrypted_message){
        size_t position {cipher.find(c)};
        if(position != string::npos){
            char new_char{alphabet.at(position)};
            decrypted_message += new_char;
        }
        else{
            decrypted_message += c;
        }
    }    
    
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Decrypted message is......" << endl;
    cout << endl;
    cout << decrypted_message << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    return 0;
}