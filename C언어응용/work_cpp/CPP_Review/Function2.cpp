//#include <iostream>
//using namespace std;
//
//int squares(int n) {
//	return n * n;
//}
//
//void squares(int* n) {
//	*n = *n * *n;
//}
//
//void squaresRef(int& n) {
//	n = n * n;
//}
//
////void squaresRef(const int& n) {
////	n = n * n;	// ���� / const �� �پ� �� ���� �Ұ�
////}
//
//int main() {
//	int a = 10;
//	int b = 5; 
//	int c = 3;
//
//	cout << squares(a) << endl;	// pass by value(call by value)
//
//	squares(&b);
//	cout << b << endl;
//	// cout << squares(&b) << endl;		// ��� �Ұ�
//
//	squaresRef(c);
//	cout << c << endl;
//	// cout << squaresRef(c) << endl;	// ��� �Ұ�
//
//}

// ======================================================================================

#include <iostream>
using namespace std;

int squares(int n) {
	return n * n;
}

void squaresPointer(int* n) {	// ������ : �����Ͱ� �ٲ�� ���� �ٲ�
	int b = 5;
	// n = &b;
	*n = *n * *n;
	cout << b << endl;
}

void squaresRef(int& n) {
	int b = 5;
	n = b;
	n = n * n;
}

void squaresRef(const int& n) {
	// n = n * n;	// ���� -> const �ٿ��� �� ���� �Ұ�
}

int main() {
	int a = 6;
	squaresPointer(&a);	// b (5) ���

	squaresRef(a);
	cout << a << endl;	// b ����(25) ���
}