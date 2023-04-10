//#include <iostream>
//using namespace std;
//
//
//// 클래스 정의  (데이터 멤버와 멤버 함수 선언)
//class Circle {
//private:
//	double radius;
//	//double mutable radius;
//	// mutable -> set으로밖에 변경 불가능한 private 멤버 변수를 변경하도록 강제함
//
//	static int counts;	// 정적 변수 선언
//public:
//	Circle();	// default Sonstructor
//	Circle(double radius);	// parameter constructor 매개변수 생성자를 만들었기 때문에 작성
//	// Circle(const Circle& circle);	// Copy Constructor		// Circle 객체가 와야한다.
//	Circle(const Circle& circle) = delete;	// Copy Constructor // 임의로 변경하지 않도록 동작시킨다.		
//
//	~Circle();	// destructor
//
//	double getRadius() const;
//	double getArea() const;
//	double getPerimeter() const;
//	void setRadius(double value);
//
//	static int getCount();
//};
//
//int Circle::counts = 0;	// 정적 변수 
//
////Circle::Circle() {	// 기본 생성자
////	radius = 1.0;
////	cout << this << "객체 생성(기본생성자)" << endl << endl;
////}
//
//Circle::Circle() : radius(1.0) {	// 기본 생성자 _ 초기화 리스트
//	counts++;
//	cout << this << "객체 생성(기본생성자)" << endl << endl;
//}
//
//// -------------------------------------------------------------------------------------------------------------------
//
////Circle::Circle(double r) {
////	radius = r;
////	cout << "반지름이 " << radius << "인 객체 생성(매개 변수 생성자)" << endl << endl;
////}
//
////Circle::Circle(double radius) {
////  radius = radius; => 멤버 변수와 매개 변수 구분 불가
////	this->radius = radius;		// 매개변수를 가져올때는 이름 정확히! 하면 멤버 변수와 충돌 => 'this->' 추가해주기/
////	cout << "반지름이 " << radius << "인 객체 생성(매개 변수 생성자)" << endl << endl;
////}
//
//Circle::Circle(double radius) : radius(radius) {	// 초기화 변수 추가 // ': 멤버변수(매개변수)'
//	counts++;
//	cout << "반지름이 " << radius << "인 객체 생성(매개 변수 생성자)" << endl << endl;
//}
//
//
//// -------------------------------------------------------------------------------------------------------------------
//
////Circle::Circle(const Circle& c) {
////	//this->radius = c.radius;
////	radius = c.radius;
////	cout << this << " 객체 생성자(복사생성자)" << endl;
////}
//
//Circle::Circle(const Circle& circle)
//	: radius(circle.radius) {
//	cout << this << " 객체 생성자(복사생성자)" << endl;
//}
//
//
//// -------------------------------------------------------------------------------------------------------------------
//
//Circle::~Circle() {
//	counts--;
//	cout << this << " 객체 소멸. 내가 너를 기억하마!" << endl;
//}
//
//// -------------------------------------------------------------------------------------------------------------------
//
//
//// 멤버 함수 정의 (멤버 함수들은 클래스 선언 부분에서 선언)
//
//// getRadius 멤버 함수 정의
//double Circle::getRadius() const {
//	// radius = 5.0;	// const member function
//	// mutable 사용 시 강제로 변수 변경 가능
//	return radius;
//}
//
//// getArea 멤버 함수 정의
//double Circle::getArea() const {
//	const double PI = 3.14;
//	return (PI * radius * radius);
//}
//
//// getPerimeter 멤버 함수 정의
//double Circle::getPerimeter() const {
//	const double PI = 3.14;
//	return (2 * PI * radius);
//}
//
//// setRadius 멤버 함수 정의
//void Circle::setRadius(double r) {
//	radius = r;
//}
//
//int Circle::getCount() {
//	return counts;
//}
//
//
//// 일반 함수
//void test() {
//	cout << endl;
//	cout << "Circle4 객체 생성";
//	Circle circle4(9.0);
//	cout << "반지름 : " << circle4.getRadius() << endl;
//
//	cout << "Circle5 객체 생성";
//	Circle circle5(10.5);
//	cout << "반지름 : " << circle5.getRadius() << endl;
//}
//
//
//// 애플리케이션 부분 (클래스를 인스턴스화해서 객체를 만들고 활용)
//int main() {
//
//	//long test;
//	//cout << sizeof(test) << endl;	// 4 (윈도우에선 4바이트, 리눅스, 맥에선 8바이트)
//
//	// 첫번째 circle 객체를 만들고 멤버 함수 호출
//	cout << "Circle1 객체 생성" << endl;
//	Circle circle1;
//	circle1.setRadius(10.0);
//	cout << "Circle1 반지름 : " << circle1.getRadius() << endl;
//	cout << "Circle1 넓이 : " << circle1.getArea() << endl;
//	cout << "Circle1 둘레 : " << circle1.getPerimeter() << endl;
//
//	cout << Circle::getCount() << endl;
//
//	test();
//
//	cout << endl;
//
//	// 두번째 circle 객체를 만들고 멤버 함수 호출
//	cout << "Circle2 객체 생성" << endl;
//	Circle circle2;
//	circle2.setRadius(20.0);
//	cout << "Circle2 반지름 : " << circle2.getRadius() << endl;
//	cout << "Circle2 넓이 : " << circle2.getArea() << endl;
//	cout << "Circle2 둘레 : " << circle2.getPerimeter() << endl;
//
//	cout << endl;
//
//
//
//	// 세번째 circle 객체를 만들고 멤버 함수 호출(매개 변수 생성자 사용)
//	cout << "Circle3 객체 생성" << endl;
//	Circle circle3(25.0);
//	cout << "Circle3 반지름 : " << circle3.getRadius() << endl;
//	cout << "Circle3 넓이 : " << circle3.getArea() << endl;
//	cout << "Circle3 둘레 : " << circle3.getPerimeter() << endl;
//
//	cout << endl;
//
//	cout << "Cricle6 객체 생성" << endl;
//	// Circle circle6(circle2);
//	// cout << "Circle6 반지름 : " << circle6.getRadius() << endl;
//	// circle 타입으로 가져왔다. const로 작성되어 있기 때문에 변경 불가
//
//	cout << endl;
//
//}
//
///*
//*** const ***
//: 상수처럼 동작
//: 사이드 이펙트 발생하지 않음을 보증 (변수 값이 바뀌지 않는다.)
//*/
//
///*
//객체 지향 프로그래밍
//- 클래스 정의 (속성과 행위 선언)
//- 멤버 함수 정의 (행위 정의)
//- 애플리케이션 (객체를 인스턴스화하고 사용)
//*/
//
///*
//접근 제한자 : 접근 권한을 나타낼 때 사용
//=> private, public, protected
//=> 기본적으로 private 접근 제한자 붙는다.
//
//□ 데이터 멤버와 접근 제한자
//: 데이터 멤버 -> private 적용
//: 강조하기 위해 private 붙여서 사용
//
//□ 멤버 함수와 접근 제한자
//: 멤버 함수 -> public 적용
//: 클래스 내부에서만 활용할 경우 -> private
//*/
//
///*
//*** 멤버 함수(메소드)의 정의 ***
//1) 멤버 함수에는 한정자(const)가 있다.
//2) 멤버 함수 앞에 클래스 이름이 붙는다.
//클래스::이름
//
//＃ 함수의 리턴 자료형이 언제나 앞에 위치함
//*/
//
///*
//*** 인라인 함수 ***
//클래스 정의 내부에 함수를 정의 -> 인라인 함수
//*/
//
///*
//*** 애플리케이션 ***
//- 객체 인스턴스화(객체 만들기) Ex. Circle circle1;
//*/
//
//
//// https://en.cppreference.com/w/cpp/language/types
//
//// 소멸자 오버로딩 불가능
//// 소멸자 : ~Circle();
//// - 결국 죽으니까 오버로딩 불가능
//// - 가장 먼저 만들어진 객체는 마지막에 소멸된다. -> 만들어진거에 역순으로 소멸된다.