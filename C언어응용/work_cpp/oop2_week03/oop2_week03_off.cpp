#include <iostream>
using namespace std;


// Ŭ���� ����  (������ ����� ��� �Լ� ����)
class Circle {
private:
	double radius;
	//double mutable radius;
	// mutable -> set���ιۿ� ���� �Ұ����� private ��� ������ �����ϵ��� ������

	static int counts;	// ���� ���� ����
public:
	Circle();	// default Sonstructor
	Circle(double radius);	// parameter constructor �Ű����� �����ڸ� ������� ������ �ۼ�
	// Circle(const Circle& circle);	// Copy Constructor		// Circle ��ü�� �;��Ѵ�.
	Circle(const Circle& circle) = delete;	// Copy Constructor // ���Ƿ� �������� �ʵ��� ���۽�Ų��.		

	~Circle();	// destructor

	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double value);

	static int getCount();
};

int Circle::counts = 0;	// ���� ���� 

//Circle::Circle() {	// �⺻ ������
//	radius = 1.0;
//	cout << this << "��ü ����(�⺻������)" << endl << endl;
//}

Circle::Circle() : radius(1.0) {	// �⺻ ������ _ �ʱ�ȭ ����Ʈ
	counts++;
	cout << this << "��ü ����(�⺻������)" << endl << endl;
}

// -------------------------------------------------------------------------------------------------------------------

//Circle::Circle(double r) {
//	radius = r;
//	cout << "�������� " << radius << "�� ��ü ����(�Ű� ���� ������)" << endl << endl;
//}

//Circle::Circle(double radius) {
//  radius = radius; => ��� ������ �Ű� ���� ���� �Ұ�
//	this->radius = radius;		// �Ű������� �����ö��� �̸� ��Ȯ��! �ϸ� ��� ������ �浹 => 'this->' �߰����ֱ�/
//	cout << "�������� " << radius << "�� ��ü ����(�Ű� ���� ������)" << endl << endl;
//}

Circle::Circle(double radius) : radius(radius) {	// �ʱ�ȭ ���� �߰� // ': �������(�Ű�����)'
	counts++;
	cout << "�������� " << radius << "�� ��ü ����(�Ű� ���� ������)" << endl << endl;
}


// -------------------------------------------------------------------------------------------------------------------

//Circle::Circle(const Circle& c) {
//	//this->radius = c.radius;
//	radius = c.radius;
//	cout << this << " ��ü ������(���������)" << endl;
//}

Circle::Circle(const Circle& circle)
	: radius(circle.radius) {
	cout << this << " ��ü ������(���������)" << endl;
}


// -------------------------------------------------------------------------------------------------------------------

Circle::~Circle() {
	counts--;
	cout << this << " ��ü �Ҹ�. ���� �ʸ� ����ϸ�!" << endl;
}

// -------------------------------------------------------------------------------------------------------------------


// ��� �Լ� ���� (��� �Լ����� Ŭ���� ���� �κп��� ����)

// getRadius ��� �Լ� ����
double Circle::getRadius() const {
	// radius = 5.0;	// const member function
	// mutable ��� �� ������ ���� ���� ����
	return radius;
}

// getArea ��� �Լ� ����
double Circle::getArea() const {
	const double PI = 3.14;
	return (PI * radius * radius);
}

// getPerimeter ��� �Լ� ����
double Circle::getPerimeter() const {
	const double PI = 3.14;
	return (2 * PI * radius);
}

// setRadius ��� �Լ� ����
void Circle::setRadius(double r) {
	radius = r;
}

int Circle::getCount() {
	return counts;
}


// �Ϲ� �Լ�
void test() {
	cout << endl;
	cout << "Circle4 ��ü ����";
	Circle circle4(9.0);
	cout << "������ : " << circle4.getRadius() << endl;

	cout << "Circle5 ��ü ����";
	Circle circle5(10.5);
	cout << "������ : " << circle5.getRadius() << endl;
}


