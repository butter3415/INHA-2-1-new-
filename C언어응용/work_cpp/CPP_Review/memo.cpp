//// 함수 : 기능, 행위, Function, 값을 던져주면 처리해서 리턴하는 역할
//// 메인함수 위쪽, 아래쪽 위치 가능
//// 위에서부터 컴파일러가 읽어 가기 때문에 메인 함수보다 Hello() 함수가 더 아래 있으면 오류
//// 보통 메인 함수 아래에 함수를 작성하고 위에 프로토 타입 작성하면서 함수를 설명한다.
//
////#include <iostream>
////using namespace std;
////
////void Hello(); // 인사
////// 메인 들어가기 전에 확인하는 기능
////
////int main() {
////	Hello();	// 함수 호출
////
////}
////
////
////void Hello() {
////	cout << "안녕~!" << endl;
////
////}
//
//// =======================================================
//
//// 매개변수 함수 포함 / 매개변수 활용 가능
//
//// 함수 포인터 사용
//// -> 원래 데이터의 리턴 타입과 매개변수 타입 일치 시켜 줘야 한다.
//// -> 리턴 타입(포인터 주소) (매개변수 타입);
//
//#include <iostream>
//using namespace std;
//
//void Hello(int n); // 인사
//int Factorial(int f);	// 팩토리얼 함수, 반복문 이용
//int FactorialRecursion(int); // 팩토리얼 함수, 재귀함수 이용
//
//// 정의해준대로 사용하기
//
//int main() {
//	int(*pFact)(int);
//	// int 타입 (pFact 의 포인터) (int 타입)
//	void(*pHi)(int);	//Hello 함수를 위한 배개면수 함수
//
//	// pFact = &Factorial;
//	// pFact = &Hello; // Hello 의 리턴, 매개변수 타입 일치하지 않아서 오류남
//
//	pFact = &Factorial;
//	pHi = &Hello;
//
//	int in;
//	cin >> in;
//
//	cout << (*pFact)(in) << endl;
//	(*pHi)(in);
//	
//
//	cout << FactorialRecursion(in) << endl;
//	cout << Factorial(in) << endl;
//	Hello(2);	// 함수 호출
//
//}
//
//
//void Hello(int n) {
//	cout << "안녕~!" << " " << n << endl;
//
//}
//
//int Factorial(int f) {
//	int result = 1;
//
//	for (int i = 1; i <= f; i++) {
//		result = result * i;
//
//	}
//	return result;
//}
//
//int FactorialRecursion(int f){
//	// f = 4
//	// f = 3
//	// f = 2
//	// f = 1
//	if (f <= 1) {
//		return 1;
//	}
//	else {
//		return f * FactorialRecursion(f - 1);
//		// 4 * FactorialRecursion(3)
//		// 3 * FactorialRecursion(2)
//		// 2 * FactorialRecursion(1)
//		
//	}
//
//}