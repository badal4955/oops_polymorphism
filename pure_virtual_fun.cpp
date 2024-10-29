#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double area() = 0; // Pure virtual function
};

class Circle : public Shape
{
public:
    double radius; // Public member variable

    void setRadius(double r)
    {
        radius = r; // Set the radius
    }

    double area()
    {
        return 3.14 * radius * radius; // Area formula using hardcoded value of PI
    }
};

class Rectangle : public Shape
{
public:
    double width;  // Public member variable
    double height; // Public member variable

    void setDimensions(double w, double h)
    {
        width = w;  // Set the width
        height = h; // Set the height
    }

    double area()
    {
        return width * height; // Area formula
    }
};

int main()
{
    Circle circle;
    circle.setRadius(5.0); // Set radius of circle

    Rectangle rectangle;
    rectangle.setDimensions(4.0, 6.0); // Set width and height of rectangle

    // Output the areas
    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    // cout << "Area of Circle: " << circle.area()<<endl;
    // cout << "Area of Rectangle: " << rectangle.area();

    return 0;
}