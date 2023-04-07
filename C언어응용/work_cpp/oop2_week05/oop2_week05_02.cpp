////#include <iostream>
////using namespace std;
////
////int main() {
////	// 함수 바깥에 있는 변수에 대하여 접근함
////	// 원본 수정하기 위해서는 참조 변수로 캡쳐블럭 입력 (&c 처럼)
////
////
////	//short c = 5, d = 7;
////	//auto inha = [&c, &d](float a, int b) -> int {
////	//	// [c,d],  c = -5;	// 값에 대하여 대입이 안됨.
////	//	// [&c, d], c = -5; // 대입 가능함
////	//	c = -5;
////	//	d = 8;
////	//	return a + b + c + d;
////	//};
////	//cout << inha(1.9f, 3) << endl;	// 6 출력
////
////	//short c = 5, d = 7;
////	//auto inha = [&](float a, int b) -> int {	// 메인 함수에 있는 모든 변수에 대하여 참조 형태로 캡쳐, 수정 가능
////	//	c = -5;
////	//	d = 8;
////	//	return a + b + c + d;
////	//};
////	//cout << inha(1.9f, 3) << endl;	// 6 출력
////
////	//short c = 5, d = 7;
////	//auto inha = [ = ](float a, int b) -> int {	// 전체 변수 캡쳐 but 수정은 안 됨.
////	//	return a + b + c + d;
////	//};
////	//cout << typeid(inha).name() << endl;	// class `int __cdecl main(void)'::`2'::<lambda_1> 출력 -> 클래스 객체임
////	//cout << inha(1.9f, 3) << endl;	// 16 출력
////
////	//short c = 5, d = 7;
////	//auto inha = [=](float a, int b) -> int {	// 전체 변수 캡쳐 but 수정은 안 됨.
////	//	return a + b + c + d;
////	//}(1.9f, 3);
////	//cout << typeid(inha).name() << endl;	// int 출력
////	//cout << inha << endl;	// 16 출력
////
////	//short c = 5, d = 7;
////	//auto inha = [=](float a, int b) -> int {	
////	//	return a + b + c + d;
////	//}(1.9f, 3);
////	//cout << typeid(inha).name() << endl;	// int 출력
////	//cout << inha << endl;		// 16 출력
////
////	
////
////
////}
//
////// ========================================================================================
////// 거듭제곱 함수 만들기
////
////#include <iostream>
////using namespace std;
////
////int main() {
////	//int power = [](int b, int e) -> int {	// power 타입은 auto 가능, int 가능
////	//	int r = 1;
////	//	for (auto i = 1; i <= e; i++) {
////	//		r = r * b;
////	//	}
////	//	return r;
////	//}(2, 8);	// 일회용
////
////	//cout << power << endl;	// 256 출력
////
////
////	//int power = [](int b, int e) {	// '-> int' 생략해도 실행 가능
////	//	int r = 1;
////	//	for (auto i = 1; i <= e; i++) {
////	//		r = r * b;
////	//	}
////	//	return r;
////	//}(2, 8);	// 일회용
////
////	//cout << power << endl;	// 256 출력
////
////	auto power = [](int b, int e) {	// auto 타입 추론 가능
////		int r = 1;
////		for (auto i = 1; i <= e; i++) {
////			r = r * b;
////		}
////		return r;
////	};	// 일회용
////
////	cout << power(2, 8) << endl;	// 256 출력
////
////	cout << power(4, 2) << endl;	// 16 출력
////
////
////}
//
//// ========================================================================================
//// 재귀함수 만들기
//// 람다에서 재귀를 구현할 땐 auto 타입으로는 추론 불가
//// 반드시 대입하려고 하는 함수의 타입이 명시되어야 함.
//
//#include <iostream>
//#include <functional>
//
//using namespace std;
//int main() {
//	// auto 타입으로 작성하면 아래 함수를 실행시킬 때 어떤 타입인지 모르는 상태에서 실행을 시키는 것이기 때문에 
//	// function 타입을 작성하여 명시적으로 알려줘야 한다.
//	
//	//function<int(int)> fact = [&fact](int n) -> int {
//	//	if (n <= 1) {
//	//		return 1;
//	//	}
//	//	else {
//	//		return n * fact(n - 1);
//	//	}
//	//};
//
//	//cout << fact(6) << endl;
//
//	function<int(int)> fact = [&fact](int n) -> int {
//		return n <= 1 ? 1 : n * fact(n - 1);
//	};
//
//	cout << fact(6) << endl;
//
//}
//
///*
//람다 함수 특징
//- 익명 함수, 함수 객체를 생성
//- 함수 포인터와 함수 객체의 장점을 지닌다.
//- 캡쳐 기능을 통해 함수 밖의 변수에 접근할 수 있다.
//- & 기호를 통해 람다 함수 안에서도 외부 변수의 값을 변경할 수 있다.
//- 재귀 호출도 가능하다.
//
//*/