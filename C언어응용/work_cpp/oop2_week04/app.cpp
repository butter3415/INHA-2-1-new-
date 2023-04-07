#include "circle.h"
#include "circle.h" // # pragma once 사용함으로써 중복 코드 제거, 무시당함.


void test() {
    cout << "Circle 4" << endl;
    Circle circle4(9.0);
    cout << "반지름: " << circle4.getRadius() << endl;

    cout << "Circle 5" << endl;
    Circle circle5;
    cout << "반지름: " << circle5.getRadius() << endl;
    cout << Circle::getCount() << "\n";
}

int main()
{
    // long test;
    // cout << sizeof(test) << "\n";

    cout << "Circle 3" << endl;
    Circle circle3(5.0);

    cout << "Circle 1" << endl;
    Circle circle1;
    circle1.setRadius(10.0);

    cout << Circle::getCount() << "\n";
    test();
    cout << Circle::getCount() << "\n";

    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter() << "\n";

    cout << "Circle 6" << endl;
    // Circle circle6(circle2);
    // cout << "반지름: " << circle6.getRadius() << endl;

    cout << Circle::getCount() << "\n";
    return 0;
}