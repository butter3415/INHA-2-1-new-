//#include <iostream>
//using namespace std;
//
//int main() {
//
//	//int iarr[5];
//	//int* piarr = &iarr[0];
//	//
//	//cout << piarr << endl;	// parr 에 저장한 arr 방 번호 메모리 주소 출력
//	//cout << piarr + 1 << endl;	// &arr[0] 번 방 메모리 주소 + 4바이트 증가(int)
//	//cout << piarr + 2 << endl;	// &arr[1] 번 방 메모리 주소 + 4바이트 증가(int)
//	
//	//---------------------------------------------------------------------------------------
//	
//	//short sarr[5];
//	//short* psarr = &sarr[0];
//	//
//	//cout << psarr << endl;		// &psarr[0] 번 방 메모리 주소
//	//cout << psarr + 1 << endl;	// &psarr[1] 번 방 메모리 주소 + 2 바이트 증가(short)
//	//cout << psarr + 2 << endl;	// &psarr[2] 번 방 메모리 주소 + 2 바이트 증가(short)
//	//cout << psarr + 3 << endl;	// &psarr[3] 번 방 메모리 주소 + 2 바이트 증가(short)
//
//	//---------------------------------------------------------------------------------------
//
//	// 포인터 변수, 배열 선언
//	// 타입의 크기만큼 증가, 감소
//
//	//short sarr[5]; 
//	//short* ps1 = &sarr[1];
//	//short* ps2 = &sarr[4];
//
//	//cout << "ps1 : " << ps1 << endl;	// &sarr[1] 번 방 메모리 주소
//	//cout << "ps2 : " << ps2 << endl;	// &sarr[1] 번 방 메모리 주소 + 6
//	//cout << "ps2 - ps1 : " << ps2 - ps1 << endl;	// [4]번 방 - [1]번 방 = 3 ( * 2 = 6 차이)
//
//	//---------------------------------------------------------------------------------------
//	
//	//int iarr[5];
//	//int* pi1 = &iarr[1];
//	//int* pi2 = &iarr[4];
//
//	//cout << "pi1 : " << pi1 << endl;	// &iarr[1] 번 방 메모리 주소
//	//cout << "pi2 : " << pi2 << endl;	// &iarr[1] 번 방 메모리 주소 + 12
//	//cout << "pi2 - pi1 : " << pi2 - pi1 << endl;	// [4]번 방 - [1]번 방 = 3 ( * 4 = 12 차이) 
//
//	//---------------------------------------------------------------------------------------
//
//	// 배열 포인터
//	// 문법적 규칙 숙지, 메모리 번지 이해도 
//
//	//long arr[10] = { 0 };
//	//long(*p)[10] = &arr;
//
//	//(*p)[5] = 5;	// 주소 타고 들어가서 값 바꿔줌
//	//	
//	//cout << arr[5] << endl;	// 초기화 값 5 출력
//	//cout << arr[3] << endl;	// 초기화 값 0 출력
//
//	//---------------------------------------------------------------------------------------
//
//	// 포인터 배열
//
//	short a, b, c = 5, d = 6;
//	short* arr[4];	// 공간 만들어주기
//
//	arr[0] = &a;
//	arr[1] = &b;
//	arr[2] = &c;
//	arr[3] = &d;
//
//	cout << &a << endl;
//	cout << arr[0] << endl;	// a의 주소
//
//	cout << &b << endl;
//	cout << arr[1] << endl;	// b의 주소
//
//	cout << &c << endl;
//	cout << arr[2] << endl;	// c의 주소
//
//	cout << &d << endl;
//	cout << arr[3] << endl;	// d의 주소
//
//	cout << endl;
//
//	cout << &arr[0] << endl;	// &arr[0]
//	cout << &arr[1] << endl;	// &arr[0] + 8바이트
//	cout << &arr[2] << endl;	// &arr[1] + 8바이트	
//	cout << &arr[3] << endl;	// &arr[2] + 8바이트
//
//	cout << endl;
//
//	cout << *arr[0] << endl;	// 쓰레기값
//	cout << *arr[1] << endl;	// 쓰레기값
//	cout << *arr[2] << endl;	// 5	
//	cout << *arr[3] << endl;	// 6
//
//	// □□□□
//	// a b c d
//	// ? ? 5 2
//	// 주소는 배정 o, 값은 모름
//
//	// arr[0] □(a의 주소) 38
//	// arr[1] □(b의 주소) 40
//	// arr[2] □(c의 주소) 48
//	// arr[3] □(d의 주소) 50
//
//}