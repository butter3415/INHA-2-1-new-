///* < 함수_Function >
//- 기능, 행위, Function, 값을 던져주면 처리하여 리턴
//- 메인 함수 위쪽, 아래쪽 위치 가능
//- 컴파일러는 위에서부터 읽는다. 
//-> 메인보다 함수가 아래애 있다면 프로토 타입 작성하여 아래에 함수가 있다고 알려준다.
//
//*/
//
////--------------------------------------------------------------------------------------- 
////
////# include <iostream>
////using namespace std;
////
////void Hello();	// 메인 아래에 함수가 선언되면 미리 확인하는 기능
////
////
////int main() {
////
////
////}
////
////void Hello() {
////	cout << "하이 헬로우 안녕? " << endl;
////}
//
//// ======================================================================================
//
///*
//매개변수 함수, 활용
//< 함수 포인터 사용 >
//- 원래 데이터 리턴 타입과 매개변수 타입 일치시켜 주기
//- 리턴타입(포인터 주소) (매개변수 타입);
//
//
//*/ 
//
//# include <iostream>
//using namespace std;
//
//void Hello(int n);
//int Factorial(int f);
//int FactorialRecursion(int);
//
//int main() {
//	int(*pFact) (int);
//	void(*pHi) (int);
//
//	pFact = &Factorial;
//	pHi = &Hello;
//
//	int in;
//	cin >> in;
//
//	cout << (*pFact)(in) << endl;
//	(*pHi)(in);
//	cout << FactorialRecursion(in) << endl;
//
//
//}
//
////--------------------------------------------------------------------------------------- 
//
//void Hello(int n) {
//	cout << "하이 헬로우 안녕? " << " " << n << endl;
//}
//
////--------------------------------------------------------------------------------------- 
//
//int Factorial(int f) {
//	int result = 1;
//
//	for (int i = 1; i <= f; i++) {
//		result = result * i;
//	}
//
//	return result;
//}
//
////--------------------------------------------------------------------------------------- 
//
//int FactorialRecursion(int f) {
//	if (f <= 1) {
//		return 1;
//	}
//	else {
//		return f * FactorialRecursion(f - 1);
//		// 4 * FactorialRecursion(3)
//		// 3 * FactorialRecursion(2)
//		// 2 * FactorialRecursion(1)
//	}
//}