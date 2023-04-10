//// 2주차 온라인 수업 코드 작성 - 재작성
//
//# include <iostream>
//using namespace std;
//
//int main() {
//
//	//// 자료형/ 음수표현방식(2의 보수법)/ 자료형의 SIZE
//
//	//// int i = 5; => 변수
//	//const int i = 5; // => 상수	// 32 bit
//	//// i = 7; => 변경 불가
//	//cout << i << endl;
//
//	//// short s = 65535;	// 16bit (-2의 15승 ~ +2의 15승 - 1) 
//	//// 절반은 음수로 사용하여 65535 출력 불가.
//	//
//	//unsigned short s = 65535; // => 65535 출력 가능
//	//
//	//// signed(-2의 15승 ~ +2의 15승 -1) 음수 ~ 양수
//	//// unsigned(0 ~ 2의 16승 -1) 0 ~ 양수
//	//// 
//	////  1111 1111 1111 1111
//	////+                   1
//	//// 10000 0000 0000 0000
//
//	//cout << s << endl;	// -1 출력
//
//
//	//// 배열
//	////int arr[4];
//	////arr[0] = -9;
//	////arr[3] = 30;
//	////cout << arr[2] << endl; // => 초기화 X, 쓰레기값 출력
//
//	////for (int i = 0; i < 4; i++) {
//	////	cout << arr[i] << endl;		// => -9, 쓰레기값, 쓰레기값, 30 출력
//	////}
//
//	////int arr[4] = { 0 };	// 모든 자리 0
//	////arr[0] = -9;
//	////arr[3] = 30;
//
//	////for (int i = 0; i < 4; i++) {
//	////	cout << arr[i] << endl;		// => -9, 0, 0, 30 출력
//	////}
//
//	////int arr[4] = { -9, 0, 0, 30 };	// 선언과 동시에 초기화
//
//	////for (int i = 0; i < 4; i++) {
//	////	cout << arr[i] << endl;		// => -9, 0, 0, 30 출력
//	////}
//
//	//// ★ 배열명은 포인터 상수다 ★
//
//	//int arr[4] = { -9, 0, 0, 30 };	// 선언과 동시에 초기화
//	//int* parr = &arr[0];	// 포인터 변수 선언(int* )
//
//	//for (int i = 0; i < 4; i++) {
//	//	// cout << parr << endl;		// => 주소번지만 출력
//	//	// cout << parr+i << endl;		// => 4바이트씩 늘어난 주소번지만 출력	// 이 방 써! 저 방 써! 4호씩 방 배정해줌
//	//	// cout << *(parr + i) << endl;	// => parr 값 출력 // => -9, 0, 0, 30 출력
//	//	// cout << parr[i] << endl;		// => 포인터를 배열로 사용 // => -9, 0, 0, 30 출력
//	//	// cout << arr[i] << endl;		// => 배열 값 출력 // => -9, 0, 0, 30 출력
//	//	// cout << arr+i << endl;		// => 4바이트씩 늘어난 주소번지만 출력
//	//	cout << *(arr + i) << endl;		// => 배열 값 출력 // => -9, 0, 0, 30 출력
//
//	//}
//
//	// auto	=> 자료타입 위치에 auto 써주면 해당 auto키워드 가진 변수와 뒤에 대입되는 초기화 값을 추론하여 타입 지정
//	// 제너릭과 비슷한지?
//	int arr[4] = { -9, 0, 0, 30 };
//	// auto int arr[4] = { -9, 0, 0, 30 };	// 배열명 앞에 auto 사용 XXX 
//	auto* parr = &arr[0];	// 배열의 맨 앞 번지 주소, arr배열의 -9 // int 를 가리킴
//
//	// ★ auto : 넘어오는 값 추론하여 해당 타입으로 동작되도록 함
//	
//	for (auto i = 0; i < 4; i++) {
//		cout << parr[i] << endl;
//	}
//
//
//		
//
//
//	return 0;
//}