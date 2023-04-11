////#include <iostream>
////using namespace std;
////
/////* < 열거체 enum >
////- 가독성 등의 문제로부터 자유롭게 해줌
////- 값 자체는 수치의 의미를 가짐
////- 하나의 타입으로 만들어서 사용 가능
////*/
////
//////enum { JOB_NECROMANCER, JOB_BARBARIAN, JOB_WIZARD };	// 0, 1, 2
////
//////enum { JOB_NECROMANCER, JOB_BARBARIAN = 2, JOB_WIZARD };	// 0, 2, 3	// 인덱스번호 지정 가능
////
////enum JOB_KINDS { JOB_NECROMANCER = 10, JOB_BARBARIAN, JOB_WIZARD };	// 10, 11, 12 
////
////struct Character {
////	JOB_KINDS jobType;	// 0 : 강령술사, 1 : 야만용사, 2 : 마법사
////						// 숫자와 클래스 간 관계 파악 어려움 -> 열거체 사용
////};
////
////
////int main() {
////	Character c;
////
////	//c.jobType = 2;
////
////	//if (c.jobType == 2) {	// 14라인 주석이 없으면 숫자와 클래스 간 관계 파악이 어렵다
////	//	cout << "마법사 : 비전격류!" << endl;
////	//}
////
////	// 
////	//c.jobType = JOB_WIZARD;
////	//if (c.jobType == JOB_WIZARD) {	// enum 사용하면 가독성 및 쓸데없는 숫자 용도 기억 등에서 자유롭게 해줌
////	//	cout << "마법사 : 비전격류!" << endl;
////	//}
////
////	//c.jobType = JOB_WIZARD;
////	//if (c.jobType == 12) {	// 실행 O
////	//	cout << "마법사 : 비전격류!" << endl;
////	//}
////
////}
//
//
// 
//#include <iostream>
//using namespace std;
//
// 
///* < 열거체 enum >
//-int 타입으로 동작	// 인덱스 값이 들어가니까
//- 산술 연산 불가	// BLUE 자체로는 연산 불가능
//- 비교 연산 가능	// BLUE == BLUE 비교 가능
//* /
// 
//enum Color { RED, BLUE, GREEN, PINK, SKY };
//
//int main() {
//	Color c1 = RED;
//	Color c2;
//
//	//---------------------------------------------------------------------------------------
//	// 특징 [1] 산술 연산 불가
//	// [ error : int 형식의 값을 Color 형식의 엔터티에 할당할 수 없습니다. ]
//
//	// c1 = GREEN + RED;	// 불가(연산)
//	// c1 = c1 + 2;			// 불가(연산)
//
//
//	//---------------------------------------------------------------------------------------
//	// 특징 [2] 정수 대입 불가
//	 
//	// c2 = 3;				// 불가(정수 대입)
//
//	//---------------------------------------------------------------------------------------
//	// 특징 [3] 반대의 경우 대입과 산술 연산 가능
//	//         (묵시적(암시적) Casting 진행되어 가능)
//
//	int b = BLUE;	// 1
//	int o = GREEN + b;	// 3 = 2 + 1
//
//	cout << "BLUE : " << b << endl;
//	cout << "GREEN + BLUE : " << o << endl;
//
//	Color c3 = (Color)60;
//
//	cout << c3 << endl;
//	
//}