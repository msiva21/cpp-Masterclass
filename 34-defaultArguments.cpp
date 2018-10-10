#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Protoypes
// Make sure default values are to the END of the parameter lists always.
double calc_cost(double base_cost = 100, double tax_rate = .06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

// Function definitions
// No need to specify default values again.
double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
};
void greeting(string name, string prefix, string suffix){
    cout << "Hello " << prefix << " " << name << " " << suffix << endl;
};


int main()
{
    double cost{0};
    cost = calc_cost(100.0, .08, 4.25); // This function will not use any defaults

    cout << fixed << setprecision(2);
    cout << "Cost is " << cost << endl;

    cost = calc_cost(100.0, .08); // This function will one default value
    cout << "Cost is " << cost << endl;

    cost = calc_cost(200.0); // Will use all the dafault values
    cout << "Cost is " << cost << endl;

    cost = calc_cost(); // All defaults values used
    cout << "Cost is " << cost << endl;

    greeting("James Rogers", "Dr.", "M.D.");
    greeting("Michael");

    cout << endl;
    return 0;
}