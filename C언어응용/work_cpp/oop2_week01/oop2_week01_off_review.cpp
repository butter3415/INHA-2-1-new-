//#include <iostream>
//using namespace std;
//
//
//// 클래스 정의  (데이터 멤버와 멤버 함수 선언)
//class Circle {
//	private:
//		double radius;
//		//double mutable radius;
//		// mutable -> set으로밖에 변경 불가능한 private 멤버 변수를 변경하도록 강제함
//	public:
//		Circle();
//		Circle(double r);	// 매개변수 생성자를 만들었기 때문에 작성
//
//		double getRadius() const;
//		double getArea() const;
//		double getPerimeter() const;
//		void setRadius(double value);
//};
//
//Circle::Circle() {	// 기본 생성자
//	cout << this << "객체 생성(기본생성자)" << endl << endl;
//}
//
//Circle::Circle(double r) {
//	radius = r;
//	cout << "반지름이 " << radius << "인 객체 생성(매개 변수 생성자)" << endl << endl;
//}
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
//
//// 애플리케이션 부분 (클래스를 인스턴스화해서 객체를 만들고 활용)
//int main() {
//
//	// 첫번째 circle 객체를 만들고 멤버 함수 호출
//	cout << "Circle1 객체 생성" << endl;
//	Circle circle1;
//	circle1.setRadius(10.0);
//	cout << "Circle1 반지름 : " << circle1.getRadius() << endl;
//	cout << "Circle1 넓이 : " << circle1.getArea() << endl;
//	cout << "Circle1 둘레 : " << circle1.getPerimeter() << endl;
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
//	// 세번째 circle 객체를 만들고 멤버 함수 호출(매개 변수 생성자 사용)
//	cout << "Circle3 객체 생성" << endl;
//	Circle circle3(25.0);
//	cout << "Circle3 반지름 : " << circle3.getRadius() << endl;
//	cout << "Circle3 넓이 : " << circle3.getArea() << endl;
//	cout << "Circle3 둘레 : " << circle3.getPerimeter() << endl;
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