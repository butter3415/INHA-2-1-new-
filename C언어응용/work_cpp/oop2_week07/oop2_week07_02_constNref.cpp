//#include <iostream>
//using namespace std;
//
//class NeedConstructor {
//public:
//	const int max;	// 반드시 초기화 값이 있어야 함
//	int& ref;		// 반드시 초기화 값이 있어야 함	// 처음 정의할 때 빼고는 다른 변수 참조 못함
//	int temp;
//
//	NeedConstructor();
//	NeedConstructor(int cnt, int& number);
//
//};
//
//NeedConstructor::NeedConstructor()
//	:max(100), ref(temp) {	
//	// max = 1000;	// 불가
//	// const 변수이기 때문에 생성자 만들어지기 전 초기화가 되어야 한다 -> 생성자 초기화 리스트 사용
//
//	temp = 10;
//}
//
//NeedConstructor::NeedConstructor(int cnt, int& number) 
//: max(cnt), ref(number) {
//	temp = 10;
//}
//
//
//int main() {
//
//	//NeedConstructor cr;
//	// cr.max = 1000;	// const 변수 (상수) 대입 불가
//	// cr.ref = cr.temp;
//	
//	int num = 400;
//	NeedConstructor cr(500, num);
//
//
//	cout << cr.max << endl;
//	cout << cr.ref << endl;
//
//}