//#include "circle.h"
//#include "circle.h"
//
//void test() {
//    cout << "Circle 5" << endl;
//    Circle circle5(2.0);
//    cout << "Circle 6" << endl;
//    Circle circle6(circle5);
//    cout << "반지름: " << circle6.getRadius() << endl;
//    cout << Circle::getCount() << "\n";
//}
//int main()
//{
//    cout << Circle::getCount() << "\n";
//    cout << Circle::getCount() << "\n";
//    cout << "Circle 3" << endl;
//    Circle circle3(5.0);
//
//    cout << "Circle 1" << endl;
//    Circle circle1;
//    cout << "반지름: " << circle1.getRadius() << endl;
//    circle1.setRadius(10.0);
//
//    cout << Circle::getCount() << "\n";
//    test();
//    cout << Circle::getCount() << "\n";
//
//    cout << "반지름: " << circle1.getRadius() << endl;
//    cout << "넓이: " << circle1.getArea() << endl;
//    cout << "둘레: " << circle1.getPerimeter() << endl << endl;
//
//    cout << "Circle 2" << endl;
//    Circle circle2;
//    circle2.setRadius(20.0);
//    cout << "반지름: " << circle2.getRadius() << endl;
//    cout << "넓이: " << circle2.getArea() << endl;
//    cout << "둘레: " << circle2.getPerimeter() << "\n";
//
//    cout << "Circle 4" << endl;
//    Circle circle4(circle2);
//    cout << "반지름: " << circle4.getRadius() << endl;
//
//    cout << Circle::getCount() << "\n";
//    return 0;
//}
//
//#include "circle.h"
//
//// 빌트인 라이브러리 -> < >
//// 사용자 정의 클래스 -> " "
//
//int Circle::counts = 0;
//
//Circle::Circle() : radius(1.0) {
//    counts++;
//    cout << this << " 객체 생성(기본생성자)\n";
//}
///*
//Circle::Circle() {
//    radius = 1.0;
//    cout << this << " 객체 생성(기본생성자)\n";
//}
//
//Circle::Circle(double radius) {
//    radius = radius;  // 멤버변수와 매개변수 구분 불가
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
//
//Circle::Circle(double radius) {
//    this->radius = radius;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
//*/
//Circle::Circle(double radius) : radius(radius) {
//    counts++;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
///*
//Circle::Circle(const Circle& c){
//    radius = c.radius;
//    cout << this << " 객체 생성(복사생성자)\n";
//}
//
//Circle::Circle(const Circle& circle)
//: radius(circle.radius){
//    cout << this << " 객체 생성(복사생성자)\n";
//}
//*/
//Circle::~Circle() {
//    counts--;
//    cout << this << " 객체 소멸. 내가 너를 기억하마!\n";
//}
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
//    return counts;
//}

////# pragma once
//
//
//
//// 클래스  (정의한 부분)
//
//#include <iostream>
//using namespace std;
//
//class Circle
//{
//private:
//    double radius;
//    static int counts;
//public:
//    Circle(); // default constructor
//    Circle(double radius); // parameter constructor
//    //Circle(const Circle& circle); // copy constructor
//    Circle(const Circle& circle) = delete;
//
//    ~Circle(); // destructor
//    double getRadius() const;
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//    static int getCount();
//};