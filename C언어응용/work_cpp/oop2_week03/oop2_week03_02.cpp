# include <iostream>
using namespace std;

// 구조체 사용 이유 : 공통된 부분을 하나의 그룹으로 묶어서 자료 관리 하기 위함 
// 배열은 타입이 같아야 하지만 구조체는 아니다.
// 구조체는 다 퍼블릭

//struct Student {
//	int id;			// 4바이트
//	char name[20];	// 20바이트	// 1바이트 * 20개 = 20 바이트
//	float grade[2]; // 8바이트	// 4바이트 * 2개 = 8바이트
//};
//
//int main() {
//
//	// 구조체 배열
//
//	Student sInfos[4] = {
//		{12223415, "김지혜", {4.1f, 4.2f}},
//		{12223409, "김설화", {3.9f, 4.3f}},
//		{12223402, "조희령", {3.8f, 4.2f}},
//		{12223437, "권구준", {3.7f, 4.1f}}
//	};
//
//	for (auto i = 0; i < 4; i++) {
//		cout << sInfos[i].id << " ";
//		cout << sInfos[i].name << " ";
//		cout << sInfos[i].grade[0] << " ";
//		cout << sInfos[i].grade[1] << endl;
//	}
//
//	
//}

//==============================================================================

//struct Rectangle {
//	int x, y;
//	int w, h;
//};
//
//int main() {
//	// 구조체 포인터
//	Rectangle r = { 15, 10, 50, 70 };
//	Rectangle* pr = &r;					// 구조체 변수에 주소를 받음
//	
//	cout << "x : " << r.x << " = " << (*pr).x << endl;	// 결과 동일 / 연산자 우선순위가 괄호를 먼저 처리하기 때문에 괄호 안에 * 찍기
//
//	// 화살표 연산자
//	cout << "y : " << (*pr).y << " = " << pr->y << endl;	// y값  / pr->y : pr 이 가리키는 y
//	
//	cout << "h : " << (*pr).h << " = " << pr->h << endl;
//	pr->h = 40;	// h 값 변경
//	cout << "h : " << (*pr).h << " = " << pr->h << endl;
//
//	(*pr).x = 100;
//	cout << "x : " << r.x << " = " << pr->x << endl;
//
//
//}

//==============================================================================

