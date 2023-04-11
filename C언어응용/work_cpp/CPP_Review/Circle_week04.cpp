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
//    cout << this << " 객체 생성(기본생성자)\n";
//}
//*/
///*
//Circle::Circle(double r) {
//    count++;
//    radius = r;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
//*/
//Circle::Circle() : radius(1.0) {
//    count++;
//    cout << this << " 객체 생성(기본생성자)\n";
//}
///*
//}
//Circle::Circle(double radius) {
//    radius = radius;  // 멤버변수와 매개변수의 구분이 불가능
//    count++;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
//*/
///*
//Circle::Circle(double radius) {
//    this->radius = radius;
//    count++;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
//*/
//
//Circle::Circle(double radius) : radius(radius) {
//    count++;
//    cout << this << " 객체 생성(매개변수생성자)\n";
//}
///*
//Circle::Circle(const Circle& c) {
//    count++;
//    radius = c.radius;
//    cout << this << " 객체 생성(복사생성자)\n";
//}
//*/
//Circle::Circle(const Circle& circle) : radius(circle.radius) {
//    count++;
//    cout << this << " 객체 생성(복사생성자)\n";
//}
//Circle::~Circle() {
//    count--;
//    cout << this << " 객체 소멸. 내가 너를 기억하마!\n";
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
//    // 태어났는데 죽지 않아,,,!
//    // delete 를 해야한다
//    // Circle 타입으로 변경
//
//    cout << "Circle 5" << endl;
//    Circle circle5(2.0);
//    cout << "Circle 6" << endl;
//    Circle circle6(circle5);
//    cout << "반지름: " << circle6.getRadius() << endl;
//    cout << Circle::getCount() << "\n";
//
//    delete circle7;
//    circle7 = nullptr;
//    // 죽은 사람한테 말 걸고 왔어...
//    // ★★★★★★ 메모리 delete, nullptr 중요 ★★★★★★
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
//    cout << "반지름: " << circle1.getRadius() << endl;
//    circle1.setRadius(10.0);
//
//    cout << Circle::getCount() << "\n";
//
//    Circle* copyCircle = test();
//    // test 함수 circle7을 copycircle 에 저장
//
//    cout << copyCircle->getRadius() << endl;
//
//    delete copyCircle;
//    copyCircle = nullptr;
//    // 죽이고 싶을 때 죽인다.
//    // 쓰레기를 직접 버릴 수 있어서 깔끔하지만 귀찮다.
//
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