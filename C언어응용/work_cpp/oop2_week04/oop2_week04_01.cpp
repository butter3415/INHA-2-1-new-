//#include <iostream>
//using namespace std;
//
////enum { JOB_NECROMANCER, JOB_BARBARIAN, JOB_WIZARD };	// { 0, 1, 2 }
//
//// enum JOB_KINDS { JOB_NECROMANCER, JOB_BARBARIAN = 2, JOB_WIZARD };	// { 0, 2, 3 }	=> JOB_WIZARD : 3
//
//enum JOB_KINDS { JOB_NECROMANCER = 10, JOB_BARBARIAN, JOB_WIZARD };	// { 0, 2, 3 }
//
//// 열거체 -> 가독성, 숫자를 기억해야 한다던지 등의 문제로부터 자유롭게 해줌
////		-> 값 자체는 수치의 의미도 가짐.
////        -> 하나의 타입이다. 
//
//
//struct Character {
//	JOB_KINDS jobType;	// 0: 강령술사, 1: 야만용사, 2: 마법사	
//					// 숫자와 클래스간의 관계를 파악하기 어렵다. 
//					// ↑↑ 위 주석 구문이 없으면 2가 뭔지, 1이 뭔지 알 수가 없다.
//					// 이를 해결하기 위해 열거체를 사용한다.
//};	
//
//
//int main() {
//	Character c;
//	c.jobType = JOB_WIZARD;
//
//	if (c.jobType == JOB_WIZARD) {
//		cout << "비전격류!" << endl;
//	}
//
//
//
//
//}

// ===========================================================================

//#include <iostream>
//using namespace std;
//
//enum Color { RED, GREEN, BLUE, YELLOW };
//
//enum Java { PASS, FAIL };
//enum Python { PASS, FAIL };
//
//// 열거체는 int 타입으로 동작
//// 산술 연산은 불가 / 비교 연산은 가능
//
//
//int main() {
//	Color c1 = RED;
//	Color c2;
//
//
//	// 열거체 특징 [1] 산술 연산 불가
//	//c1 = GREEN + BLUE;
//	// c1 = c1 + 2;
//
//	// 에러 발생 [ int 형식의 값을 Color 형식의 엔터티에 할당할 수 없습니다. ]
//
//	// --------------------------------------------------------------------------
//	 
//	// 열거체 특징 [2] 정수 대입 불가
//	// c2 = 3;
//
//	// --------------------------------------------------------------------------
//
//	// 열거체 특징 [3] 반대의 경우 대입과 산술 연산이 가능
//	//				   -> 묵시적(암시적) Casting 진행되어서 가능
//	// int 타입 변수에 BLUE 넣어도 에러 발생 X
//
//
//	int n = BLUE;			// 2
//	int o = GREEN + BLUE;	// 3 ( 1 + 2 )
//
//	cout << n << endl;
//	cout << o << endl;
//
//	// 명시적 Casting 후 대입 가능
//
//	Color c3 = (Color)1000;	// BLUE
//
//	cout << c3 << endl;
//
//
//}