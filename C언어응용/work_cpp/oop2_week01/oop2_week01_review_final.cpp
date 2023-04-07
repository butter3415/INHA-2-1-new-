/*
* 주석(comments) -> ctrl + K + C / 주석 해제 -> ctrl + K + U
<iostream> : input output stream 약자(출력 객체)
using namespace std; : std standards for Standard namespace
cout : cout stands for Character OUTput stream
cin : cin stands for Character INput stream object

*/

//#include <iostream>
//using namespace std;
//
//int main() {
//	int number;
//	bool isPrime = true;
//
//
//	cout << "수 : ";
//	cin >> number;
//	
//	if (number < 1) {
//		isPrime = false;
//	}
//	else {
//		for (int i = 2; i < number; i++) {
//			if (number % i == 0) {
//				isPrime = false;
//				break;
//			}
//		}
//	}
//
//	if (isPrime) {
//		cout << number << " is PrimeNumber!" << endl;
//	}
//	else {
//		cout << number << " is Not PrimeNumber!" << endl;
//	}
//
//}

// =========================================================================

/*
< 클래스 작성 >

[1] 클래스 정의(설계도) - 인라인 멤버
- 인스턴스 데이터 멤버(속성) -> private
- 인스턴스 멤버 함수(메소드) -> public
	* 인스턴스 멤버 함수 선택자 : . or ->
	* ex. this->radius & (*this).radius 동일
	
[2] 멤버함수(메소드 정의) - 구현코드 작성
[3] 애플리케이션(메인 클래스 구현 등)

*/

/*
< const >
- 상수처럼 동작
- 사이드이펙트 발생하지 않음을 보증 (변수 값 변경 X)
*/

#include <iostream>
using namespace std;


class Rectangle {
	private : 
		double length;
	public :
		Rectangle();
		Rectangle(double length);

		double getLength() const;
		double getArea() const;
		double getPerimeter() const;
		void setLength(double length);

};

Rectangle::Rectangle() {
	cout << this << " 객체 생성(기본생성자)" << endl;
}

Rectangle::Rectangle(double length) {
	this->length = length;
	cout << this << "객체 생성(매개변수 생성자)" << endl;
}

double Rectangle::getLength() const {
	return length;
}

double Rectangle::getArea() const {
	return (length * length);
}

double Rectangle::getPerimeter() const {
	return (length * 4);
}

void Rectangle::setLength(double length) {
	this->length = length;
}

int main() {
	Rectangle rectangle1;
	rectangle1.setLength(5.0);

	cout << "rectangle1 변의 길이 : " << rectangle1.getLength() << endl;
	cout << "rectangle1 넓이 : " << rectangle1.getArea() << endl;
	cout << "rectangle1 둘레 : " << rectangle1.getPerimeter() << endl;

	cout << endl;

	Rectangle rectangle2(10.0);

	cout << "rectangle2 변의 길이 : " << rectangle2.getLength() << endl;
	cout << "rectangle2 넓이 : " << rectangle2.getArea() << endl;
	cout << "rectangle2 둘레 : " << rectangle2.getPerimeter() << endl;




}