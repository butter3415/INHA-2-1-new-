///*
//클래스 구현 부분
//헤더파일과 이름 일치해야함.
//선언한 메소드 실체 작성
//
//*/
//
//# include "file_CIrcle.h"
//
//int Circle::counts = 0;
//
////---------------------------------------------------------------------------------------
//// 생성자
//Circle::Circle() : radius(1.0) {
//	counts++;
//	cout << this << " 객체 생성(기본생성자)" << endl;
//}
//
//Circle::Circle(double radius) :radius(radius) {
//	counts++;
//	cout << this << " 객체 생성(매개변수 생성자)" << endl;
//}
//
//Circle::Circle(const Circle& c) :radius(c.radius) {
//	counts++;
//	cout << this << "객체 생성(복사 생성자)" << endl;
//}
//
////---------------------------------------------------------------------------------------
//// 소멸자
//
//Circle::~Circle() {
//	counts--;
//	cout << this << "객체 소멸, 나를 기억하라! REMEMBER ME!" << endl;
//}
//
////---------------------------------------------------------------------------------------
//// 멤버 함수
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
