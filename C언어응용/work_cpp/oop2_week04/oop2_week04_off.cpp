//// 열거형 
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
//// 포인터만이 주소를 받는다.
//
//void squaresRef(int& n) {	
//	n = n * n;
//}
//
////void squaresRef(const int& n) {	// const를 붙이면 값 변경 X
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
//	squaresRef(c);	// pass by reference	// 메인 값도 변경 가능
//	cout << c << endl;
//
//
//}
//
//// 열거형 
//
//# include <iostream>
//using namespace std;
//
//
//int squares(int n) {
//	return n * n;
//}
//
//void squaresPointer(int* n) {		// 포인터가 바뀌면 값이 바뀐다.
//	int b = 7;
//	// n = &b;	// side effect
//	*n = *n * *n;
//	cout << b << endl;
//}
//// 포인터만이 주소를 받는다.
//
//void squaresRef(int& n) {	// 바인딩 되면 영원히 그 값
//	int b = 7;
//	n = b;	// n = 7
//	n = n * n;
//}
//
////void squaresRef(const int& n) {	// const를 붙이면 값 변경 X
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