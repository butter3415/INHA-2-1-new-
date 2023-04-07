////// ����Ÿ��, �����ε� ���� ���� (�ڹ�)
////// Ŭ���� �ȿ� �ֳ� ������ ����(�ڹ�)
////// Ŭ���� ���̵� C++ ����
////// ������ �ٸ�/  ��Ż���� ��Ƹ� - ����� �˶��
////// �Լ� ���� ���� ! �ݵ�� �ؾ� �Ѵ�.!
////// ����� ���� Ŭ����
////// private, public, default
////// protected ���X
////// getter, setter
////// �޼ҵ�(��� �Լ�, Behavior) / �Ӽ�(��� ����,�ʵ�)
////
////// Instance ��ü
////// attribute �ʵ� ��� ����
////// behavior �޼ҵ� ������, ����Լ�
////
////// Ŭ���� ����(���赵) �ζ��� ���
////// ����Լ�(�޼ҵ� ����) - �����ڵ�
////// ���ø����̼�(���� Ŭ���� ���)
//////
////// 
////// �ڹٿ� ���� ���� 2-3�� �þ
////
////# include <iostream>
////using namespace std;
////
////int main() {
////
////
////
////}
////
////class Circle {	// Ŭ���� ����
////	private:	// ���� ����
////		double radius;
////	public:	// ��ο��� ���� 
////		// ����Լ� 4��
////
////		// �� const : ���ó�� ���� | 
////		//		    : ����(Radius �� �ٲ��� �ʴ´ٴ� ����) | 
////		//		    : ���̵�����Ʈ �߻� X ����(���� �� �ٲ�� ��)
////			
////		double getRadius() const;		// �������� �����´�.
////		double getArea() const;			// ������ �����´�.
////		double getPerimeter() const;	// �ѷ��� �����´�.
////		void setRadius(double value);	// ���⼱ Radius �� ���� ����
////
////};
////
////double Circle::getRadius() const	// �Ű����� X 
////{
////
////	return radius;
////}
////
////double Circle::getArea() const
////{
////	const double PI = 3.14; // ���� ���
////	return (PI * radius * radius);
////}
////
////double Circle::getPerimeter() const
////{
////	const double PI = 3.14;
////}
////
////// final - �ڽ� Ŭ�������� �������̵� X
//////		 - ��� Ŭ���� : ��� X
//////		 - 
//
//
//
//
//
//// �ڹٿ����� this -> C++�� ������
///*************************************************************
// * ��ü ���� ���α׷��ֿ��� Ŭ������ ����ϴ� ���α׷�       *
// *************************************************************/
//#include <iostream>
//using namespace std;
//
///************************************************************
// * Ŭ���� ����                                              *
// * ������ ����� ��� �Լ��� ����                           *
// ************************************************************/
//class Circle
//{
//private:
//    double radius;  
//    // mutable : ���� �ǵ��� �����. ������ 5�� �ٲٱ� ����. �����ϸ� �ȵ�
//    // mutable ���� const�� ����� ��� �Լ� �ȿ��� �ʵ��� ���� ������ �� �ִ�.
//public:
//    Circle();
//    Circle(double r);   // �Ű����� �����ڸ� ����� �⺻ �����ڵ� ������ �Ѵ�.
//
//    double getRadius() const;
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//};
//
//Circle::Circle() {  // �⺻ ������
//    cout << this << "��ü�� ����(�⺻������)\n" << endl; // �ι� ����-> ��ü 2��
//}
//
//Circle::Circle(double r) {
//    radius = r;
//    cout << radius << "��ü�� ����(�Ű� ���� ������)\n" << endl; // �ι� ����-> ��ü 2��
//}
//
//// this : ���� ������ ��ü�� ��� �Ҵ�Ǿ����� Ȯ�� ����(16������ ǥ��)
//
//
///**************************************************************
// * ��� �Լ� ���� �κ�                                        *
// * ��� �Լ����� Ŭ���� ���� �κп��� ����                    *
// **************************************************************/
// // getRadius ��� �Լ��� ����
//double Circle::getRadius() const
//{
//    int a = 9;  
//
//    // radius = 5.0;   // const member function
//    // error C3490: 'radius'��(��) const ��ü�� ���� �׼����ǰ� �����Ƿ� ������ �� �����ϴ�.
//    // mutable �� ���� ���� ��Ŵ
//
//    return radius;
//}
//
//// getArea ��� �Լ��� ����
//double Circle::getArea() const
//{
//    const double PI = 3.14;
//    return (PI * radius * radius);
//}
//
//// getPerimeter ��� �Լ��� ����
//double Circle::getPerimeter() const
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//
//// setRadius ��� �Լ��� ����
//void Circle::setRadius(double value)
//{
//    radius = value;
//}
//
///********************************************************
// * ���ø����̼� �κ�                                    *
// * Ŭ������ �ν��Ͻ�ȭ�ؼ� ��ü�� ����� Ȱ��           *
//*********************************************************/
//
//int main()
//{
//    Circle circle3(5.0);
//
//    // ù ��° circle ��ü�� ����� ��� �Լ� ȣ��
//    cout << "Circle 1" << endl;
//    Circle circle1;
//    circle1.setRadius(10.0);
//    cout << "������: " << circle1.getRadius() << endl;
//    cout << "����: " << circle1.getArea() << endl;
//    cout << "�ѷ�: " << circle1.getPerimeter() << endl << endl;
//    // �� ��° circle ��ü�� ����� ��� �Լ� ȣ��  
//    cout << "Circle 2" << endl;
//    Circle circle2;
//    circle2.setRadius(20.0);
//    cout << "������: " << circle2.getRadius() << endl;
//    cout << "����: " << circle2.getArea() << endl;
//    cout << "�ѷ�: " << circle2.getPerimeter();
//    return 0;
//}