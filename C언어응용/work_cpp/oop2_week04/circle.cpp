#include "circle.h"

// ��Ʈ�� ���̺귯�� -> < >
// ����� ���� Ŭ���� -> " "

int Circle::counts = 0;

Circle::Circle() : radius(1.0) {
    counts++;
    cout << this << " ��ü ����(�⺻������)\n";
}
/*
Circle::Circle() {
    radius = 1.0;
    cout << this << " ��ü ����(�⺻������)\n";
}

Circle::Circle(double radius) {
    radius = radius;  // ��������� �Ű����� ���� �Ұ�
    cout << this << " ��ü ����(�Ű�����������)\n";
}

Circle::Circle(double radius) {
    this->radius = radius;
    cout << this << " ��ü ����(�Ű�����������)\n";
}
*/
Circle::Circle(double radius) : radius(radius) {
    counts++;
    cout << this << " ��ü ����(�Ű�����������)\n";
}
/*
Circle::Circle(const Circle& c){
    radius = c.radius;
    cout << this << " ��ü ����(���������)\n";
}

Circle::Circle(const Circle& circle)
: radius(circle.radius){
    cout << this << " ��ü ����(���������)\n";
}
*/
Circle::~Circle() {
    counts--;
    cout << this << " ��ü �Ҹ�. ���� �ʸ� ����ϸ�!\n";
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