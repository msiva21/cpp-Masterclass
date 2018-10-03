#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector <char> vowels;         // empty
    // vector <char> vowels(5);      // 5 vector elements initialized to nothing; Initialized to 0 if using 'int' type.
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    cout << "\n\n\nUsing the array sintax on a vector named 'vowels.'" << endl;
    cout << "The element at index 0 of the vector vowels is: " << vowels[0] << endl;
    cout << "The element at index 4 of the vector vowels is: " << vowels[4] << endl;

    // vector <int> test_scores(3);        // 3 vector elements initialized to 0
    // vector <int> test_scores(3, 100);   // 3 vector elements initialized to 100

    vector <int> test_scores {100, 98, 89};
    cout << "\nTest scores using the array syntax." << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using the vector syntax." << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector." << endl;

    cout << "Enter 3 scores: " << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "Updated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "Enter a test score to add to the vector: " << endl;
    int new_score{0};
    cin >> new_score;

    test_scores.push_back(new_score);

    cout << "\nEnter one more test score to add to the vector: " << endl;
    cin >> new_score;

    test_scores.push_back(new_score);
    cout << "Updated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "There are now " << test_scores.size() << " scores in the vector." << endl;

    // Example of a 2D vector
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "Here are the movie ratings from reviewer #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "Here are the movie ratings from reviewer #1 using vector syntax:" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    cout << endl;



    return 0;
}