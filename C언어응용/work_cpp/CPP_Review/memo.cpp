//// Old Style

//#include <iostream>
//using namespace std;
//
//// namespace 를 통해서 별도의 물리적인 공간을 만들어서 해당 변수가 개입하지 못하도록 하기
//// 다른 폴더를 만들어서 같은 이름의 PASS, FAIL 이어도 충돌이 나지 않도록 하는 것
//
//namespace sophomore {
//	enum Java { PASS, FAIL };
//}
//
//namespace freshman {
//	enum Python { PASS, FAIL };
//}
//
//int main() {
//
//
//
//}

// =========================================================================================
//
//// Modern Style(enum class c++11)
//
//#include <iostream>
//using namespace std;
//
//// enum class 로 작성해서 사용 가능
//// namespace 를 사용하면 폴더를 새로 만들어야 하는 반면 enum class 는 간단하게 사용 가능
//
//// enum 까지 작성했을 때는 묵시적 변환이 이루어지는 등 약한 결합이 나타난다 (정수형 타입의)
//// 그러나 enum class 로 묶게 되면 강한 결합이 이루어져 변환이 불가능하다 
//// => enum 묶으면 case 0 : 사용 가능 /// enum class 묶으면 case 0 : 사용 불가!  => case Cplusplus::PASS : 형식으로 작성해야함
//// enum class -> 반드시 열거형 타입의 변수 이용해야 한다!
//// 암시적, 묵시적 변환을 막을 수 있다.
//
//enum class Java { PASS, FAIL };
//enum class Python { PASS, FAIL };
//enum class Cplusplus { PASS, FAIL };
//
//
//int main() {
//	Cplusplus c = Cplusplus::PASS;
//
//	switch (c) {
//		case 0 :
//			cout << "합격!";
//			break;
//		case Cplusplus::FAIL :
//			cout << " 재수강!";
//	}
//
//
//}

// =========================================================================================

// reference (변수의 별명)
// 변수가 이름을 하나 더 가짐
// 포인터와 유사한 파생형, 차이는 발생
// 자료타입& 변수이름 = 대상변수;	// => 복사 생성자 (const Cicle& c);
// const 변수 / 변수 const / const 변수 const => 방식과 동일

// 레퍼런스는 별도의 메모리 할당을 받지 않고 참조만 한다.
// 포인터는 별도의 메모리를 할당 받아서 실행 시킨다.

// rule1. 반드시 선언하는 시점에 초기화 되어야 한다.
// rule2. 처음 정의 외에는 다른 참조 사용 불가
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	// 자료타입& 변수이름 = 대상변수;
//	//short s = 5;
//
//	//short& rs = s;	// 레퍼런스 변수
//	//short* ps = &s; // 포인터
//
//	//cout << s << " " << &s << endl;		// 5 00000020CB2FFB54
//	//cout << rs << " " << &rs << endl;	// 5 00000020CB2FFB54	// s와 주소 동일
//	//cout << *ps << " " << &ps << endl;	// 5 00000020CB2FFB98
//
//	//int a = 1; 
//	//int b = 2;
//	//int& c = a;	// rule 1 (초기화)	
//
//	//c = 3;
//	//c = b;	// rule 2	// b를 참조 하는 것이 아니라 b의 값을 대입한다.
//	//c = 4;
//
//	//cout << a << endl;
//		
//	/// [c의 변화] int& c = a;    c = 3;    c = b;    c = 4;
//	///              1      ->      3    ->   2   ->    4
//	/// [a의 변화] int& c = a;    c = 3;    c = b;    c = 4;
//	///              1      ->      3    ->   2   ->    4
//	/// [b의 변화]                          c = b;    c = 4;
//	///                                       2   ->    2      <- c 값 변경에 따른 영향 x
//
//	// =========================================================================================
//
//	//// const 레퍼런스 변수 : 값 변경 X
//	////					   : 상수 초기화 가능
//	//// 함수와 함께 사용할때 시너지 효과 up!
//
//	//int a = 1;
//	//int b = 2;
//	//const int& c = a;	// rule 1 (초기화)	
//
//	//// c = 3;	// 오류 -> const 레퍼런스 변수는 변경 불가
//	//// c = b;	// 오류 -> const 레퍼런스 변수는 변경 불가
//	//// c = 4;	// 오류 -> const 레퍼런스 변수는 변경 불가
//
//	//cout << c << endl;
//	//
//	//a = 5; 
//
//	//cout << c << endl;	// 참조는 계속 하므로 참조하고 있던 a 가 바뀌면 c 참조값도 변경되어 나옴
//
//	int a = 5;
//	// int& ra = 9;		// 불가
//	const int& ra = 9;	// 가능 ( 9 참조 )	->  수정 불가
//
//	cout << ra << endl;
//
//	// 레퍼런스 변수의 대상 변수는 변수 이름이 와야 정상
//	// 그러나 const 를 붙이면 값으로 대상 변수 역할 가능	
//
//}
