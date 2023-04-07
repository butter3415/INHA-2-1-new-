//#include <iostream>
//using namespace std;
//
//
//// Ŭ���� ����  (������ ����� ��� �Լ� ����)
//class Circle {
//	private:
//		double radius;
//		//double mutable radius;
//		// mutable -> set���ιۿ� ���� �Ұ����� private ��� ������ �����ϵ��� ������
//	public:
//		Circle();
//		Circle(double r);	// �Ű����� �����ڸ� ������� ������ �ۼ�
//
//		double getRadius() const;
//		double getArea() const;
//		double getPerimeter() const;
//		void setRadius(double value);
//};
//
//Circle::Circle() {	// �⺻ ������
//	cout << this << "��ü ����(�⺻������)" << endl << endl;
//}
//
//Circle::Circle(double r) {
//	radius = r;
//	cout << "�������� " << radius << "�� ��ü ����(�Ű� ���� ������)" << endl << endl;
//}
//
//
//// ��� �Լ� ���� (��� �Լ����� Ŭ���� ���� �κп��� ����)
//
//// getRadius ��� �Լ� ����
//double Circle::getRadius() const {
//	// radius = 5.0;	// const member function
//	// mutable ��� �� ������ ���� ���� ����
//	return radius;
//}
//
//// getArea ��� �Լ� ����
//double Circle::getArea() const {
//	const double PI = 3.14;
//	return (PI * radius * radius);
//}
//
//// getPerimeter ��� �Լ� ����
//double Circle::getPerimeter() const {
//	const double PI = 3.14;
//	return (2 * PI * radius);
//}
//
//// setRadius ��� �Լ� ����
//void Circle::setRadius(double r) {
//	radius = r;
//}
//
//
//// ���ø����̼� �κ� (Ŭ������ �ν��Ͻ�ȭ�ؼ� ��ü�� ����� Ȱ��)
//int main() {
//
//	// ù��° circle ��ü�� ����� ��� �Լ� ȣ��
//	cout << "Circle1 ��ü ����" << endl;
//	Circle circle1;
//	circle1.setRadius(10.0);
//	cout << "Circle1 ������ : " << circle1.getRadius() << endl;
//	cout << "Circle1 ���� : " << circle1.getArea() << endl;
//	cout << "Circle1 �ѷ� : " << circle1.getPerimeter() << endl;
//	
//	cout << endl;
//
//	// �ι�° circle ��ü�� ����� ��� �Լ� ȣ��
//	cout << "Circle2 ��ü ����" << endl;
//	Circle circle2;
//	circle2.setRadius(20.0);
//	cout << "Circle2 ������ : " << circle2.getRadius() << endl;
//	cout << "Circle2 ���� : " << circle2.getArea() << endl;
//	cout << "Circle2 �ѷ� : " << circle2.getPerimeter() << endl;
//
//	cout << endl;
//
//	// ����° circle ��ü�� ����� ��� �Լ� ȣ��(�Ű� ���� ������ ���)
//	cout << "Circle3 ��ü ����" << endl;
//	Circle circle3(25.0);
//	cout << "Circle3 ������ : " << circle3.getRadius() << endl;
//	cout << "Circle3 ���� : " << circle3.getArea() << endl;
//	cout << "Circle3 �ѷ� : " << circle3.getPerimeter() << endl;
//
//}
//
///*
//*** const ***
//: ���ó�� ����
//: ���̵� ����Ʈ �߻����� ������ ���� (���� ���� �ٲ��� �ʴ´�.)
//*/
//
///*
//��ü ���� ���α׷���
//- Ŭ���� ���� (�Ӽ��� ���� ����)
//- ��� �Լ� ���� (���� ����)
//- ���ø����̼� (��ü�� �ν��Ͻ�ȭ�ϰ� ���)
//*/
//
///*
//���� ������ : ���� ������ ��Ÿ�� �� ���
//=> private, public, protected
//=> �⺻������ private ���� ������ �ٴ´�.
//
//�� ������ ����� ���� ������
//: ������ ��� -> private ����
//: �����ϱ� ���� private �ٿ��� ���
//
//�� ��� �Լ��� ���� ������
//: ��� �Լ� -> public ����
//: Ŭ���� ���ο����� Ȱ���� ��� -> private
//*/
//
///*
//*** ��� �Լ�(�޼ҵ�)�� ���� ***
//1) ��� �Լ����� ������(const)�� �ִ�.
//2) ��� �Լ� �տ� Ŭ���� �̸��� �ٴ´�.
//Ŭ����::�̸�
//
//�� �Լ��� ���� �ڷ����� ������ �տ� ��ġ��
//*/
//
///*
//*** �ζ��� �Լ� ***
//Ŭ���� ���� ���ο� �Լ��� ���� -> �ζ��� �Լ�
//*/
//
///*
//*** ���ø����̼� ***
//- ��ü �ν��Ͻ�ȭ(��ü �����) Ex. Circle circle1;
//*/