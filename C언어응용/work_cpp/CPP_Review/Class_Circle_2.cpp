#include <iostream>
using namespace std;

/*
- 소멸자는 가장 나중에 생성한 객체를 먼저 소멸시킨다. (후입선출)
*/

class Circle {
private:
	double radius;
	static int counts;

public:
	Circle();						// 기본생성자
	Circle(double radius);			// 매개변수 생성자	
	Circle(const Circle& circle);	// 복사생성자
	// Circle(const Circle& circle) = delete;	
	// 복사생성자 = delete => 임의로 변경 못하도록 막음

	~Circle();	// 소멸자

	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double value);

	static int getCount();

};

int Circle::counts = 0;	// 정적 변수

//---------------------------------------------------------------------------------------
// 생성자 정의 
// (기본 생성자, 매개변수 생성자, 복사 생성자)

Circle::Circle() : radius(1.0) {
	counts++;
	cout << this << " 객체 생성(기본생성자)" << endl << endl ;
}

Circle::Circle(double radius) : radius(radius) {
	counts++; 
	cout << this << " 객체 생성(매개변수 생성자)" << endl << endl;
}

Circle::Circle(const Circle& circle) : radius(circle.radius) {
	counts++;
	cout << this << " 객체 생성(복사 생성자)" << endl << endl;
}

//---------------------------------------------------------------------------------------
// 소멸자 정의
// 객체 생성되면 자동으로 실행
// 먼저 생성된 객체는 나중에 소멸

Circle::~Circle() {
	counts--;
	cout << this << " 객체 소멸. 나를 기억하거라! REMEMBER ME!" << endl << endl;
}

//---------------------------------------------------------------------------------------
// 멤버 함수 정의

double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	const double PI = 3.14;
	return (radius * radius * PI);
}

double Circle::getPerimeter() const {
	const double PI = 3.14;
	return (2 * PI * radius);
}

void Circle::setRadius(double value) {
	radius = value;
}

int Circle::getCount() {
	cout << "객체 생성 수 : ";
	return counts;
}

//---------------------------------------------------------------------------------------
// 일반 함수 정의

void test() {
	cout << endl;

	cout << "circle4 객체 " << endl;
	Circle circle4(9.0);

	cout << "circle4 반지름 : " << circle4.getRadius() << endl << endl;
	cout << "circle4 넓이 : " << circle4.getArea() << endl;
	cout << "circle4 둘레 : " << circle4.getPerimeter() << endl;

	cout << endl;

	//---------------------------------------------------------------------------------------

	cout << "circle5 객체 " << endl;
	Circle circle5;
	circle5.setRadius(12.0);

	cout << "circle5 반지름 : " << circle5.getRadius() << endl;
	cout << "circle5 넓이 : " << circle5.getArea() << endl;
	cout << "circle5 둘레 : " << circle5.getPerimeter() << endl;

	cout << endl;

}


int main() {

	//---------------------------------------------------------------------------------------
	cout << "circle1 객체 " << endl;
	Circle circle1;
	circle1.setRadius(10.0);

	cout << "circle1 반지름 : " << circle1.getRadius() << endl;
	cout << "circle1 넓이 : " << circle1.getArea() << endl;
	cout << "circle1 둘레 : " << circle1.getPerimeter() << endl;

	cout << endl;

	cout << Circle::getCount() << endl;		// static 이라 Circle::getCount() 사용 가능

	cout << endl;

	//---------------------------------------------------------------------------------------

	test();

	//---------------------------------------------------------------------------------------
	cout << "circle2 객체 " << endl;
	Circle circle2(20.0);

	cout << "circle2 반지름 : " << circle2.getRadius() << endl;
	cout << "circle2 넓이 : " << circle2.getArea() << endl;
	cout << "circle2 둘레 : " << circle2.getPerimeter() << endl;

	cout << endl;

	cout << Circle::getCount() << endl;		// static 이라 Circle::getCount() 사용 가능

	cout << endl;

	//---------------------------------------------------------------------------------------
	cout << "circle3 객체 " << endl;
	Circle circle3(30.0);

	cout << "circle3 반지름 : " << circle3.getRadius() << endl;
	cout << "circle3 넓이 : " << circle3.getArea() << endl;
	cout << "circle3 둘레 : " << circle3.getPerimeter() << endl;

	cout << endl;

	cout << Circle::getCount() << endl;		// static 이라 Circle::getCount() 사용 가능

	cout << endl;

	//---------------------------------------------------------------------------------------
	
	cout << "circle6 객체 " << endl;
	Circle circle6(circle2);

	cout << "circle6 반지름 : " << circle6.getRadius() << endl;
	cout << "circle6 넓이 : " << circle6.getArea() << endl;
	cout << "circle6 둘레 : " << circle6.getPerimeter() << endl;

	cout << endl;

	cout << Circle::getCount() << endl;		// static 이라 Circle::getCount() 사용 가능

	cout << endl;




	return 0;
}