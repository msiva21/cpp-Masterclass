#include <iostream>
#include <cstdlib> // Provides the rand()
#include <ctime>   // Provides the time()
using namespace std;

int main()
{

    int random_numer{};
    int count{10}; // Number of random numbers to generate
    int min{1};    // Lower bound (inclusive)
    int max{6};    // Upper bound (inclusive)

    // This is the highest value that can be returned by rand() and it varies from machine to machine,
    // but it is guarantee to be at least 32767.
    cout << "RAND_MAX in this machine is " << RAND_MAX << endl; 

    // If we dont seed the random number generator, in this case the rand() function, then the sequence of random numbers 
    // generated will always be the same. We need to seed it according to the current time using the time(). The time in
    // seconds from the unix time (Jan 1, 1970, UTC, 00:00:00)
    srand(time(nullptr));


    for(int i{1}; i <= count; i++){
        // Generate a random number between [1, 6] because the remainder of any number divided by 6 is between 0-5,
        // so we just add the min value to this to create numbers between 1-6.
        random_numer = rand() % max + min;  
        cout << random_numer << endl;
    }

    cout << endl;
    return 0;
}