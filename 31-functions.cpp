#include <iostream>
using namespace std;

const double pi{3.14159};

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

int main(){

    circle();
    cylinder();
    return 0;
}