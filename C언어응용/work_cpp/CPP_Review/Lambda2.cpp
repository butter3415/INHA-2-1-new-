//#include <iostream>
//using namespace std;
//
//int main() {
//	//short c = 5, d = 7;
//	//auto inha = [&](float a, int b) -> int {
//	//  [&] ��ü������ ������ ĸ��
//	//	c = -5;
//	//	// d = 8;	// [&c, d] �� ���� �Ұ�
//	//	d = 8;
//	//	
//	//	// ĸ�ĺ���� [c,d] �� ���¿��� c = -11 ���� ���� �����ؼ� �����Ϸ��� �ϴ� ��
//	//	// [&c, d]�� �ۼ��ϸ� ���� ���� �Ѵ�.
//	//	// [&] �θ� �ۼ����൵ ���� ���� -> ��� ���� ���� �ٲ� �� �ֵ��� ����
//
//	//	return a + b + c + d;
//	//};
//
//	short c = 5, d = 7;
//	auto inha = [=](float a, int b) -> int {
//		// [=] ��ü������ ������ ĸ��
//
//		return a + b + c + d;
//	};
//
//	cout << typeid(inha).name() << " : " << inha(1.9f, 2) << endl;	// class Ÿ��
//	cout << c << endl; 
//
//	//short c = 5, d = 7;
//	//auto inha = [=](float a, int b) -> int {
//	//	// [=] ��ü������ ������ ĸ��
//
//	//	return a + b + c + d;
//	//}(1.9f, 2);
//
//	//cout << typeid(inha).name() << " : " << inha << endl;	// int Ÿ��
//	//cout << c << endl;
//
//}