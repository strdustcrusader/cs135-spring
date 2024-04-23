/*Implement a class Rectangle. 
Provide a constructor to construct a rectangle with a given width and height
member functions get_perimeter and get_area that compute 
the perimeter and area, and a member function void resize(double factor) that resizes 
the rectangle by multiplying the width and height by the given factor
*/

#include <iostream>
#include <cmath>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // Rectangle constructor that initializes width and height w/ given w, h
    Rectangle(double w, double h) : width(w), height(h) {}

    // Member function get_perimenter
    double get_perimeter() const {
        return 2 * (width + height);
    }

    //Memeber function get_area
    double get_area() const {
        return width * height;
    }

    void resize(double factor) {
        width *= factor;
        height *= factor;
    }
};
