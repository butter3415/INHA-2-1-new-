//#include <iostream>
//using namespace std;
//
///*	< ���������� >
//- 3���� ���������ڰ� ����
//- ���� ������ ���� ���ϸ� private���� ����
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
//private:	// �ݰ�� ���� ������ ������
//	float privateData;
//	void privateFunc() {};
//
//public:		// ���������� ������ �� �ִ� ���� ���
//	void AccessAllMembers();
//
//};
//
//void AccessControl::AccessAllMembers() {
//	publicData = 'a';
//	publicFunc();
//
//	protectedData = 100;	// ���� (���� X)
//	protectedFunc();		// ���� (���� X)
//
//	privateData = 4.5f;	// ���� (���� X)
//	privateFunc();		// ���� (���� X)
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
//	//ac.protectedData = 100;	// ���� (���� X)
//	//ac.protectedFunc();		// ���� (���� X)
//
//	//ac.privateData = 4.5f;	// ���� (���� X)
//	//ac.privateFunc();			// ���� (���� X)
//
//}