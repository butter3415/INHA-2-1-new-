#include "circle.h"
#include "circle.h" // # pragma once ��������ν� �ߺ� �ڵ� ����, ���ô���.


void test() {
    cout << "Circle 4" << endl;
    Circle circle4(9.0);
    cout << "������: " << circle4.getRadius() << endl;

    cout << "Circle 5" << endl;
    Circle circle5;
    cout << "������: " << circle5.getRadius() << endl;
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

    cout << "������: " << circle1.getRadius() << endl;
    cout << "����: " << circle1.getArea() << endl;
    cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "������: " << circle2.getRadius() << endl;
    cout << "����: " << circle2.getArea() << endl;
    cout << "�ѷ�: " << circle2.getPerimeter() << "\n";

    cout << "Circle 6" << endl;
    // Circle circle6(circle2);
    // cout << "������: " << circle6.getRadius() << endl;

    cout << Circle::getCount() << "\n";
    return 0;
}