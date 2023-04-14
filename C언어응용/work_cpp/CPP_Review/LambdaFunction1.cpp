//#include <iostream>
//#include <functional>
//using namespace std;
//
//// 거듭제곱 함수
////int main() {
////
////	auto power = [](int b, int e) ->int {
////		int r = 1;
////
////		for (auto i = 1; i <= e; i++) {
////			r = r * b;
////		}
////		return r;
////	};
////
////	cout << power(2, 8) << endl;	// 256
////	cout << power(4, 2) << endl;	// 16
////
////}
//
///* < 재귀 함수 >
//- 람다에서 재귀를 구현할 때 auto 타입으로는 추론 불가
//- 반드시 대입하려고 하는 함수의 타입이 명시되어야 함. (function<int(int)>)
//*/
//
//int main() {
//
//	function<int(int)> fact = [&fact](int n) -> int {
//		return n <= 1 ? 1 : n * fact(n - 1);
//		//if (n <= 1) {
//		//	return 1;
//		//}
//		//else {
//		//	return n * fact(n - 1);
//		//}
//	};
//	cout << fact(5);
//	
//
//}
//
///* < 람다함수 총 정리 >
//- 익명함수, 함수 객체를 생성
//- 함수 포인터와 함수 객체의 장점을 지닌다.
//- 캡쳐 기능을 통해 함수 밖의 변수에 접근 가능하다
//- & 기호를 통해 람다함수 안에서도 외부 변수의 값을 변경할 수 있다.
//- 재귀 호출도 가능하다.
//
//*/