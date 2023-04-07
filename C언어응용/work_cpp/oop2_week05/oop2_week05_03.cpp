///* 동적 메모리 할당(중요 주제 ★)
//- 메모리를 다루는 방법 중 하나
//- 또 다른 여러가지 일들을 할 수 있음
//
//- 메모리를 동적으로 할당 <-> 컴퓨터로부터 메모리를 필요한 만큼 얻어오는 것
//- 컴퓨터 한테 메모리 요청
//
//- static 반대 : 동적
//- 메모리 크기가 컴파일 시점에서 결정되는 것이 아닌 프로그램이 돌아가는 도중에도 동적으로 필요에 의해 할당한다.
//
//*/ 
//
//// ===========================================================
//// 배열 형태 동적 메모리 할당 
//
////#include <iostream>
////using namespace std;
////
////int main() {
////	int* p;
////	int length, total = 0;
////	float average;
////	cin >> length;
////	p = new int[length];	// ★동적 메모리 할당
////	// * length : 2 이면 8바이트 할당 요청한 것
////
////	for (auto i = 0; i < length; ++i) {
////		cin >> *(p + i);	// 점수 값 받기
////	}
////
////	for (auto i = 0; i < length; ++i) {
////		total = total + p[i];
////	}
////
////	average = total / (double) length;
////	
////	cout << total << endl;
////	cout << average << endl;
////
////	delete[] p;	// 사용 메모리 해제
////
////}
//
//// ===========================================================
//// 싱글
//
////#include <iostream>
////using namespace std;
////
////int main() {
////	int* p = new int;	// 할당	
////	*p = 486;		
////	cout << *p << endl;
////	delete p;	// 해제
////
////	// 해제하고 또 해제하면 안된다.
////
////}
//
//// ===========================================================
//// 
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	short* p = new short[100];	// 200 바이트 동적 할당
//	
//	cout << p << endl;	// 000001F6ED8B9010
//
//	delete[] p;	// 
//	p = NULL;	// 포인터 가리키는 곳을 없애기 때문에 아무것도 가르키지 않는다.
//
//	cout << p << endl;	// NULL 안 해주면 : 0000000000008123
//						// NULL 해주면 : 0000000000000000
//
//
//	delete[] p;
//	p = NULL;
//
//	cout << p << endl;
//
//}
