//#include <iostream>
//using namespace std;
//
/////*  a, b, c 구조체 노드가 연결되어 있는 구조(환형 형태의 LinkedList) 
////*	a -> b -> c	
////*/
////
////struct LinkedList {
////	int data;
////	LinkedList* p;	
////
////};
////
////int main() {
////	LinkedList a, b, c;
////	a.data = 99;
////	a.p = &b;				// p가 포인터기 때문에 구조체의 주소를 받을 수 있음
////
////	b.data = 93;
////	b.p = &c;
////
////	c.data = 94;
////	c.p = &a;
////
////	cout << a.data << " = " << c.p->data << " = " << (*c.p).data << " = " << b.p->p->data << " = " << a.p->p->p->data << endl;	// 99 (a.data)
////
////	cout << b.data << " = " << a.p->data << " = " << (*a.p).data << " = " << c.p->p->data << endl;	// 93 (b.data)
////	
////	cout << c.data << " = " << b.p->data << " = " << (*b.p).data << " = " << a.p->p->data << endl;	// 94 (c.data)
////
////}
//
////==============================================================================
//
//// union : 공용체 (가장 큰 사이즈의 멤버 변수 크기로 메모리 할당)
////	     : 공간 최소화
////		 : 많이 사용하지 않음
//
//union JobUnion {
//	// char name[32];	// 32바이트
//	//float salary;	// 4바이트
//	long salary;	// 4바이트
//	int workId;		// 4바이트
//
//}uJob;	// 공용체 바로 선언
//
//// struct : 구조체
//
//struct JobStruct {
//	// char name[32];	// 32바이트
//	// float salary;	// 4바이트
//	long salary;	// 4바이트
//	int workId;		// 4바이트	// 최소 40바이트
//
//}sJob;	// 공용체 바로 선언
//
//
//int main() {
//	uJob.salary = 11;
//	uJob.workId = 1234;	
//
//	sJob.salary = 21;
//	sJob.workId = 44434;
//
//	// cout << uJob.salary << endl;	// 1.7292e-42 / float salary 일 경우
//
//	cout << uJob.salary << endl;	// 1234	
//	cout << uJob.workId << endl;	// 1234
//
//
//	// ★ union은 가장 큰 멤버 변수 크기로 메모리 할당 
//	// => 현재 4바이트가 할당되어 있는 상태에서 salary(11)를 쓰고 workId(1234)를 쓰려니 공간이 11 자리밖에 없어서 덮어씀.
//	// □□□□(11) -> □□□□(44434) 자리가 없어서 덮어씀! (4바이트) 
//
//	// cout << sJob.salary << endl;	// 2.1 / float salary 일 경우
//	
//	cout << sJob.salary << endl;	// 21
//	cout << sJob.workId << endl;	// 44434
//	// □□□□(21) | □□□□(44434) (8바이트)라 나눠쓰기 가능 
//
//
//	//cout << sizeof(uJob) << endl;	// 32바이트 -> name + salary + workId
//	//cout << sizeof(sJob) << endl;	// 40바이트 -> name + salary + workId
//
//}