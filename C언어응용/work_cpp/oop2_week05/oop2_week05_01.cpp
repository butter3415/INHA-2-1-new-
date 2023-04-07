//// Lambda Expression 람다 표현식(C++ 11, 14)
//// [캡쳐블럭] (매개변수리스트) -> 리턴타입{함수 바디}
//// 이름없는 함수를 매개변수로 다른 함수에 집어넣기도 함.
//// 코드가 짧고 간결하다. 가독성도 높다
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	[]() -> void {};
//	[]() {};	// 리턴타입 생략 가능, 화살표 생략 가능
//	[] {}; // 꼭 필요한건 캡쳐블럭, 함수바디
//
//	//[] {cout << "Hi Lambda!" << endl; };	// 실행은 하지만 출력은 안됨.
//
//	//// 맨끝의 소괄호 쌍은 람다표현식을 즉시 실행시키는 역할
// 
//	//[] {cout << "Hi Lambda!" << endl; }();
//
//	//// 변수에 담아서 출력
//	//auto inha = [] {cout << "Hi Lambda!" << endl; };
//	//inha();
//
//	////auto inha = []() { return 5 * 10; };
//	//cout << inha() << endl;
//
//	//// 값을 던져주고 처리하는 방식
//	//auto inha = [](int a, int b) { return a * b; };
//	//cout << inha(5, 10) << endl;
//
//	//// -> 사용하려면 리턴타입 명시해줘야 함.
//	//auto inha = [](int a, int b) -> int { return a * b; };
//	//cout << inha(5, 10) << endl;
//
//	//// 인수를 직접 입력하여 사용 가능
//	//auto inha = [](int a, int b) -> int { return a + b; }(5, 10);
//	//cout << inha << endl;
//
//	//auto inha = [](float a, int b) -> int { return a + b; };
//	//cout << inha(7.7f, 2) << endl;	// 9 리턴
//
//	//auto inha = [](float a, int b) -> float { return a + b; };
//	//cout << inha(7.7f, 2) << endl;	// 9.7 리턴
//
//	//auto inha = [](float a, int b) { return a + b; };
//	//cout << inha(7.7f, 2) << endl;	// 9.7 리턴
//
//	// 캡쳐블록 : 바깥 변수를 이용 가능하도록 함
//	//short c = 5, d = 7;
//	//auto inha = [c, d](float a, int b) -> int {
//	//	return a + b + c + d;
//	//};
//	//cout << inha(1.9, 2) << endl;	// 15 출력
//
//	//short c = 5, d = 7;
//	//auto inha = [c, d](float a, int b) {
//	//	return a + b + c + d;
//	//};
//	//cout << inha(1.9, 2) << endl;	// 15.9 출력
//	
//
//}

/*
[캡쳐블록](매개변수 리스트) -> 리턴타입 {함수 바디};
함수는 익명함수
이름없는 함수
[캡쳐블록] {함수바디} 꼭 필요!!!
*/