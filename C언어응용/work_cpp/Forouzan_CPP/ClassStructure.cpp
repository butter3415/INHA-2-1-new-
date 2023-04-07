///*
//[1] 클래스
//- 타입 : 추상화 / 인스턴스 : 구체적인 실체 (타입 & 인스턴스 : 1대다 관계)
//	▷ 속성 : 인스턴스가 가지는 특징
//	▷ 행위 : 인스턴스가 스스로 할 수 있는 작업, 연산
//
//- 클래스를 통해 타입(사용자 정의 자료형) 만든다.
//-> 클래스를 기반으로 만든 인스턴스 : 객체
//
//- 객체의 속성, 행위 : 데이터 멤버, 멤버 함수로 만든다.
//	▷ 데이터 멤버(필드) : 속성을 표현하기 위한 변수
//	▷ 멤버 함수(메소드) : 어떤 행위를 할 수 있는 기능 모임 
//
//- 클래스 구조
//(프로그래머가 직접 새로운 자료형 만들기 가능) -> 클래스
//
//┌──────────────────┐
//│   클래스 정의 (속성과 행위 선언)        │ -> 데이터 멤버, 멤버 함수 선언
//├──────────────────┤ 
//│      멤버 함수 정의 (행위 정의)    │ -> 모든 멤버 함수 정의
//├──────────────────┤
//│애플리케이션 (객체 인스턴스화, 사용)│ -> 클래스 인스턴스를 만들고, 멤버 함수 사용
//└──────────────────┘
//
//- 접근 제한자(접근 권한 나타낼 때 사용)
//: 기본적으로 private 접근 제한자 붙는다. => 추출, 변경 불가
//
//┌─ 접근 제한자 ─┬─ 같은 클래스 접근 ─┬─ 서브 클래스 접근 ─┬─모든 곳 접근─┐ 
//│ private	     │	   	    가능         │       불가능         │	    불가능     │
//│ protected       │		    가능         │        가능          │	    불가능     │
//│ public	         │		    가능         │        가능          │      가능      │
//└────────-┴───────────┴───────────┴────────┘
//
//	▷ 데이터 멤버와 접근 제한자
//	: 데이터 멤버 -> 일반적으로 private 적용
//	(명시 안해도 되지만 강조하기 위해 private 작성)
//
//	▷ 멤버 함수와 접근 제한자
//	: 멤버 함수 -> 일반적으로 public 적용
//	(클래스 내부에서만 활용하는 경우 private 설정)
//
//- 멤버 함수 정의 
//: 멤버 함수에는 한정자(const)가 있다.
//: 멤버 함수 앞에 클래스 이름이 붙는다.
//: 함수의 리턴 자료형이 언제나 앞에 온다.
//
//------------------------------------------------------------------
//※ 클래스 정의 단계
//<클래스 정의> 데이터 멤버 선언 - 멤버 함수 선언 (접근제한자 주의)
//<멤버 함수 정의> 멤버 함수 정의
//<애플리케이션> 객체 인스턴스화 - 객체 연산 적용 - 멤버 선택
//------------------------------------------------------------------
//
//- 구조체
//: 모든 멤버는 기본적으로 public 적용
//(! 클래스 모든 멤버는 기본적으로 private 적용)
//
//struct Name{		│	class Name{
//	string first;	│		public :
//	char middle;    │			string first;
//	string last;    │			char middle;
//};			.	│			string last;	
//					│	} 
//
//*/
//
//# include <iostream>
//using namespace std;
//
//// < 클래스 정의 (필드, 메소드 선언) >
//class Rectangle {	// 헤더
//	private:		// 데이터 멤버 선언
//		double length;
//	public :		// 멤버 함수 선언
//		double getLength() const;
//		double getArea() const;
//		double getPerimeter() const;
//		void setLength(double value);
//
//};
//
//// < 멤버 함수 정의 (메소드 작성) >
//double Rectangle::getLength() const {
//	return length;
//
//}
//
//double Rectangle::getArea() const {
//	return (length * length);
//}
//
//double Rectangle::getPerimeter() const {
//	return (length * 4);
//}
//
//void Rectangle::setLength(double value) {
//	length = value;
//}
//
//// < 애플리케이션 객체 인스턴스화 적용 >
//int main() {
//	Rectangle rectangle1;
//
//	rectangle1.setLength(5.0);
//	
//	cout << "Rectangle 객체1 생성" << endl;
//	cout << "length : " << rectangle1.getLength() << endl;
//	cout << "Area : " << rectangle1.getArea() << endl;
//	cout << "Perimeter : " << rectangle1.getPerimeter() << endl;
//
//	cout << endl; 
//
//	Rectangle rectangle2;
//
//	rectangle2.setLength(10.0);
//	
//	cout << "Rectangle 객체2 생성" << endl;
//	cout << "length : " << rectangle2.getLength() << endl;
//	cout << "Area : " << rectangle2.getArea() << endl;
//	cout << "Perimeter : " << rectangle2.getPerimeter() << endl;
//
//
//
//
//
//
//}