//#include <iostream>
//using namespace std;
//
///* < 동적 메모리 할당 >
//- 메모리 다르는 방법 중 하나
//- 여러가지 일들 수행 가능
//
//- 메모리를 동적으로 할당 <-> 컴퓨터로부터 메모리를 필요한 만큼 얻어오는 것
//  (컴퓨터한테 메모리 요청)
//
//- static 반대 : 동적
//- 메모리 크기가 컴파일 시점에서 결정되는 것이 아니라
//  프로그램 돌아가는 도중에도 동적으로 필요에 의해 할당한다.
//
//- 메모리를 자유자재로 조절 가능
//
//*/
//
//// =======================================================================
//// 배열 형태 동적 메모리 할당
//
////int main() {
////	
////	int* p;
////	int length, total = 0;
////	float average;
////	
////	cin >> length;
////
////	p = new int[length];	// ★ 동적 메모리 할당(8바이트)
////			
////	for (auto i = 0; i < length; i++) {
////		cout << "점수" << i + 1 << " : ";
////		cin >> p[i];
////	}
////	
////	for (auto i = 0; i < length; i++) {
////		total = total + p[i];
////	}
////
////	average = total / (double) length;
////
////	cout << total << endl;
////	cout << average << endl;
////
////	delete[] p; // ★ 동적 메모리 삭제
////	
////
////}
//
//// =======================================================================
//// 싱글 형태 동적 메모리 할당
//
////int main() {
////	int* p = new int;
////
////	cin >> *p;		// ★ 동적 메모리 할당(4바이트)
////	
////	cout << "점수 : " << * p << endl;
////	
////	delete p;		// ★ 동적 메모리 삭제
////
////}
//
//// =======================================================================
//// 동적 메모리 삭제 및 쓰레기값 삭제
//
//int main() {
//	short* s = new short[50];	// ★ 동적 메모리 할당(100바이트)
//
//	cout << s << endl;
//
//	delete[] s;					// ★ 동적 메모리 삭제
//
//	s = NULL;					// ★ 동적 메모리 값 제거
//
//	cout << s << endl;
//
//
//}