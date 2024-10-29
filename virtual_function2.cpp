#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"this is base class function:";
    }
};
class derived:public base
{
    public:
    void display(){
        cout<<"this is derived class function:\n";
        cout<<"this is 2nd derived class function:";
    }
};
int main(){
    base*ptr;
    base ob_base;
    derived ob_derived;
    ptr=&ob_derived;
    ptr->display();
    return 0;
}


// #include <iostream>
// #include <cmath>

// using namespace std;

// class Shape {
// public:
//     virtual double calculateArea() = 0;
//     virtual double calculatePerimeter() = 0;
// };

// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double radius) : radius(radius) {}

//     double calculateArea() override {
//         return M_PI * radius * radius;
//     }

//     double calculatePerimeter() override {
//         return 2 * M_PI * radius;
//     }
// };

// class Rectangle : public Shape {
// private:
//     double length, width;

// public:
//     Rectangle(double length, double width) : length(length), width(width) {}

//     double calculateArea() override {
//         return length * width;
//     }

//     double calculatePerimeter() override {
//         return 2 * (length + width);
//     }
// };

// class Triangle : public Shape {
// private:
//     double side1, side2, side3;

// public:
//     Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}

//     double calculateArea() override {
//         // Using Heron's formula
//         double s = (side1 + side2 + side3) / 2;
//         return sqrt(s * (s - side1) * (s - side2) * (s - side3));
//     }

//     double calculatePerimeter() override {
//         return side1 + side2 + side3;
//     }
// };

// int main() {
//     Circle circle(5);
//     Rectangle rectangle(4, 3);
//     Triangle triangle(3, 4, 5);

//     cout << "Circle area: " << circle.calculateArea() << endl;
//     cout << "Circle perimeter: " << circle.calculatePerimeter() << endl;

//     cout << "Rectangle area: " << rectangle.calculateArea() << endl;
//     cout << "Rectangle perimeter: " << rectangle.calculatePerimeter() << endl;

//     cout << "Triangle area: " << triangle.calculateArea() << endl;
//     cout << "Triangle perimeter: " << triangle.calculatePerimeter() << endl;

//     return 0;
// }