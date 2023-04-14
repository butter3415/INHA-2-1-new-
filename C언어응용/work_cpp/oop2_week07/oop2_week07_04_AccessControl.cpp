//#include <iostream>
//using namespace std;
//
///*	< 접근제한자 >
//- 3개의 접근제한자가 존재
//- 접근 제한자 지정 안하면 private으로 동작
//*/
//
//class AccessControl {
//public:
//	char publicData;
//	void publicFunc() {};
//
//protected:
//	int protectedData;
//	void protectedFunc() {};
//
//private:	// 금고는 은행 직원이 꺼내줌
//	float privateData;
//	void privateFunc() {};
//
//public:		// 내부적으로 접근할 수 있는 연결 통로
//	void AccessAllMembers();
//
//};
//
//void AccessControl::AccessAllMembers() {
//	publicData = 'a';
//	publicFunc();
//
//	protectedData = 100;	// 실패 (권한 X)
//	protectedFunc();		// 실패 (권한 X)
//
//	privateData = 4.5f;	// 실패 (권한 X)
//	privateFunc();		// 실패 (권한 X)
//}
//
//
//int main() {
//	AccessControl ac;
//	ac.AccessAllMembers();
//
//	//ac.publicData = 'a';
//	//ac.publicFunc();
//
//	//ac.protectedData = 100;	// 실패 (권한 X)
//	//ac.protectedFunc();		// 실패 (권한 X)
//
//	//ac.privateData = 4.5f;	// 실패 (권한 X)
//	//ac.privateFunc();			// 실패 (권한 X)
//
//}