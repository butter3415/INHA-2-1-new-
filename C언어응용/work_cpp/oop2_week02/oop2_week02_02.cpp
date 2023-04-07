//#include <iostream>
//using namespace std;
//
//int main() {
//
//	//// auto (넘어오는 값 추론하여 해당 타입으로 동작되도록 함)
//	//
//	//// auto f = 3.24f;		// float 초기화값 통해 자료타입 추론
//	////const auto f = 3.24f;	// const 선언 ☆ auto와 const 함께 사용 가능
//	//
//	////const auto f = 3.24f; // float으로 처리 (4바이트)
//	//const auto f = 3.24;	// double 로 처리 (8바이트)
//	//auto s = "test";	// string	// char 포인터로 처리
//
//
//	//// f = 3.14f; // const 로 선언해서 변경 불가
//
//	//cout << sizeof(f) << "\t" << typeid(f).name() << endl;	// 4       float
//	//cout << sizeof(s) << "\t" << typeid(s).name() << endl;	// 8       char const* __ptr64	
//	//// s => character형 포인터로 동작(4바이트)	// ! 난 왜 8바이트?!?!? ! 
//
//	//cout << f << endl;
//	//cout << s << endl;
//
//
//
//	//// void 포인터
//	//// ★ 프로그래머가 void로 받은 주소를 사용할때 어떤 타입으로 받았는지 알아야한다.
//	//// 
//	//// short a = 2;		// int a = 2; (불가)
//	//// short* ps;
//
//	//short a = 2;
//	//double b = 5.21;
//	//// int* ps;
//	//// ps = &a;	// (※ 못 가져옴) ps 에 a 값을 가져옴	// ps 와 a의 타입이 같아야한다.
//	//// cout << *ps << endl;
//	//
//	//void* pv;
//	//pv = &a;	// 들어오는건 다 받음
//	//	
//	//cout << *(short*)pv << endl;	// 출력할때 어떤 자료형인지 알려줘야함
//
//	//pv = &b;
//	//cout << *(double*)pv << endl;
//	//// cout << *(short*)pv << endl;	// -23593 출력
//	//// 8바이트(double) 자료 받았는데 2바이트(short)만 읽어야 하니 이상하게 출력함 
//	//// => 출력 시점에 어떤 타입 출력할건지 알려줘야함
//
//	// 배열 & void 포인터
//
//	// char s[] = "Hello";
//	char s[] = { 'H', 'e', 'l', 'l', 'o', '\0' };	// 뒤에 0 안 넣으면 글자가 깨져서 나옴
//	void* ps;
//	
//	// ps = &s[0];	// ps = s 와 같은 의미
//	ps = s;
//
//	// cout << *(char*)ps << endl;	// H 출력
//	
//	//cout << (char*)ps << endl;	// Hello 출력
//	//cout << s << endl;			// Hello 출력
//
//	for (int i = 0; i < sizeof(s); i++) {
//		cout << *((char*)ps + i);
//		// cout << *(char*)ps + i;	// H 에 대한 아스키코드 72 에 수를 더해서 출력되고 있음 // 정수 형태로 리턴
//	}
//
//	for (auto i = 0; i < sizeof(s); i++) {	// auto로도 사용 가능
//		cout << *((char*)ps + i);
//		// cout << *(char*)ps + i;	// H 에 대한 아스키코드 72 에 수를 더해서 출력되고 있음 // 정수 형태로 리턴
//	}
//
//	// 64~67 라인 = 61 라인 같은 의미, 같은 출력값                                                                                                                              
//	
//
//}