//#include <iostream>
//using namespace std;
//
//// -----------------------------------------------------------------
//// Ŭ���� ����
//
//class Circle {
//	private:	//  �ʵ�(������ ���) ����
//		double radius;
//
//	public :	// �޼ҵ� (��� �Լ�) ����
//		Circle();	// �⺻������
//		Circle(double r); // �Ű����� ������
//
//		double getRadius() const;	// getter
//		void setRadius(double r);	// setter
//
//		double getArea() const;		// method
//		double getPerimeter() const;	// method
//		
//};
//
//
//
//// -----------------------------------------------------------------
//// ��� �Լ� ����
// 
//// <������>
//Circle::Circle() 
//: radius(1.0)	// �ʱ�ȭ ���־�� ��.
//{
//	cout << this << "��ü ����(�⺻ ������)" << endl;
//}
//
//Circle::Circle(double radius)
//: radius(radius)	// this.radius = radius ����
//{
//	cout << this << "��ü ����(�Ű� ���� ������)" << endl;
//}
//
//// <Getter>
//double Circle::getRadius() const {
//	return radius;
//}
//
//// <Setter>
//void Circle::setRadius(double r) {
//	radius = r;
//}
//
//
//// <Method>
//double Circle::getArea() const{
//	return (radius * radius);
//}
//
//double Circle::getPerimeter() const {
//	const double PI = 3.14;
//	return (2 * PI * radius);
//}
//
//
//
//// -----------------------------------------------------------------
//// ���ø����̼�
//
//// ���� �Լ�
//int main() {
//	Circle circle1;			// ��ü ����(��ü �ν��Ͻ�ȭ)
//	
//	cout << circle1.getArea() << endl;
//	cout << circle1.getPerimeter() << endl;
//
//	cout << endl;
//
//	Circle circle2(3.0);
//	cout << circle2.getArea() << endl;
//	cout << circle2.getPerimeter() << endl;
//
//
//
//}
//
//
//
//
//// ==================================================================
//
///* < ���� ������ >
//: ���� ���� ��Ÿ�� �� ���
//- ������ ��� -> private
//- ��� �Լ� -> public (private ����)
//*/
//
///* < ��� �Լ� ���� >
//- Ŭ���� ������ (::) �ٿ��� ��.
//=> �����ڷ��� Ŭ�����̸� :: ��� �Լ� �̸�(�μ���){}
//=> �����ڷ��� Ŭ�����̸� :: ��� �Լ� �̸�(�μ���) const {}
//*/
//
///* < const >
//- ���ó�� ����
//- ���̵�����Ʈ �߻����� ������ ����(���� �� ���� X)
//- ��, ��, �յڿ� �� �� ��Ȳ �ٸ�
//*/