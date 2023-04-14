//#include <iostream>
//using namespace std;

// ↓ [1]번 코드와 [2]번 코드 동일
//  텍스트 복사와 비슷한 느낌

// [1] ------------------------------------
//inline void Test(){
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//}
//
//int main() {
//	Test();
//}

// [2] ------------------------------------

//int main() {
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//}

// ---------------------------------------

// 인자 복사에 대한 오버헤드 줄인다.
// 인라인 함수 
// void protectedFunc() {}; / void privateFunc() {}; -> 같은 동작
// 먼저 선언해주고 아래에서 정확히 작성해주기 때문
// 변수에도 사용 가능

//inline void Test(){
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//}
//
//int main() {
//	Test();
//}

// =================================================================

// inline variable keywore(C++ 17)
#include <iostream>
#include "Test.h"
using namespace std;

/* 
- 인라인 배리어블에 따라 선언과 동시에 초기화 가능
- 함수만 사용 가능했었던 인라인 키워드를 변수에도 사용 가능
*/


int main() {
	Test aa;
	cout << aa.a << endl;
}

