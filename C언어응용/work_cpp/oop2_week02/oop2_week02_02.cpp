//#include <iostream>
//using namespace std;
//
//int main() {
//
//	//// auto (�Ѿ���� �� �߷��Ͽ� �ش� Ÿ������ ���۵ǵ��� ��)
//	//
//	//// auto f = 3.24f;		// float �ʱ�ȭ�� ���� �ڷ�Ÿ�� �߷�
//	////const auto f = 3.24f;	// const ���� �� auto�� const �Բ� ��� ����
//	//
//	////const auto f = 3.24f; // float���� ó�� (4����Ʈ)
//	//const auto f = 3.24;	// double �� ó�� (8����Ʈ)
//	//auto s = "test";	// string	// char �����ͷ� ó��
//
//
//	//// f = 3.14f; // const �� �����ؼ� ���� �Ұ�
//
//	//cout << sizeof(f) << "\t" << typeid(f).name() << endl;	// 4       float
//	//cout << sizeof(s) << "\t" << typeid(s).name() << endl;	// 8       char const* __ptr64	
//	//// s => character�� �����ͷ� ����(4����Ʈ)	// ! �� �� 8����Ʈ?!?!? ! 
//
//	//cout << f << endl;
//	//cout << s << endl;
//
//
//
//	//// void ������
//	//// �� ���α׷��Ӱ� void�� ���� �ּҸ� ����Ҷ� � Ÿ������ �޾Ҵ��� �˾ƾ��Ѵ�.
//	//// 
//	//// short a = 2;		// int a = 2; (�Ұ�)
//	//// short* ps;
//
//	//short a = 2;
//	//double b = 5.21;
//	//// int* ps;
//	//// ps = &a;	// (�� �� ������) ps �� a ���� ������	// ps �� a�� Ÿ���� ���ƾ��Ѵ�.
//	//// cout << *ps << endl;
//	//
//	//void* pv;
//	//pv = &a;	// �����°� �� ����
//	//	
//	//cout << *(short*)pv << endl;	// ����Ҷ� � �ڷ������� �˷������
//
//	//pv = &b;
//	//cout << *(double*)pv << endl;
//	//// cout << *(short*)pv << endl;	// -23593 ���
//	//// 8����Ʈ(double) �ڷ� �޾Ҵµ� 2����Ʈ(short)�� �о�� �ϴ� �̻��ϰ� ����� 
//	//// => ��� ������ � Ÿ�� ����Ұ��� �˷������
//
//	// �迭 & void ������
//
//	// char s[] = "Hello";
//	char s[] = { 'H', 'e', 'l', 'l', 'o', '\0' };	// �ڿ� 0 �� ������ ���ڰ� ������ ����
//	void* ps;
//	
//	// ps = &s[0];	// ps = s �� ���� �ǹ�
//	ps = s;
//
//	// cout << *(char*)ps << endl;	// H ���
//	
//	//cout << (char*)ps << endl;	// Hello ���
//	//cout << s << endl;			// Hello ���
//
//	for (int i = 0; i < sizeof(s); i++) {
//		cout << *((char*)ps + i);
//		// cout << *(char*)ps + i;	// H �� ���� �ƽ�Ű�ڵ� 72 �� ���� ���ؼ� ��µǰ� ���� // ���� ���·� ����
//	}
//
//	for (auto i = 0; i < sizeof(s); i++) {	// auto�ε� ��� ����
//		cout << *((char*)ps + i);
//		// cout << *(char*)ps + i;	// H �� ���� �ƽ�Ű�ڵ� 72 �� ���� ���ؼ� ��µǰ� ���� // ���� ���·� ����
//	}
//
//	// 64~67 ���� = 61 ���� ���� �ǹ�, ���� ��°�                                                                                                                              
//	
//
//}