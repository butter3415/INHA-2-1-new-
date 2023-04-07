/*
[2] 객체의 생성과 소멸
- 생성자 : 객체는 생성자라고 부르는 특별한 멤버 함수가 호출될 때 생성
- 소멸자 : 소멸자라고 부르는 특별한 멤버 함수가 호출되어 소멸자 내부에서 객체를 정리

┌ 생성 -> 초기화 -> 연산 -> 정리 -> 재활용 ┐
└     생성자     │      │     소멸자     ┘

- 생성자 : 객체 데이터 멤버 초기화
         : 리턴값 X
         : 이름이 클래스의 이름과 동일
         : 기본 생성자 / 매개변수 생성자 / 복사 생성자 => 3가지로 구분
		 : 기본 생성자는 별도의 괄호 없어도 호출됨.

		 ※ 복사 생성자 선언 후 delete 키워드 할당 -> 복사 생성자를 만들지 않음.

- 소멸자 : 이름은 클래스 이름 앞에 ~ 붙은 형태
		 : 리턴값 X
		 : 자동 호출(프로그램 종료되는 시점)
		 : 오버로드 불가
		 : ★ 가장 최근 생성한 객체부터 소멸
		   (ex. 객체1 - 객체5 순으로 생성 -> 객체5 - 객체1 순으로 소멸) 

*/

#include <iostream>
using namespace std;

class Rectangle {	
	private:		
		double length;
	public:		
		Rectangle();									// 기본 생성자
		Rectangle(double legnth);						// 매개변수 생성자
		 Rectangle(const Rectangle& rectangle);		// 복사 생성자
		//Rectangle(const Rectangle& rectangle) = delete;	// ※ 복사 생성자 만들지 않음

		double getLength() const;
		double getArea() const;
		double getPerimeter() const;
		void setLength(double value);

		~Rectangle();							// 소멸자

};

// ================================================================
// <생성자 정의>

// ▶ 기본 생성자 
// 
//Rectangle::Rectangle() {
//	length = 1.0;
//	cout << this << " 객체 생성(기본생성자)" << endl << endl;
//}

// ▷ 기본생성자 + 초기화 리스트
Rectangle::Rectangle() 
: length(1.0) {
	cout << this << " 객체 생성(기본생성자)" << endl << endl;
}

// ----------------------------------------------------------------
// ▶ 매개변수 생성자
//Rectangle::Rectangle(double length) {
//	// length = length;
//	this->length = length;
//	cout << this << " 객체 생성(매개변수생성자)" << endl << endl;
//}

// ▷ 매개변수 생성자 + 초기화 리스트
Rectangle::Rectangle(double length) 
: length(length) {
	cout << this << " 객체 생성(매개변수생성자)" << endl << endl;
}

// ----------------------------------------------------------------
// ▶ 복사 생성자
//Rectangle::Rectangle(const Rectangle& rectangle) {
//	this->length = rectangle.length;
//	cout << this << " 객체 생성(복사생성자)" << endl << endl;
//}

// ▷ 복사변수 생성자 + 초기화 리스트
Rectangle::Rectangle(const Rectangle& rectangle)
:length(rectangle.length) {
	cout << this << " 객체 생성(복사생성자)" << endl << endl;
}


// ================================================================

// < 멤버 함수 정의 (메소드 작성) >
double Rectangle::getLength() const {
	return length;

}

double Rectangle::getArea() const {
	return (length * length);
}

double Rectangle::getPerimeter() const {
	return (length * 4);
}

void Rectangle::setLength(double value) {
	length = value;
}

// ================================================================
// <소멸자 정의>
Rectangle::~Rectangle() {
	cout << this << "객체 소멸. 내가 너를 기억하마!" << endl << endl;
}


// ================================================================

// < 애플리케이션 객체 인스턴스화 적용 >
int main() {
	Rectangle rectangle1;

	rectangle1.setLength(5.0);

	cout << "Rectangle 객체1 생성" << endl;
	cout << "length : " << rectangle1.getLength() << endl;
	cout << "Area : " << rectangle1.getArea() << endl;
	cout << "Perimeter : " << rectangle1.getPerimeter() << endl;

	cout << endl;

	// ----------------------------------------------------------------

	Rectangle rectangle2;

	rectangle2.setLength(10.0);

	cout << "Rectangle 객체2 생성" << endl;
	cout << "length : " << rectangle2.getLength() << endl;
	cout << "Area : " << rectangle2.getArea() << endl;
	cout << "Perimeter : " << rectangle2.getPerimeter() << endl;

	cout << endl;

	// ----------------------------------------------------------------

	Rectangle rectangle3(15.0);

	cout << "Rectangle 객체3 생성" << endl;
	cout << "length : " << rectangle3.getLength() << endl;
	cout << "Area : " << rectangle3.getArea() << endl;
	cout << "Perimeter : " << rectangle3.getPerimeter() << endl;

	cout << endl;

	// ----------------------------------------------------------------

	Rectangle rectangle4(rectangle1);

	cout << "Rectangle 객체4 생성" << endl;
	cout << "length : " << rectangle4.getLength() << endl;
	cout << "Area : " << rectangle4.getArea() << endl;
	cout << "Perimeter : " << rectangle4.getPerimeter() << endl;

	cout << endl;





}