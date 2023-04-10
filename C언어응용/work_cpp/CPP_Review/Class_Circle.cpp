//#include <iostream>
//using namespace std;
//
//// -----------------------------------------------------------------
//// 클래스 정의
//
//class Circle {
//	private:	//  필드(데이터 멤버) 선언
//		double radius;
//
//	public :	// 메소드 (멤버 함수) 선언
//		Circle();	// 기본생성자
//		Circle(double r); // 매개변수 생성자
//
//		double getRadius() const;	// getter
//		void setRadius(double r);	// setter
//
//		double getArea() const;		// method
//		double getPerimeter() const;	// method
//		
//};
//
//
//
//// -----------------------------------------------------------------
//// 멤버 함수 정의
// 
//// <생성자>
//Circle::Circle() 
//: radius(1.0)	// 초기화 해주어야 함.
//{
//	cout << this << "객체 생성(기본 생성자)" << endl;
//}
//
//Circle::Circle(double radius)
//: radius(radius)	// this.radius = radius 역할
//{
//	cout << this << "객체 생성(매개 변수 생성자)" << endl;
//}
//
//// <Getter>
//double Circle::getRadius() const {
//	return radius;
//}
//
//// <Setter>
//void Circle::setRadius(double r) {
//	radius = r;
//}
//
//
//// <Method>
//double Circle::getArea() const{
//	return (radius * radius);
//}
//
//double Circle::getPerimeter() const {
//	const double PI = 3.14;
//	return (2 * PI * radius);
//}
//
//
//
//// -----------------------------------------------------------------
//// 애플리케이션
//
//// 메인 함수
//int main() {
//	Circle circle1;			// 객체 생성(객체 인스턴스화)
//	
//	cout << circle1.getArea() << endl;
//	cout << circle1.getPerimeter() << endl;
//
//	cout << endl;
//
//	Circle circle2(3.0);
//	cout << circle2.getArea() << endl;
//	cout << circle2.getPerimeter() << endl;
//
//
//
//}
//
//
//
//
//// ==================================================================
//
///* < 접근 제한자 >
//: 접근 권한 나타낼 때 사용
//- 데이터 멤버 -> private
//- 멤버 함수 -> public (private 가능)
//*/
//
///* < 멤버 함수 정의 >
//- 클래스 스코프 (::) 붙여야 함.
//=> 리턴자료형 클래스이름 :: 멤버 함수 이름(인수값){}
//=> 리턴자료형 클래스이름 :: 멤버 함수 이름(인수값) const {}
//*/
//
///* < const >
//- 상수처럼 동작
//- 사이드이펙트 발생하지 않음을 보증(변수 값 변경 X)
//- 앞, 뒤, 앞뒤에 올 때 상황 다름
//*/