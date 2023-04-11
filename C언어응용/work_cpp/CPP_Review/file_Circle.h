/*
클래스 선언 부분
(필드 선언, 메소드 선언 부분)

* #include <iostream>
* using namespace std;

 붙여야함
*/

#pragma once

#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
	static int counts;
public:
	Circle();
	Circle(double radius);
	Circle(const Circle& circle);

	~Circle();

	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double radius);

	static int getCount();

};