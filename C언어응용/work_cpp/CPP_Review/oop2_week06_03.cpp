//// 팀 프로젝트의 경우 같은 단위의 문자열 사용 필요
//// C++ 스타일과 C 스타일을 호환하는 능력 필요
//// C 스타일 문자열 -> 묵시적 이용하여 C++ 스타일 변환 가능
//
//# include <iostream>
//using namespace std;
//
//int main() {
//	char cstyle[] = "Hi~";
//
//	string cppstyle;
//
//	cppstyle = cstyle;	// 묵시적 캐스팅	
//	// 메모리 상 복사 -> 별도의 메모리 공간 생성
//	cppstyle[0] = 'A';
//	// cstyle 은 변화 X	// cppstyle 변화 O 
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//}

// 팀 프로젝트의 경우 같은 단위의 문자열 사용 필요
// C++ 스타일과 C 스타일을 호환하는 능력 필요
// C 스타일 문자열 -> 묵시적 이용하여 C++ 스타일 변환 가능

//# include <iostream>
//using namespace std;
//
//int main() {
//	string cppstyle = "Hell!";
//	const char* cstyle = NULL;
//
//	// 문자열 얻어낼 함수 사용 , 인스턴스 생성 없이 바로 사용 가능
//	// cppstyle -> cstyle 로 변경
//	// c_str() -> cppstyle 메모리 보관 주소를 가져와서 사용
//	// 읽기 전용 형태 -> 그래서 const로 선언
//	// 값 변경 XXX
//	cstyle = cppstyle.c_str();
//
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//}

//# pragma warning(disable:4996)
//#include <cstring>
//# include <iostream>
//using namespace std;
//
//int main() {
//	string cppstyle = "Hell!";
//	char* cstyle = new char[cppstyle.size() + 1];
//
//	strcpy(cstyle, cppstyle.c_str());
//
//	cstyle[0] = 'Y';
//
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//	delete[] cstyle;
//	cstyle = NULL;
//
//}

//# pragma warning(disable:4996)
//# include <iostream>
//#include <cstring>
//#include <string>
//
//using namespace std;
//
//int main() {
//	char cstyle[3];		// 범위를 지정하고 받기 때문에 사이즈 넘어가면 오류 남. 
//	string cppstyle;	// 크기 상관없이 다 받을 수 있음.
//
//	//cin >> cstyle;	// 구분자가 스페이스라서 Inha University 를 쓰면 앞 단어는 cstyle, 뒤 단어는 cppstyle 에 들어감
//	//cin >> cppstyle;
//
//	// cstyle getlinge 해줌
//	cin.getline(cstyle, 3);	// cin 은 자신의 상태를 잘 살핌. 3개 이상 입력되면 fail 되도록 설정
//	cin.clear(); // 이어서 받을 수 있도록 해줌.
//
//	// cppstyle getline 해줌
//	getline(cin, cppstyle);	// string include 해줘야함	// 
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//
//}

// 코드를 소스파일에 한번에 넣으면 찾기도 어렵고 수정도 어려움
// 두꺼운 책 나눠서 들고 다닌다고 생각하면 됨.

// 헤더파일과 구현파일 나누기

#include <iostream>
#include "ex1.h"	// 지도 같은 역할 (Plus 함수에 대한 정보 들어있음)
using namespace std;


int main() {
	int r;
	r = Plus(3, 7);


}