//#include <iostream>
//using namespace std;
//
//class NeedConstructor {
//public:
//	const int max;	// �ݵ�� �ʱ�ȭ ���� �־�� ��
//	int& ref;		// �ݵ�� �ʱ�ȭ ���� �־�� ��	// ó�� ������ �� ����� �ٸ� ���� ���� ����
//	int temp;
//
//	NeedConstructor();
//	NeedConstructor(int cnt, int& number);
//
//};
//
//NeedConstructor::NeedConstructor()
//	:max(100), ref(temp) {	
//	// max = 1000;	// �Ұ�
//	// const �����̱� ������ ������ ��������� �� �ʱ�ȭ�� �Ǿ�� �Ѵ� -> ������ �ʱ�ȭ ����Ʈ ���
//
//	temp = 10;
//}
//
//NeedConstructor::NeedConstructor(int cnt, int& number) 
//: max(cnt), ref(number) {
//	temp = 10;
//}
//
//
//int main() {
//
//	//NeedConstructor cr;
//	// cr.max = 1000;	// const ���� (���) ���� �Ұ�
//	// cr.ref = cr.temp;
//	
//	int num = 400;
//	NeedConstructor cr(500, num);
//
//
//	cout << cr.max << endl;
//	cout << cr.ref << endl;
//
//}