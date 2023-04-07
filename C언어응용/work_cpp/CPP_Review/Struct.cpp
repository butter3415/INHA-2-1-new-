//#include <iostream>
//using namespace std;
//
//// ------------------------------------------------------------------
///* < 구조체 (Struct) >
//- 구조체 변수 선언과 동시에 초기화까지 완료
//- 변수 선언만도 가능.
//*/
//
//struct StudentInfo {
//	int id;
//	float grade;
//	char bloodType;
//} s3 = { 12223415, 4.1f, 'A' }, s4;
//
//int main() {
//	
//	//// 구조체 변수 만들기
//	//StudentInfo s1 = { 12223401, 4.2f, 'A' };
//	//StudentInfo s2 = { 12224305, 3.9f, 'B' };
//
//	//cout << s1.grade << endl;		// 4.2f
//	//cout << s2.id << endl;			// 12224305
//	//cout << s3.bloodType << endl;	// A
//
//	//// s4 구조체 변수 선언만 함. 초기화 X
//	//s4.id = 12224301;
//	//s4.grade = 3.8f;
//	//s4.bloodType = 'AB';
//	//// 초기화 O 
//
//	//s4 = s2;
//	//// 구조체간 복사
//	//// 서로 다른 메모리값 복제
//
//	//cout << s4.bloodType << endl;	// s4에 s2로 덮어썼으니 s4의 bloodType은 B
//
//	//s4.bloodType = 'O';
//	//
//	//cout << s4.bloodType << endl;	// O
//	//cout << s2.bloodType << endl;	// B
//
//
//
//}