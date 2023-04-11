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
////	n = n * n;	// 오류 / const 가 붙어 값 변경 불가
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
//	// cout << squares(&b) << endl;		// 출력 불가
//
//	squaresRef(c);
//	cout << c << endl;
//	// cout << squaresRef(c) << endl;	// 출력 불가
//
//}

// ======================================================================================

#include <iostream>
using namespace std;

int squares(int n) {
	return n * n;
}

void squaresPointer(int* n) {	// 포인터 : 포인터가 바뀌면 값도 바뀜
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
	// n = n * n;	// 오류 -> const 붙여서 값 변경 불가
}

int main() {
	int a = 6;
	squaresPointer(&a);	// b (5) 출력

	squaresRef(a);
	cout << a << endl;	// b 제곱(25) 출력
}