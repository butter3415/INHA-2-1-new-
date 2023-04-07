//// *포인터 -> 김지혜 학생이 얼마나 많을까요!?
//// 김지혜가 굉장히 많다 -> 김지혜 고유의 번호는 주민등록번호
//// 지혜를 찾으려면 주민등록번호를 찾아야한다.(포인터에서 주소)
//// 변수 이름 작성도 가독성을 위하여 작성 
//// 변수 이름 : 김지혜 // 포인터 : 주민등록번호 // 같은 느낌
//
//// 포인터(가르킨다) -> 주소만 받을 수 있다!!!!!
//
//// 이전 버전에서는 현재와 다르게 프로그래밍이 돌아갈 수 있다~
//// 32비트 프로그램에선 코드를 못 써요~ 
//// 64비트 지원 -> 8바이트
//
//// 포인터 자체는 4바이트
//
///*
//*** const ***
//: 상수처럼 동작
//: 사이드 이펙트 발생하지 않음을 보증 (변수 값이 바뀌지 않는다.)
//: ※ 포인터와 콜라보 했을 때!
//	: 
//*/
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	//double* pd;	// 이전 버전에서는 4바이트로 나옴
//	//// int* pi;
//	//double d = 9.7;
//	//int i = 77;
//	//int* pi = &i;
//	//int** ppi = &pi;	// 이중 포인터 -> 2차원 배열에 사용 // 통해서 통해서 사용해야할 때
//	//int*** pppi = &ppi;
//	//	// 지혜한테 직접 말하기 껄끄러운 얘기를 설화한테 대신 전해달라 했다.(간접참조)
//	//	// 지혜의 주소(ppi)를 알려면 설화의 주소(pi)부터 알아야한다.
//
//	//// pi = &i;	// pi가 i를 가리킨다.
//
//	//// pi = &d;	// int 포인터에 double 타입 못 받아!!!
//	//// void 포인터 사용 시점에서는 어떤 타입인지 알려줘야한다!!!
//
//	//void* pv;
//	//pv = &pi;
//	//pv = &i;
//	//pv = &pd;
//	//pv = &d;
//
//	//cout << *(double*)pv << endl;	// 디테일한 정보를 주어야 한다.
//
//
//	//cout << *pi << endl;	// 77
//	//cout << pi << " / " << &i << '\n';	// 000000F18190F8A4 / 000000F18190F8A4
//	//// 주소가 똑같다
//	//// 지혜 번호를 설화한테 물어봐서 알아냈다!
//
//	//cout << *pi << " / " << **ppi<< '\n';	// 77 / 77
//	//// 값이 나온다!
//
//	//cout << *pi << " / " << i << " / " << **ppi << " / " << ***pppi << '\n';
//	//// 77 / 77 / 77 / 77
//	//cout << *pi << " / " << i << " / " << **ppi << '\n';
//	//// 77 / 77 / 77
//	//cout << pi << " / " << &i << " / " << ppi << '\n';
//	//// 000000F265AFFA24 / 000000F265AFFA24 / 000000F265AFFA48
//	
//
//	//cout << sizeof(pd) << '\n';	// 8
//	//cout << sizeof(d) << '\n';	// 8
//	//cout << sizeof(pi) << '\n';	// 8
//	//cout << sizeof(i) << '\n';	// 4
//
//
//	// ------------------------------------------------------------------------------------------------
//	////const double d = 9.7;	// ★
//	////double* pd;			// ★
//
//	////void* pv;
//
//	////// pd = &d;	// d 가 const 여서 값 못 넣음
//	////			// -> const double* 이면 가능
//
//	////const double d = 9.7;	// ★
//	////const double* pd;		// ★
//
//	////void* pv;
//
//	////pd = &d;	// d 가 const 여서 값 못 넣음
//	////			// -> const double* 이면 가능
//
//	////double d = 9.7;
//	////const double* pd;
//
//	////void* pv;
//
//	////pd = &d;	// 읽기 전용으로 불러옴 
//
//	////double d = 9.7;
//	////double d2 = 2.91;
//	////const double* pd;	// ★
//
//	////void* pv;
//
//	////pd = &d;	// 
//	////pd = &d2;	// d2 의 주소 가져옴
//
//	//double d = 9.7;
//	//double d2 = 2.91;
//	//double* const pd = &d;	// ★ 가리키는 대상의 주소는 바꿀 수 없지만 값은 바꿀 수 있다.
//
//	//void* pv;
//
//	//// pd = &d;	//
//	//*pd = 3.13;
//	//// pd = &d2;	// d2 의 주소 가져옴
//
//	//// const 맨 앞 : 가져오는 대상의 값을 바꿀 수 없다, 가리키는 주소를 바꿀 수 있다. (둘 다 const)
//	////			   : 동현이 자리를 바꿀 수 없지만, 승호를 가리킬 수는 있다.
//	////			   : const double* pd = &d;
//	//// const 중간 : 가져오는 값을 바꿀 수 있다. 가리키는 주소를 바꿀 수 없다.
//	////			  : 동현이를 가리켜야 하지만 동현이를 바꿀 수 있다.
//	////			  : double* const pd = &d;
//		
//
//	int i1 = 77;
//	int i2 = 16;
//
//	//int* pi = &i1; 
//	//pi = &i2;
//
//	// ------------------------------------------------------------------------------------------------
//	// ①
//	//const int* pi = &i1;	// 대상의 값을 못 바꾼다. & 가리키는 대상은 바꾸기 가능!	읽기 전용!
//	//pi = &i2;
//	//*pi = 111;	// 불가!!! 값을 못 바꾸니까!
//
//	// ②
//	//int* const pi = &i1;	// 대상의 주소를 못 바꾼다.	& 값을 바꾸기 가능!
//	//*pi = 111;	// 값 바꾸기 가능
//	//// pi = &i2;	// 불가!!! 주소를 못 바꿈!
//
//	// ③
//	const int* const pi = &i1;	// 대상의 값 & 주소 둘 다 못 바꿈!
//	//pi = &i2;
//	//*pi = 111;
//
//	cout << *pi << '\n';
//
//	return 0;
//}