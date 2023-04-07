/*
* �ּ�(comments) -> ctrl + K + C / �ּ� ���� -> ctrl + K + U
<iostream> : input output stream ����(��� ��ü)
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
//	cout << "�� : ";
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
< Ŭ���� �ۼ� >

[1] Ŭ���� ����(���赵) - �ζ��� ���
- �ν��Ͻ� ������ ���(�Ӽ�) -> private
- �ν��Ͻ� ��� �Լ�(�޼ҵ�) -> public
	* �ν��Ͻ� ��� �Լ� ������ : . or ->
	* ex. this->radius & (*this).radius ����
	
[2] ����Լ�(�޼ҵ� ����) - �����ڵ� �ۼ�
[3] ���ø����̼�(���� Ŭ���� ���� ��)

*/

/*
< const >
- ���ó�� ����
- ���̵�����Ʈ �߻����� ������ ���� (���� �� ���� X)
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
	cout << this << " ��ü ����(�⺻������)" << endl;
}

Rectangle::Rectangle(double length) {
	this->length = length;
	cout << this << "��ü ����(�Ű����� ������)" << endl;
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

	cout << "rectangle1 ���� ���� : " << rectangle1.getLength() << endl;
	cout << "rectangle1 ���� : " << rectangle1.getArea() << endl;
	cout << "rectangle1 �ѷ� : " << rectangle1.getPerimeter() << endl;

	cout << endl;

	Rectangle rectangle2(10.0);

	cout << "rectangle2 ���� ���� : " << rectangle2.getLength() << endl;
	cout << "rectangle2 ���� : " << rectangle2.getArea() << endl;
	cout << "rectangle2 �ѷ� : " << rectangle2.getPerimeter() << endl;




}