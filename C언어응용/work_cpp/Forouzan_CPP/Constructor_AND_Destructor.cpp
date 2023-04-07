/*
[2] ��ü�� ������ �Ҹ�
- ������ : ��ü�� �����ڶ�� �θ��� Ư���� ��� �Լ��� ȣ��� �� ����
- �Ҹ��� : �Ҹ��ڶ�� �θ��� Ư���� ��� �Լ��� ȣ��Ǿ� �Ҹ��� ���ο��� ��ü�� ����

�� ���� -> �ʱ�ȭ -> ���� -> ���� -> ��Ȱ�� ��
��     ������     ��      ��     �Ҹ���     ��

- ������ : ��ü ������ ��� �ʱ�ȭ
         : ���ϰ� X
         : �̸��� Ŭ������ �̸��� ����
         : �⺻ ������ / �Ű����� ������ / ���� ������ => 3������ ����
		 : �⺻ �����ڴ� ������ ��ȣ ��� ȣ���.

		 �� ���� ������ ���� �� delete Ű���� �Ҵ� -> ���� �����ڸ� ������ ����.

- �Ҹ��� : �̸��� Ŭ���� �̸� �տ� ~ ���� ����
		 : ���ϰ� X
		 : �ڵ� ȣ��(���α׷� ����Ǵ� ����)
		 : �����ε� �Ұ�
		 : �� ���� �ֱ� ������ ��ü���� �Ҹ�
		   (ex. ��ü1 - ��ü5 ������ ���� -> ��ü5 - ��ü1 ������ �Ҹ�) 

*/

#include <iostream>
using namespace std;

class Rectangle {	
	private:		
		double length;
	public:		
		Rectangle();									// �⺻ ������
		Rectangle(double legnth);						// �Ű����� ������
		 Rectangle(const Rectangle& rectangle);		// ���� ������
		//Rectangle(const Rectangle& rectangle) = delete;	// �� ���� ������ ������ ����

		double getLength() const;
		double getArea() const;
		double getPerimeter() const;
		void setLength(double value);

		~Rectangle();							// �Ҹ���

};

// ================================================================
// <������ ����>

// �� �⺻ ������ 
// 
//Rectangle::Rectangle() {
//	length = 1.0;
//	cout << this << " ��ü ����(�⺻������)" << endl << endl;
//}

// �� �⺻������ + �ʱ�ȭ ����Ʈ
Rectangle::Rectangle() 
: length(1.0) {
	cout << this << " ��ü ����(�⺻������)" << endl << endl;
}

// ----------------------------------------------------------------
// �� �Ű����� ������
//Rectangle::Rectangle(double length) {
//	// length = length;
//	this->length = length;
//	cout << this << " ��ü ����(�Ű�����������)" << endl << endl;
//}

// �� �Ű����� ������ + �ʱ�ȭ ����Ʈ
Rectangle::Rectangle(double length) 
: length(length) {
	cout << this << " ��ü ����(�Ű�����������)" << endl << endl;
}

// ----------------------------------------------------------------
// �� ���� ������
//Rectangle::Rectangle(const Rectangle& rectangle) {
//	this->length = rectangle.length;
//	cout << this << " ��ü ����(���������)" << endl << endl;
//}

// �� ���纯�� ������ + �ʱ�ȭ ����Ʈ
Rectangle::Rectangle(const Rectangle& rectangle)
:length(rectangle.length) {
	cout << this << " ��ü ����(���������)" << endl << endl;
}


// ================================================================

// < ��� �Լ� ���� (�޼ҵ� �ۼ�) >
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
// <�Ҹ��� ����>
Rectangle::~Rectangle() {
	cout << this << "��ü �Ҹ�. ���� �ʸ� ����ϸ�!" << endl << endl;
}


// ================================================================

// < ���ø����̼� ��ü �ν��Ͻ�ȭ ���� >
int main() {
	Rectangle rectangle1;

	rectangle1.setLength(5.0);

	cout << "Rectangle ��ü1 ����" << endl;
	cout << "length : " << rectangle1.getLength() << endl;
	cout << "Area : " << rectangle1.getArea() << endl;
	cout << "Perimeter : " << rectangle1.getPerimeter() << endl;

	cout << endl;

	// ----------------------------------------------------------------

	Rectangle rectangle2;

	rectangle2.setLength(10.0);

	cout << "Rectangle ��ü2 ����" << endl;
	cout << "length : " << rectangle2.getLength() << endl;
	cout << "Area : " << rectangle2.getArea() << endl;
	cout << "Perimeter : " << rectangle2.getPerimeter() << endl;

	cout << endl;

	// ----------------------------------------------------------------

	Rectangle rectangle3(15.0);

	cout << "Rectangle ��ü3 ����" << endl;
	cout << "length : " << rectangle3.getLength() << endl;
	cout << "Area : " << rectangle3.getArea() << endl;
	cout << "Perimeter : " << rectangle3.getPerimeter() << endl;

	cout << endl;

	// ----------------------------------------------------------------

	Rectangle rectangle4(rectangle1);

	cout << "Rectangle ��ü4 ����" << endl;
	cout << "length : " << rectangle4.getLength() << endl;
	cout << "Area : " << rectangle4.getArea() << endl;
	cout << "Perimeter : " << rectangle4.getPerimeter() << endl;

	cout << endl;





}