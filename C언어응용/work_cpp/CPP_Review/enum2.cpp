// Old Style (namespace)

// namespace �� ���� ������ �������� ������ ����� �ش� ������ �������� ���ϵ��� �ϱ�
// �ٸ� ���� ����� ���� �̸��� PASS, FAIL �̾ �浹�� ���� �ʵ��� ��
// �ش� ���� ������ش�~ ����

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
//- enum �� ���� ���� ���� -> �ε��� ���� �Ұ�
//(PASS �� PASS �� ����ؾ� �ϰ�, 0�� �� �� ����.)
//- �ݵ�� ������ Ÿ���� ������ �̿��ؾ� �Ѵ�.
//- �Ͻ���, ������ ��ȯ�� ���� �� �ִ�.
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
//	Cplusplus c = Cplusplus::PASS;	// Cplusplus ���� PASS �ҷ����� ����
//
//	switch (c){
//		case Cplusplus::PASS :
//			cout << "�հ�!" << endl;
//			break;
//		case Cplusplus::FAIL :
//			cout << "�����!" << endl;
//			break;
//	}
//
//
//}