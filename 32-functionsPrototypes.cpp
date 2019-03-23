#include <iostream>
using namespace std;

const double pi{3.14159};

// Function prototypes

// We declare the functions at the top of the main function usually, but in cases we dont't want to do this or when using
// header files, we can use prototypes. Prototypes are function declarations at the top that only need the parameters data
// type but it is best practice to give the name of the parameters for documentation purposes. We write the DEFAULT values
// here on the prototypes
double volume_cylinder(double r, double h);
void cylinder();
double area_circle(double r);
void circle();


int main(){

    circle();
    cylinder();
    return 0;
}

double area_circle(double r){

    return pi * r * r;
}
double volume_cylinder(double r, double h){
    return area_circle(r) * h;
}
void circle(){

    double radius{};
    cout << "Enter a radius: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << area_circle(radius) << endl;

}
void cylinder(){
    
    double radius{};
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    double height{};
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << volume_cylinder(radius, height) << endl;
}
