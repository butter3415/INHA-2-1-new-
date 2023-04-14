///* < Lambda Expression 람다 표현식 >
//[캡쳐블럭] (매개변수 리스트) -> 리턴타입 {함수 바디}
// 
// - [캡쳐블록] {함수바디} 필수 요소
//
// - 이름 없는 함수를 매개변수로 다른 함수에 집어넣기도 함.
// - 코드가 짧고 간결하다.
// - 가독성이 높다
//
//*/
//# include <iostream>
//using namespace std;
//
//int main() {
//	[] () -> void {};
//	[]() {};	// 리턴타입, 화살표 생략 가능
//	[] {};		// 필수 요건 : [캡쳐블럭] {함수바디}
//
//	[] {cout << "1. Hi Hello Lambda!" << endl; };
//	// 위 코드는 실행 O 출력 X
//
//	[] {cout << "2. Hi Hello Lambda!" << endl; }();
//	// 위 코드는 실행 O 출력 O
//
//	// 변수에 담아 출력
//	auto inha = [] {cout << "Hi Inha! " << endl; };
//	inha();
//
//	// 리턴값만 던져줌, 별도 출력 필요
//	auto fifty = []() {return 5 * 10; };
//	cout << fifty() << endl;
//
//	// 값을 던져주고 처리하는 방식
//	auto inha2 = [](int a, int b) -> int {return a * b; };
//	cout << inha2(5, 10) << endl;
//
//	// -> 사용하려면 리턴타입 명시해줘야 함
//	auto inha3 = [](int a, int b) -> int {return a * b; };
//	cout << inha3(5, 10) << endl;
//
//	// 인수 직접 입력하여 사용 가능
//	auto inha4 = [](int a, int b) -> int {return a + b; }(5, 10);
//	cout << inha4 << endl;
//
//	auto inha5 = [](float a, float b) -> float {return a + b; };
//	cout << inha5(5, 10) << endl;
//
//	auto inha6 = [](float a, float b) {return a + b; };
//	cout << inha6(5.5, 10.0) << endl;
//
//
//	short c = 5, d = 7;
//
//	auto inha7 = [c, d](float a, int b) -> int {
//		return a + b + c + d;
//	};
//
//	cout << inha7(5.2, 8) << endl;
//
//}