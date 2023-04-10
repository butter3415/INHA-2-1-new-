///*
//< 자료형, 음수표현방식(2의 보수법), 자료형 SIZE >
//int 타입 : 4바이트(32비트)
//short 타입 : 2바이트(16비트) (-2의 15승 ~ +2의 15승 -1)
//		   : 메모리의 절반은 음수 표현에 사용
//		   : signed (-2의 15승 ~ +2의 15승 -1)
//		   : unsigned (0 ~ 2의 16승 -1)
//
//
//const : 변경 불가(상수)
//*/
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	// int k =5;
//	const int k = 5; 
//	cout << k << endl;
//
//	//short s = 65535;
//	unsigned short s = 65535;
//	cout << s << endl;
//
//}

// ============================================================

///*
//< 배열 >
//배열 작성 할때 초기화하지 않으면 쓰레기값이 나온다.
//*/
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	//int arr[4];
//	//arr[0] = -9;
//	//arr[3] = 3000;
//	//cout << arr[0] << endl;
//
//	//int arr[4] = { 0 };	// 기본 값 0
//	//arr[0] = -9;
//	//arr[3] = 3000;
//	//cout << arr[0] << endl;
//
//	//for (int i = 0; i < 4; i++) {
//	//	cout << arr[i] << endl;
//	//}
//
//	// -------------------------------------
//	// < 포인터 변수 >
//	// 배열의 각 원소들의 메모리 주소는 4바이트씩 증가한다.
//	// 배열명은 포인터 상수
//	// 
//
//	int arr[4] = { -9, 0, 0, 30000 };
//	int* parr = &arr[0];
//
//	for (int i = 0; i < 4; i++) {
//		// cout << *( parr + i) << endl;
//		// cout << parr[i] << endl;
//		// cout << arr[i] << endl;
//		cout << *(arr + i) << endl;
//	}
//
//}

// ============================================================

///*
//< auto 변수 >
//: 타입 자동 지정
//: 배열 앞에는 auto 사용 불가
//: auto 키워드는 const와 함께 사용 가능
//: 포인터 크기는 8바이트
//*/
//
//#include <iostream>
//using namespace std;
//
////int main() {
////	double arr[4]{ -9, 0, 0, 3000 };
////	auto* parr = &arr[0];
////
////	for (auto i = 0; i < 4; i++) {
////		cout << *(arr + i) << endl;
////	}
////
////
////}
//
//int main() {
//	const auto f = 3.24f;
//	auto s = "test";
//
//	// f = 3.14f;
//	cout << sizeof(f) << "'\t" << typeid(f).name() <<  endl;
//	cout << f << endl;
//	cout << sizeof(s) << "'\t" << typeid(s).name() << endl;
//	cout << s << endl;
//
//}

// ============================================================

/*
< void 포인터 >
: 선언 당시 어떤 타입도 다 받는다.
*/

# include <iostream>
using namespace std;

int main() {

	//short a = 2;
	//double b = 3.14;
	//short* ps;
	//void* pv;

	//// ps = &a;

	//pv = &a;

	//// cout << *ps << endl;
	//cout << *(short*)pv << endl;

	//pv = &b;
	//cout << *(double*)pv << endl;

	char s[] = "Hello";
	// char s[] = { 'H', 'e', 'l','l','o', 0 };

	void* ps;

	ps = &s[0];
	ps = s;

	for (int i = 0; i < sizeof(s); i++) {
		cout << *((char*)ps + i) << " ";
	}


	//cout << (char*)ps << endl;
	//cout << s << endl;



}