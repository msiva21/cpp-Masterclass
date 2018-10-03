#include <iostream>
using namespace std;

int main(){

    // Boolean variables
    bool in_bounds {false};
    bool out_of_bounds {false};
    bool equal_to_bounds {false};

    // Upper and lower bounds
    int upper {20};
    int lower {10};

    // Ask user for a number
    cout << "\nEnter an integer value between " << lower << " and " << upper << " but not including them: ";
    int num {};
    cin >> num;

    // Check booleans
    in_bounds = (num > lower && num < upper);
    out_of_bounds = (num < lower || num > upper);
    equal_to_bounds = (num == lower || num == upper);
    cout << boolalpha;
    cout << num << " is inside this domain?..... " << in_bounds << endl;
    cout << num << " is outside this domain?..... " << out_of_bounds << endl;
    cout << num << " is either of the upper or lower limits of this domain?..... " << equal_to_bounds << endl;

    // Check whether you need to wear a coat outside according to the temperature or the wind speed
    bool wear_coat {false};
    double max_coldness {45.0};
    double max_wind_speed {25.0};

    // Enter the temperature and wind speed
    cout << "Enter the outside temperature (Farenheit): ";
    double temperature{0.0};
    cin >> temperature;
    cout << "Enter the wind speed (mi/hr): ";
    double wind{0.0};
    cin >> wind;

    // Check if you need a coat or not;
    wear_coat = (temperature <= max_coldness || wind >= max_wind_speed); // If temperature < 45.0 or wind > 25.0 then wear a coat;
    cout << boolalpha;
    cout << "Do you need to wear a coat?........ " << wear_coat << endl;



    return 0;
}