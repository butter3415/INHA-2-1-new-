////#pragma once
//#ifndef CIRCLE_H
//#define CIRCLE_H
//
//#include <iostream>
//
//using namespace std;
//
//class Circle
//{
//private:
//    double radius;
//    static int count; // static field, global memory
//public:
//    Circle(); // default constructor
//    Circle(double r); // parameter constructor
//    Circle(const Circle& c); // copy constructor
//    //Circle(const Circle& c) = delete; 
//    ~Circle();  // destructor
//
//    double getRadius() const;
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//
//    static int getCount(); // static method
//};
//#endif
//
//
//int Circle::count = 0;
//
///*
//Circle::Circle() {
//    radius = 1.0;
//    count++;
//    cout << this << " ��ü ����(�⺻������)\n";
//}
//*/
///*
//Circle::Circle(double r) {
//    count++;
//    radius = r;
//    cout << this << " ��ü ����(�Ű�����������)\n";
//}
//*/
//Circle::Circle() : radius(1.0) {
//    count++;
//    cout << this << " ��ü ����(�⺻������)\n";
//}
///*
//}
//Circle::Circle(double radius) {
//    radius = radius;  // ��������� �Ű������� ������ �Ұ���
//    count++;
//    cout << this << " ��ü ����(�Ű�����������)\n";
//}
//*/
///*
//Circle::Circle(double radius) {
//    this->radius = radius;
//    count++;
//    cout << this << " ��ü ����(�Ű�����������)\n";
//}
//*/
//
//Circle::Circle(double radius) : radius(radius) {
//    count++;
//    cout << this << " ��ü ����(�Ű�����������)\n";
//}
///*
//Circle::Circle(const Circle& c) {
//    count++;
//    radius = c.radius;
//    cout << this << " ��ü ����(���������)\n";
//}
//*/
//Circle::Circle(const Circle& circle) : radius(circle.radius) {
//    count++;
//    cout << this << " ��ü ����(���������)\n";
//}
//Circle::~Circle() {
//    count--;
//    cout << this << " ��ü �Ҹ�. ���� �ʸ� ����ϸ�!\n";
//}
//
//double Circle::getRadius() const
//{
//    int a = 9;
//    //radius = 2.0;
//    return radius;
//}
//double Circle::getArea() const
//{
//    const double PI = 3.14;
//    return (PI * radius * radius);
//}
//double Circle::getPerimeter() const
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//void Circle::setRadius(double value)
//{
//    radius = value;
//}
//int Circle::getCount() {
//    return count;
//}
//
//
//
//
//Circle* test() {
//    cout << "Circle 7" << endl;
//    Circle* circle7 = new Circle(7.0);
//
//    cout << circle7->getArea() << endl;
//    // �¾�µ� ���� �ʾ�,,,!
//    // delete �� �ؾ��Ѵ�
//    // Circle Ÿ������ ����
//
//    cout << "Circle 5" << endl;
//    Circle circle5(2.0);
//    cout << "Circle 6" << endl;
//    Circle circle6(circle5);
//    cout << "������: " << circle6.getRadius() << endl;
//    cout << Circle::getCount() << "\n";
//
//    delete circle7;
//    circle7 = nullptr;
//    // ���� ������� �� �ɰ� �Ծ�...
//    // �ڡڡڡڡڡ� �޸� delete, nullptr �߿� �ڡڡڡڡڡ�
//
//    return circle7;
//}
//
//int main()
//{
//    cout << Circle::getCount() << "\n";
//    cout << Circle::getCount() << "\n";
//    cout << "Circle 3" << endl;
//    Circle circle3(5.0);
//
//    cout << "Circle 1" << endl;
//    Circle circle1;
//    cout << "������: " << circle1.getRadius() << endl;
//    circle1.setRadius(10.0);
//
//    cout << Circle::getCount() << "\n";
//
//    Circle* copyCircle = test();
//    // test �Լ� circle7�� copycircle �� ����
//
//    cout << copyCircle->getRadius() << endl;
//
//    delete copyCircle;
//    copyCircle = nullptr;
//    // ���̰� ���� �� ���δ�.
//    // �����⸦ ���� ���� �� �־ ��������� ������.
//
//    cout << Circle::getCount() << "\n";
//
//    cout << "������: " << circle1.getRadius() << endl;
//    cout << "����: " << circle1.getArea() << endl;
//    cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;
//
//    cout << "Circle 2" << endl;
//    Circle circle2;
//    circle2.setRadius(20.0);
//    cout << "������: " << circle2.getRadius() << endl;
//    cout << "����: " << circle2.getArea() << endl;
//    cout << "�ѷ�: " << circle2.getPerimeter() << "\n";
//
//    cout << "Circle 4" << endl;
//    Circle circle4(circle2);
//    cout << "������: " << circle4.getRadius() << endl;
//
//    cout << Circle::getCount() << "\n";
//    return 0;
//}