//# include <iostream>
//using namespace std;
//
//// -----------------------------------------------------------------
//// 배열 & ★포인터★ & auto 타입
//
//int main() {
//	// ===================================================================
//	/*< 배열 >
//	- 배열 작성 시 초기화하지 않으면 쓰레기값 저장.
//	*/ 
//
//	//int arr[4];
//	//arr[0] = -98;
//	//arr[3] = 21;
//
//	//cout << arr[2] << endl;	
//	//// -858993460 출력
//	//// * 초기화 X -> 쓰레기값 출력
//
//	//for (int i = 0; i < 4; i++) {
//	//	cout << arr[i] << endl;
//
//	//	// - 98			// 초기화값
//	//	// - 858993460  // 쓰레기값
//	//	// - 858993460  // 쓰레기값
//	//	// + 21			// 초기화값
//	//	// arr[4] = { -98, 쓸값, 쓸값, 21 }
//
//	//}
//
//	//int arr[4] = { 0 };
//	//arr[0] = -98;
//	//arr[3] = 21;
//
//	//for (int i = 0; i < 4; i++) {
//	//	cout << arr[i] << endl;
//
//	//	// -98	// 초기화값
//	//	//	 0	// 0
//	//	//	 0	// 0
//	//	//	21	// 초기화값
//	//	// arr[4] = { -98, 0, 0, 21 }
//
//	//}
//
//	//int arr[4] = { -98, 0, 0, 21 };
//
//	//for (int i = 0; i < 4; i++) {
//	//	cout << arr[i] << endl;
//
//	//	// -98	// 초기화값
//	//	//	 0	// 초기화값
//	//	//	 0	// 초기화값
//	//	//	21	// 초기화값
//	//	// arr[4] = { -98, 0, 0, 21 }
//
//	//}
//
//
//
//	// ===================================================================
//	/* < 포인터 변수 >
//	- 배열 각 원소들의 메모리 주소 -> 4바이트씩 증가
//	- 배열명은 포인터 상수
//	*/
//
//	//int arr[4] = { -98, 0, 0, 21 };
//	//int* parr = &arr[0];
//
//
//	//for (int i = 0; i < 4; i++) {
//	//	// cout << parr << endl;		// 메모리 주소 값 출력(arr[0])
//	//	// cout << parr + i << endl;	// 메모리 주소 값 출력(arr[0] ~ arr[4])
//	//	// cout << *parr << endl;		// -98 * 4번 출력 (arr[0])
//	//	// cout << *parr + i << endl;	// -98, -97, -96, -95(-98에서 1씩 증가)
//	//	
//	//	// cout << parr[i] << endl;		// -98, 0, 0, 21 출력 
//	//	// cout << &arr[i] << endl;		// -98, 0, 0, 21 출력
//	//	// cout << *(parr + i) << endl;	// -98, 0, 0, 21 출력
//	//	// cout << *(arr + i) << endl;	// -98, 0, 0, 21 출력
//
//	//}
//
//
//
//	// ===================================================================
//	/* < auto 변수 >
//	- 타입 자동 지정
//	- 배열명 앞에는 auto 사용 불가
//	- auto 키워드는 const와 함께 사용 가능 -> 변경 불가
//	- 자료타입 위치에 auto 사용
//		-> 해당 auto키워드 가진 변수와 뒤에 대입되는 초기화 값을 추론
//		-> 타입 지정
//
//	*/
//
//	//const auto f = 3.14f;	// f: 3.14 4byte   float
//	//auto s = "test";		// s: test 8byte   char const * __ptr64
//
//	//cout << "f: " << f << "\t" << sizeof(f) << "byte \t" << typeid(f).name() << endl;	// 4byte
//	//cout << "s: " << s << "\t" << sizeof(s) << "byte \t" << typeid(s).name() << endl;	// 8byte
//
//
//	//double arr[4] = { -98, 0, 0, 21 };
//	//auto* parr = &arr[0];
//
//	//for (auto i = 0; i < 4; i++) {
//	//	// cout << *(arr + i) << endl;
//	//	cout << *(parr + i) << endl;
//
//	//}
//	//cout << "parr: " << *parr << "\t" << sizeof(parr) << "byte \t" << typeid(parr).name() << endl;	// 8byte
//	// parr: -98       8byte   double * __ptr64
//
//
//
//	// ===================================================================
//	/* < void 포인터 >
//	- 선언 당시 어떤 타입도 다 받는다.
//	- 출력 시점에 타입 명시해줘야 한다.
//	- 출력할때 => cout << *(타입*)포인터변수 << endl;
//
//	- void 포인터에는 메모리 주소값 저장해야 한다.
//	(ex. vDP = dNum X /// vDP = &dNum O)
//	- 포인터 크기는 8byte
//	*/
//
//	//short s = 6;
//	//double d = 5.21;
//	//
//	//short* ps;
//	//double* pd;
//	//void* pv;
//
//	//ps = &s;
//	//pv = &s;
//
//	//cout << *ps << endl;			// 6 출력
//	//cout << *(short*)pv << endl;	// 6 출력
//
//	//pd = &d;
//	//pv = &d;
//
//	//cout << *pd << endl;			// 5.21 출력
//	//cout << *(double*)pv << endl;	// 5.21 출력
//
//	// -----------------------------------------------------------------
//	// < Modern Style (for 문 - Ranged based for (범위기반 for문)) >
//	
//	//char letters[] = "Hello";
//	//void* ps1;
//	//ps1 = letters;
//
//	//// 174 - 177 라인 코드와 동일하게 동작
//	//for (auto letter : letters) {
//	//	cout << letter;
//	//}
//
//	//cout << endl;
//
//	// -----------------------------------------------------------------
//	// < Old Style (for 문) >
//	
//	//char s[] = "hello";
//	//// char s[] = { 'h', 'e', 'l', 'l', 'o' , '\0'};
//
//	//void* ps;
//
//	////ps = &s[0];
//	//ps = s;
//
//	//cout << (char*)ps << endl;	// hello 
//
//	//for (int i = 0; i < sizeof(s); i++) {
//	//	// cout << *((char*)ps) << " ";	// h h h h h h
//	//	cout << *((char*)ps + i) << " "; // h e l l o
//	//}
//
//
//	// -----------------------------------------------------------------
//	// < Modern Style (for 문 - Ranged based for (범위기반 for문)) >
//
//	//for (int i : {1, 3, 5, 7, -9}) {
//	//	cout << i;
//	//}
//	
//	// -----------------------------------------------------------------
//	//int iNum = 521;
//	//void* vIP;
//	//vIP = &iNum;
//	//
//	//cout << "vIP 메모리 주소 : " << vIP << endl;
//	//cout << "vIP 값 : " << *(int*)vIP << endl;
//	//cout << "vIP 메모리 크기 : " <<  sizeof(vIP) << endl;
//	//cout << "iNum 메모리 크기 : " << sizeof(iNum) << endl;
//
//	//cout << endl;
//
//	// ------------------------------------------------------------------
//
//	//double dNum = 5.21;
//	//void* vDP;
//
//	//vDP = &dNum;
//
//	//cout << "vDP 메모리 주소 : " << vDP << endl;
//	//cout << "vDP 값 : " << *(double*)vDP << endl;
//	//cout << "vDP 메모리 크기 : " << sizeof(vDP) << endl;
//	//cout << "dNum 메모리 크기 : " << sizeof(dNum) << endl;
//
//
//}