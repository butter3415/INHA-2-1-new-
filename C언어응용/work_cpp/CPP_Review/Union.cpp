#include <iostream>
using namespace std;
/* <Union>
- 공용체 (가장 큰 사이즈 멤버 변수 크기로 메모리 할당)
- 공간 최소화
- 많이 사용하지 않음
*/

//---------------------------------------------------------------------------------------
// Union 공용체

union JobUnion {
	char name[32];	// 32바이트
	long salary;	// 4바이트
	int workId;		// 4바이트
} uJob;

//---------------------------------------------------------------------------------------
// Struct 구조체

struct JobStruct {
	char name[32];	// 32바이트
	long salary;	// 4바이트
	int workId;		// 4바이트
} sJob;

//---------------------------------------------------------------------------------------

int main() {
	uJob.salary = 11;
	uJob.workId = 3415;

	cout << uJob.salary << endl;	// 3415
	cout << uJob.workId << endl;	// 3415
	
	/* 
	★ Union ->가장 큰 멤버 변수 크기로 메모리 할당
	(가장 큰 변수 크기로 전체 공간 할당 /// 현재 전체 크기 : □□□□)
	-> 4바이트 할당 상태에서 salary(11) 쓰고, workId(3415) 쓰려니 공간 부족하여 덮어씀
	*/

	cout << endl;

	//---------------------------------------------------------------------------------------

	sJob.salary = 21;
	sJob.workId = 2223415;

	cout << sJob.salary << endl;	// 21
	cout << sJob.workId << endl;	// 2223415

	/*
	★ Struct 현재 전체 크기 : □□□□ | □□□□ )
	-> salary(21) 쓰고, workId(2223415) 따로 쓰기 가능
	*/

	cout << endl;

	//---------------------------------------------------------------------------------------

	cout << sizeof(uJob) << endl;	// 32바이트	(name -> 32바이트)
	cout << sizeof(sJob) << endl;	// 40바이트 (name + salary + workId -> 40바이트)

}