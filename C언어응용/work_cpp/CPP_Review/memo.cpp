//// ������ 
//
//# include <iostream>
//using namespace std;
//
//
//int squares(int n) {
//	return n * n;
//}
//
//void squares(int* n) {
//	*n = *n * *n;
//}
//// �����͸��� �ּҸ� �޴´�.
//
//void squaresRef(int& n) {	
//	n = n * n;
//}
//
////void squaresRef(const int& n) {	// const�� ���̸� �� ���� X
////	n = n * n;
////}
//
//int main() {
//	int a = 10;
//	int b = 5;
//	int c = 3;
//
//	cout << squares(a) << endl;	// pass by value (call by value)
//	
//	squares(&b);	// pass by pointer
//	cout << b << endl;	
//
//	squaresRef(c);	// pass by reference	// ���� ���� ���� ����
//	cout << c << endl;
//
//
//}
//
//// ������ 
//
//# include <iostream>
//using namespace std;
//
//
//int squares(int n) {
//	return n * n;
//}
//
//void squaresPointer(int* n) {		// �����Ͱ� �ٲ�� ���� �ٲ��.
//	int b = 7;
//	// n = &b;	// side effect
//	*n = *n * *n;
//	cout << b << endl;
//}
//// �����͸��� �ּҸ� �޴´�.
//
//void squaresRef(int& n) {	// ���ε� �Ǹ� ������ �� ��
//	int b = 7;
//	n = b;	// n = 7
//	n = n * n;
//}
//
////void squaresRef(const int& n) {	// const�� ���̸� �� ���� X
////	n = n * n;
////}
//
//int main() {
//	int a = 10;
//
//	squaresPointer(&a);
//	cout << a << endl;	// 
//
//	squaresRef(a);
//	cout << a << endl;	// 49
//	
//
//
//}