//#include <iostream>
//using namespace std;
//
///*
//- �Ҹ��ڴ� ���� ���߿� ������ ��ü�� ���� �Ҹ��Ų��. (���Լ���)
//*/
//
//class Circle {
//private:
//	double radius;
//	static int counts;
//
//public:
//	Circle();						// �⺻������
//	Circle(double radius);			// �Ű����� ������	
//	Circle(const Circle& circle);	// ���������
//	// Circle(const Circle& circle) = delete;	
//	// ��������� = delete => ���Ƿ� ���� ���ϵ��� ����
//
//	~Circle();	// �Ҹ���
//
//	double getRadius() const;
//	double getArea() const;
//	double getPerimeter() const;
//	void setRadius(double value);
//
//	static int getCount();
//
//};
//
//int Circle::counts = 0;	// ���� ����
//
////---------------------------------------------------------------------------------------
//// ������ ���� 
//// (�⺻ ������, �Ű����� ������, ���� ������)
//
//Circle::Circle() : radius(1.0) {
//	counts++;
//	cout << this << " ��ü ����(�⺻������)" << endl << endl ;
//}
//
//Circle::Circle(double radius) : radius(radius) {
//	counts++; 
//	cout << this << " ��ü ����(�Ű����� ������)" << endl << endl;
//}
//
//Circle::Circle(const Circle& circle) : radius(circle.radius) {
//	counts++;
//	cout << this << " ��ü ����(���� ������)" << endl << endl;
//}
//
////---------------------------------------------------------------------------------------
//// �Ҹ��� ����
//// ��ü �����Ǹ� �ڵ����� ����
//// ���� ������ ��ü�� ���߿� �Ҹ�
//
//Circle::~Circle() {
//	counts--;
//	cout << this << " ��ü �Ҹ�. ���� ����ϰŶ�! REMEMBER ME!" << endl << endl;
//}
//
////---------------------------------------------------------------------------------------
//// ��� �Լ� ����
//
//double Circle::getRadius() const {
//	return radius;
//}
//
//double Circle::getArea() const {
//	const double PI = 3.14;
//	return (radius * radius * PI);
//}
//
//double Circle::getPerimeter() const {
//	const double PI = 3.14;
//	return (2 * PI * radius);
//}
//
//void Circle::setRadius(double value) {
//	radius = value;
//}
//
//int Circle::getCount() {
//	cout << "��ü ���� �� : ";
//	return counts;
//}
//
////---------------------------------------------------------------------------------------
//// �Ϲ� �Լ� ����
//
//void test() {
//	cout << endl;
//
//	cout << "circle4 ��ü " << endl;
//	Circle circle4(9.0);
//
//	cout << "circle4 ������ : " << circle4.getRadius() << endl << endl;
//	cout << "circle4 ���� : " << circle4.getArea() << endl;
//	cout << "circle4 �ѷ� : " << circle4.getPerimeter() << endl;
//
//	cout << endl;
//
//	//---------------------------------------------------------------------------------------
//
//	cout << "circle5 ��ü " << endl;
//	Circle circle5;
//	circle5.setRadius(12.0);
//
//	cout << "circle5 ������ : " << circle5.getRadius() << endl;
//	cout << "circle5 ���� : " << circle5.getArea() << endl;
//	cout << "circle5 �ѷ� : " << circle5.getPerimeter() << endl;
//
//	cout << endl;
//
//}
//
//
//int main() {
//
//	//---------------------------------------------------------------------------------------
//	cout << "circle1 ��ü " << endl;
//	Circle circle1;
//	circle1.setRadius(10.0);
//
//	cout << "circle1 ������ : " << circle1.getRadius() << endl;
//	cout << "circle1 ���� : " << circle1.getArea() << endl;
//	cout << "circle1 �ѷ� : " << circle1.getPerimeter() << endl;
//
//	cout << endl;
//
//	cout << Circle::getCount() << endl;		// static �̶� Circle::getCount() ��� ����
//
//	cout << endl;
//
//	//---------------------------------------------------------------------------------------
//
//	test();
//
//	//---------------------------------------------------------------------------------------
//	cout << "circle2 ��ü " << endl;
//	Circle circle2(20.0);
//
//	cout << "circle2 ������ : " << circle2.getRadius() << endl;
//	cout << "circle2 ���� : " << circle2.getArea() << endl;
//	cout << "circle2 �ѷ� : " << circle2.getPerimeter() << endl;
//
//	cout << endl;
//
//	cout << Circle::getCount() << endl;		// static �̶� Circle::getCount() ��� ����
//
//	cout << endl;
//
//	//---------------------------------------------------------------------------------------
//	cout << "circle3 ��ü " << endl;
//	Circle circle3(30.0);
//
//	cout << "circle3 ������ : " << circle3.getRadius() << endl;
//	cout << "circle3 ���� : " << circle3.getArea() << endl;
//	cout << "circle3 �ѷ� : " << circle3.getPerimeter() << endl;
//
//	cout << endl;
//
//	cout << Circle::getCount() << endl;		// static �̶� Circle::getCount() ��� ����
//
//	cout << endl;
//
//	//---------------------------------------------------------------------------------------
//	
//	cout << "circle6 ��ü " << endl;
//	Circle circle6(circle2);
//
//	cout << "circle6 ������ : " << circle6.getRadius() << endl;
//	cout << "circle6 ���� : " << circle6.getArea() << endl;
//	cout << "circle6 �ѷ� : " << circle6.getPerimeter() << endl;
//
//	cout << endl;
//
//	cout << Circle::getCount() << endl;		// static �̶� Circle::getCount() ��� ����
//
//	cout << endl;
//
//
//
//
//	return 0;
//}