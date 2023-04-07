//# pragma once



// Ŭ����  (������ �κ�)

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    static int counts;
public:
    Circle(); // default constructor
    Circle(double radius); // parameter constructor
    //Circle(const Circle& circle); // copy constructor
    Circle(const Circle& circle) = delete;

    ~Circle(); // destructor
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
    static int getCount();
};