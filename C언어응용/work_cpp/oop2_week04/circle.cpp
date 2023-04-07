#include "circle.h"

// 빌트인 라이브러리 -> < >
// 사용자 정의 클래스 -> " "

int Circle::counts = 0;

Circle::Circle() : radius(1.0) {
    counts++;
    cout << this << " 객체 생성(기본생성자)\n";
}
/*
Circle::Circle() {
    radius = 1.0;
    cout << this << " 객체 생성(기본생성자)\n";
}

Circle::Circle(double radius) {
    radius = radius;  // 멤버변수와 매개변수 구분 불가
    cout << this << " 객체 생성(매개변수생성자)\n";
}

Circle::Circle(double radius) {
    this->radius = radius;
    cout << this << " 객체 생성(매개변수생성자)\n";
}
*/
Circle::Circle(double radius) : radius(radius) {
    counts++;
    cout << this << " 객체 생성(매개변수생성자)\n";
}
/*
Circle::Circle(const Circle& c){
    radius = c.radius;
    cout << this << " 객체 생성(복사생성자)\n";
}

Circle::Circle(const Circle& circle)
: radius(circle.radius){
    cout << this << " 객체 생성(복사생성자)\n";
}
*/
Circle::~Circle() {
    counts--;
    cout << this << " 객체 소멸. 내가 너를 기억하마!\n";
}
double Circle::getRadius() const
{
    int a = 9;
    //radius = 2.0;
    return radius;
}
double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}
void Circle::setRadius(double value)
{
    radius = value;
}
int Circle::getCount() {
    return counts;
}