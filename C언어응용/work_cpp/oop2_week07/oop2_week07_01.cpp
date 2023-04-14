/* < Class, Objects >
1. class 키워드 사용
2. public과 같은 접근 제어와 관련된 키워드 사용
3. 멤버 함수(메서드)를 정의할 수 있다.

생성자 : 객체를 생성할 때 자동적으로 호출되는 함수
	   : 객체 잘 동작되도록 준비.
	   : 한 개의 객체는 한 번씩만 생성
	   : 기본적으로 태어날 때 갖고 태어나는 것들 정의 (ex. 사람 태어나면 나이가 주어지듯)
소멸자 : 객체가 소멸할 때 자동적으로 호출되는 함수 (main 함수 끝날 때 실행)
	   : 정리해야할 코드 넣어서 호출
	   : 죽었을 때 처리해야할 일들 실행(ex. 사람 죽으면 주민등록번호 말소시키기)
*/

#include <iostream>
using namespace std;

class Point {
public :
	int x, y;

	/* <생성자>
	1. 생성자는 리턴 타입이 없다.
	2/ 생성자는 클래스 이름과 같다.
	*/

	Point();
	Point(int _x, int _y);

	// 복사 생성자 
	// : 자신과 동일한 타입의 객체에 대한 레퍼러스를 인자로 받는 생성자
	// : 복사생성자 1회 실행
	// Point(Point& pt);
	Point(const Point& pt);

	void Print();


};

Point::Point()
	: x(0), y(0){
	// x = 0; 
	// y = 0;
}

Point::Point(int _x, int _y)	// 메소드 오버로딩
	: x(_x), y(_y) {
	// x = _x; 
	// y = _y;
}

Point::Point(const Point& pt) 
	: x(pt.x), y(0){
	cout << "Copy constructor!" << endl;
	//x = pt.x;
	//y = pt.y;
}

/* < 클래스 정의 >
1. 클래스 정의 안에는 메서드의 프로토타입만 남겨둔다.
2. 클래스 정의 밖에서는 범위 지정 연산자를 사용해서 함수를 정의
*/

void Point::Print() {
	cout << x << ", " << y << endl;
}

int main() {
	Point p1, p2, p4, p5(100, 150);
	p1.x = 10;
	p1.y = 10;
	p2.x = 20;
	p2.y = 20;

	Point p6(p1);	// Point p6 = p1; 과 동일

	p1.Print();
	p2.Print();

	Point p3 = p2;	// 초기화
	p3.Print();
	p3 = p1;		// 대입
	p3.Print();

	p4.Print();
	p5.Print();

}