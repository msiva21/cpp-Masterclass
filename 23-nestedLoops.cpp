#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int data{};
    cout << "How many data items do you have?: ";
    cin >> data;

    vector <int> data_vector {};
    for(int i {1}; i <= data; i++){
        int item{};
        cout << "Enter data item " << i << ": ";
        cin >> item;
        data_vector.push_back(item);
    }

    cout << "\nDisplaying histogram:" << endl;
    for(auto elem: data_vector){
        for(int i {0}; i < elem; i++){
            if(i % 5 == 0 && i != 0){
                cout << " * ";
            }
            cout << "-";
        }
        cout << endl;
    }

    // Create a program that takes the sum of all the products of all the vector elements

    int result{};
    vector<int> vec2{1, 2, 3};
    vector<int> vec{2, 4, 6, 8};

    int vec_size = vec.size();
    
    if(vec_size <= 1){
        result = 0;
    }
    else{
        for (int i{0}; i < vec_size; i++){
            for(int j {vec_size - 1}; j > i; j--){
                result += vec.at(i) * vec.at(j);
            }
        }

    }
    cout << "\nDisplaying the sum of all the products between the elements of a vector" << endl;
    cout << result << endl;

    return 0;
}