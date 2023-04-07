////// 리턴타입, 오버로딩 개념 동일 (자바)
////// 클래스 안에 있냐 없냐의 차이(자바)
////// 클래스 없이도 C++ 가능
////// 문법만 다름/  이탈리어 띠아모 - 영어로 알라뷰
////// 함수 관련 내용 ! 반드시 해야 한다.!
////// 사용자 정의 클래스
////// private, public, default
////// protected 사용X
////// getter, setter
////// 메소드(멤버 함수, Behavior) / 속성(멤버 변수,필드)
////
////// Instance 객체
////// attribute 필드 멤버 변수
////// behavior 메소드 멤버펑션, 멤버함수
////
////// 클래스 정의(설계도) 인라인 멤버
////// 멤버함수(메소드 정의) - 구현코드
////// 애플리케이션(메인 클래스 등등)
//////
////// 
////// 자바에 비해 문법 2-3배 늘어남
////
////# include <iostream>
////using namespace std;
////
////int main() {
////
////
////
////}
////
////class Circle {	// 클래스 정의
////	private:	// 접근 제한
////		double radius;
////	public:	// 모두에게 오픈 
////		// 멤버함수 4개
////
////		// ★ const : 상수처럼 동작 | 
////		//		    : 보증(Radius 값 바뀌지 않는다는 보증) | 
////		//		    : 사이드이펙트 발생 X 보증(변수 값 바뀌는 것)
////			
////		double getRadius() const;		// 반지름을 가져온다.
////		double getArea() const;			// 면적을 가져온다.
////		double getPerimeter() const;	// 둘레를 가져온다.
////		void setRadius(double value);	// 여기선 Radius 값 변경 가능
////
////};
////
////double Circle::getRadius() const	// 매개변수 X 
////{
////
////	return radius;
////}
////
////double Circle::getArea() const
////{
////	const double PI = 3.14; // 지역 상수
////	return (PI * radius * radius);
////}
////
////double Circle::getPerimeter() const
////{
////	const double PI = 3.14;
////}
////
////// final - 자식 클래스에서 오버라이드 X
//////		 - 상속 클래스 : 상속 X
//////		 - 
//
//
//
//
//
//// 자바에서의 this -> C++의 포인터
///*************************************************************
// * 객체 지향 프로그래밍에서 클래스를 사용하는 프로그램       *
// *************************************************************/
//#include <iostream>
//using namespace std;
//
///************************************************************
// * 클래스 정의                                              *
// * 데이터 멤버와 멤버 함수를 선언                           *
// ************************************************************/
//class Circle
//{
//private:
//    double radius;  
//    // mutable : 에러 되도록 만든다. 반지름 5로 바꾸기 가능. 남발하면 안됨
//    // mutable 사용시 const로 선언된 멤버 함수 안에서 필드의 값을 수정할 수 있다.
//public:
//    Circle();
//    Circle(double r);   // 매개변수 생성자를 만들면 기본 생성자도 만들어야 한다.
//
//    double getRadius() const;
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//};
//
//Circle::Circle() {  // 기본 생성자
//    cout << this << "객체가 생성(기본생성자)\n" << endl; // 두번 실행-> 객체 2개
//}
//
//Circle::Circle(double r) {
//    radius = r;
//    cout << radius << "객체가 생성(매개 변수 생성자)\n" << endl; // 두번 실행-> 객체 2개
//}
//
//// this : 실행 시점의 객체가 어디에 할당되었는지 확인 가능(16진수로 표현)
//
//
///**************************************************************
// * 멤버 함수 정의 부분                                        *
// * 멤버 함수들은 클래스 선언 부분에서 선언                    *
// **************************************************************/
// // getRadius 멤버 함수의 정의
//double Circle::getRadius() const
//{
//    int a = 9;  
//
//    // radius = 5.0;   // const member function
//    // error C3490: 'radius'은(는) const 개체를 통해 액세스되고 있으므로 수정할 수 없습니다.
//    // mutable 을 통해 강제 시킴
//
//    return radius;
//}
//
//// getArea 멤버 함수의 정의
//double Circle::getArea() const
//{
//    const double PI = 3.14;
//    return (PI * radius * radius);
//}
//
//// getPerimeter 멤버 함수의 정의
//double Circle::getPerimeter() const
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//
//// setRadius 멤버 함수의 정의
//void Circle::setRadius(double value)
//{
//    radius = value;
//}
//
///********************************************************
// * 애플리케이션 부분                                    *
// * 클래스를 인스턴스화해서 객체를 만들고 활용           *
//*********************************************************/
//
//int main()
//{
//    Circle circle3(5.0);
//
//    // 첫 번째 circle 객체를 만들고 멤버 함수 호출
//    cout << "Circle 1" << endl;
//    Circle circle1;
//    circle1.setRadius(10.0);
//    cout << "반지름: " << circle1.getRadius() << endl;
//    cout << "넓이: " << circle1.getArea() << endl;
//    cout << "둘레: " << circle1.getPerimeter() << endl << endl;
//    // 두 번째 circle 객체를 만들고 멤버 함수 호출  
//    cout << "Circle 2" << endl;
//    Circle circle2;
//    circle2.setRadius(20.0);
//    cout << "반지름: " << circle2.getRadius() << endl;
//    cout << "넓이: " << circle2.getArea() << endl;
//    cout << "둘레: " << circle2.getPerimeter();
//    return 0;
//}