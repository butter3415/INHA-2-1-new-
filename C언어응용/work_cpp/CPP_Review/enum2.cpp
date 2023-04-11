// Old Style (namespace)

// namespace 를 통해 별도의 물리적인 공간을 만들어 해당 변수가 개입하지 못하도록 하기
// 다른 폴더 만들어 같은 이름의 PASS, FAIL 이어도 충돌이 나지 않도록 함
// 해당 폴더 만들어준다~ 느낌

//#include <iostream>
//using namespace std;
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
//}

// ==================================================================

// Modern Style (enum class)

///*
//- enum 에 비해 강한 결합 -> 인덱스 전달 불가
//(PASS 면 PASS 로 사용해야 하고, 0이 될 수 없다.)
//- 반드시 열거형 타입의 변수를 이용해야 한다.
//- 암시적, 묵시적 변환을 막을 수 있다.
//
//*/
//
//#include <iostream>
//using namespace std;
//
//enum class Java { PASS, FAIL };
//enum class Python { PASS, FAIL };
//enum class Cplusplus { PASS, FAIL };
//
//int main() {
//	Cplusplus c = Cplusplus::PASS;	// Cplusplus 내의 PASS 불러오기 형식
//
//	switch (c){
//		case Cplusplus::PASS :
//			cout << "합격!" << endl;
//			break;
//		case Cplusplus::FAIL :
//			cout << "재수강!" << endl;
//			break;
//	}
//
//
//}