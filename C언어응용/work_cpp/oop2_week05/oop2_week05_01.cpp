//// Lambda Expression ���� ǥ����(C++ 11, 14)
//// [ĸ�ĺ�] (�Ű���������Ʈ) -> ����Ÿ��{�Լ� �ٵ�}
//// �̸����� �Լ��� �Ű������� �ٸ� �Լ��� ����ֱ⵵ ��.
//// �ڵ尡 ª�� �����ϴ�. �������� ����
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	[]() -> void {};
//	[]() {};	// ����Ÿ�� ���� ����, ȭ��ǥ ���� ����
//	[] {}; // �� �ʿ��Ѱ� ĸ�ĺ�, �Լ��ٵ�
//
//	//[] {cout << "Hi Lambda!" << endl; };	// ������ ������ ����� �ȵ�.
//
//	//// �ǳ��� �Ұ�ȣ ���� ����ǥ������ ��� �����Ű�� ����
// 
//	//[] {cout << "Hi Lambda!" << endl; }();
//
//	//// ������ ��Ƽ� ���
//	//auto inha = [] {cout << "Hi Lambda!" << endl; };
//	//inha();
//
//	////auto inha = []() { return 5 * 10; };
//	//cout << inha() << endl;
//
//	//// ���� �����ְ� ó���ϴ� ���
//	//auto inha = [](int a, int b) { return a * b; };
//	//cout << inha(5, 10) << endl;
//
//	//// -> ����Ϸ��� ����Ÿ�� �������� ��.
//	//auto inha = [](int a, int b) -> int { return a * b; };
//	//cout << inha(5, 10) << endl;
//
//	//// �μ��� ���� �Է��Ͽ� ��� ����
//	//auto inha = [](int a, int b) -> int { return a + b; }(5, 10);
//	//cout << inha << endl;
//
//	//auto inha = [](float a, int b) -> int { return a + b; };
//	//cout << inha(7.7f, 2) << endl;	// 9 ����
//
//	//auto inha = [](float a, int b) -> float { return a + b; };
//	//cout << inha(7.7f, 2) << endl;	// 9.7 ����
//
//	//auto inha = [](float a, int b) { return a + b; };
//	//cout << inha(7.7f, 2) << endl;	// 9.7 ����
//
//	// ĸ�ĺ�� : �ٱ� ������ �̿� �����ϵ��� ��
//	//short c = 5, d = 7;
//	//auto inha = [c, d](float a, int b) -> int {
//	//	return a + b + c + d;
//	//};
//	//cout << inha(1.9, 2) << endl;	// 15 ���
//
//	//short c = 5, d = 7;
//	//auto inha = [c, d](float a, int b) {
//	//	return a + b + c + d;
//	//};
//	//cout << inha(1.9, 2) << endl;	// 15.9 ���
//	
//
//}

/*
[ĸ�ĺ��](�Ű����� ����Ʈ) -> ����Ÿ�� {�Լ� �ٵ�};
�Լ��� �͸��Լ�
�̸����� �Լ�
[ĸ�ĺ��] {�Լ��ٵ�} �� �ʿ�!!!
*/