// ���ø����̼� �κ� (Ŭ������ �ν��Ͻ�ȭ�ؼ� ��ü�� ����� Ȱ��)
int main() {

	//long test;
	//cout << sizeof(test) << endl;	// 4 (�����쿡�� 4����Ʈ, ������, �ƿ��� 8����Ʈ)

	// ù��° circle ��ü�� ����� ��� �Լ� ȣ��
	cout << "Circle1 ��ü ����" << endl;
	Circle circle1;
	circle1.setRadius(10.0);
	cout << "Circle1 ������ : " << circle1.getRadius() << endl;
	cout << "Circle1 ���� : " << circle1.getArea() << endl;
	cout << "Circle1 �ѷ� : " << circle1.getPerimeter() << endl;

	cout << Circle::getCount() << endl;

	test();

	cout << endl;

	// �ι�° circle ��ü�� ����� ��� �Լ� ȣ��
	cout << "Circle2 ��ü ����" << endl;
	Circle circle2;
	circle2.setRadius(20.0);
	cout << "Circle2 ������ : " << circle2.getRadius() << endl;
	cout << "Circle2 ���� : " << circle2.getArea() << endl;
	cout << "Circle2 �ѷ� : " << circle2.getPerimeter() << endl;

	cout << endl;



	// ����° circle ��ü�� ����� ��� �Լ� ȣ��(�Ű� ���� ������ ���)
	cout << "Circle3 ��ü ����" << endl;
	Circle circle3(25.0);
	cout << "Circle3 ������ : " << circle3.getRadius() << endl;
	cout << "Circle3 ���� : " << circle3.getArea() << endl;
	cout << "Circle3 �ѷ� : " << circle3.getPerimeter() << endl;

	cout << endl;

	cout << "Cricle6 ��ü ����" << endl;
	// Circle circle6(circle2);
	// cout << "Circle6 ������ : " << circle6.getRadius() << endl;
	// circle Ÿ������ �����Դ�. const�� �ۼ��Ǿ� �ֱ� ������ ���� �Ұ�

	cout << endl;

}

/*
*** const ***
: ���ó�� ����
: ���̵� ����Ʈ �߻����� ������ ���� (���� ���� �ٲ��� �ʴ´�.)
*/

/*
��ü ���� ���α׷���
- Ŭ���� ���� (�Ӽ��� ���� ����)
- ��� �Լ� ���� (���� ����)
- ���ø����̼� (��ü�� �ν��Ͻ�ȭ�ϰ� ���)
*/

/*
���� ������ : ���� ������ ��Ÿ�� �� ���
=> private, public, protected
=> �⺻������ private ���� ������ �ٴ´�.

�� ������ ����� ���� ������
: ������ ��� -> private ����
: �����ϱ� ���� private �ٿ��� ���

�� ��� �Լ��� ���� ������
: ��� �Լ� -> public ����
: Ŭ���� ���ο����� Ȱ���� ��� -> private
*/

/*
*** ��� �Լ�(�޼ҵ�)�� ���� ***
1) ��� �Լ����� ������(const)�� �ִ�.
2) ��� �Լ� �տ� Ŭ���� �̸��� �ٴ´�.
Ŭ����::�̸�

�� �Լ��� ���� �ڷ����� ������ �տ� ��ġ��
*/

/*
*** �ζ��� �Լ� ***
Ŭ���� ���� ���ο� �Լ��� ���� -> �ζ��� �Լ�
*/

/*
*** ���ø����̼� ***
- ��ü �ν��Ͻ�ȭ(��ü �����) Ex. Circle circle1;
*/


// https://en.cppreference.com/w/cpp/language/types

// �Ҹ��� �����ε� �Ұ���
// �Ҹ��� : ~Circle();
// - �ᱹ �����ϱ� �����ε� �Ұ���
// - ���� ���� ������� ��ü�� �������� �Ҹ�ȴ�. -> ��������ſ� �������� �Ҹ�ȴ�.