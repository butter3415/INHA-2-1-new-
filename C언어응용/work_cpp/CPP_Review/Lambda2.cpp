//#include <iostream>
//using namespace std;
//
//int main() {
//	//short c = 5, d = 7;
//	//auto inha = [&](float a, int b) -> int {
//	//  [&] 전체변수를 참조로 캡쳐
//	//	c = -5;
//	//	// d = 8;	// [&c, d] 일 때는 불가
//	//	d = 8;
//	//	
//	//	// 캡쳐블록이 [c,d] 인 상태에서 c = -11 쓰면 값을 복제해서 대입하려고 하는 것
//	//	// [&c, d]로 작성하면 정상 동작 한다.
//	//	// [&] 로만 작성해줘도 정상 동작 -> 모든 변수 참조 바꿀 수 있도록 동작
//
//	//	return a + b + c + d;
//	//};
//
//	short c = 5, d = 7;
//	auto inha = [=](float a, int b) -> int {
//		// [=] 전체변수를 값으로 캡쳐
//
//		return a + b + c + d;
//	};
//
//	cout << typeid(inha).name() << " : " << inha(1.9f, 2) << endl;	// class 타입
//	cout << c << endl; 
//
//	//short c = 5, d = 7;
//	//auto inha = [=](float a, int b) -> int {
//	//	// [=] 전체변수를 값으로 캡쳐
//
//	//	return a + b + c + d;
//	//}(1.9f, 2);
//
//	//cout << typeid(inha).name() << " : " << inha << endl;	// int 타입
//	//cout << c << endl;
//
//}