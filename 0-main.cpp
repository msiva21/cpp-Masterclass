//
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    // Variables
    double length;          // the cost of the labor and material is $.23
    double width; 
    double height;
    double volume;          
    double cost; 
    double charge;          // charge the customer .50 per cubic foot 
    double profit; 
    cout << fixed << showpoint << setprecision(2);

    cout << " Enter the crate (in feet).\n ";
    cout << " what is the length of the crate "; 
    cin >> length; 
    cout << " what is the width of the crate "; 
    cin >> width; 
    cout << " what is the height of the crate "; 
    cin >> height; 
    

    volume = length * width * height;
    cost   = volume * .23;
    charge = volume * .50;
    profit = charge - cost;

    cout << "The volume of the crate is " << volume << endl; 
    cout << "The cost to build it is $ " << cost << endl; 
    cout << "Charge per customer is $ " << charge << endl; 
    cout << "The profit to make is " << profit << endl; 

    return 0; 



    



           


}