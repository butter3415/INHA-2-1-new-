///*
//Ŭ���� ���� �κ�
//������ϰ� �̸� ��ġ�ؾ���.
//������ �޼ҵ� ��ü �ۼ�
//
//*/
//
//# include "file_CIrcle.h"
//
//int Circle::counts = 0;
//
////---------------------------------------------------------------------------------------
//// ������
//Circle::Circle() : radius(1.0) {
//	counts++;
//	cout << this << " ��ü ����(�⺻������)" << endl;
//}
//
//Circle::Circle(double radius) :radius(radius) {
//	counts++;
//	cout << this << " ��ü ����(�Ű����� ������)" << endl;
//}
//
//Circle::Circle(const Circle& c) :radius(c.radius) {
//	counts++;
//	cout << this << "��ü ����(���� ������)" << endl;
//}
//
////---------------------------------------------------------------------------------------
//// �Ҹ���
//
//Circle::~Circle() {
//	counts--;
//	cout << this << "��ü �Ҹ�, ���� ����϶�! REMEMBER ME!" << endl;
//}
//
////---------------------------------------------------------------------------------------
//// ��� �Լ�
//
//double Circle::getRadius() const {
//	return radius;
//}
//
//double Circle::getArea() const {
//	const double PI = 3.14;
//	return (PI * radius * radius);
//}
//
//double Circle::getPerimeter() const {
//	const double PI = 3.14;
//	return (2 * PI * radius);
//}
//
//void Circle::setRadius(double r) {
//	radius = r;
//
//}
