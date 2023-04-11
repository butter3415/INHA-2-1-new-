/* < Lambda Expression ���� ǥ���� >
[ĸ�ĺ�] (�Ű����� ����Ʈ) -> ����Ÿ�� {�Լ� �ٵ�}
 
 - [ĸ�ĺ��] {�Լ��ٵ�} �ʼ� ���

 - �̸� ���� �Լ��� �Ű������� �ٸ� �Լ��� ����ֱ⵵ ��.
 - �ڵ尡 ª�� �����ϴ�.
 - �������� ����

*/
# include <iostream>
using namespace std;

int main() {
	[] () -> void {};
	[]() {};	// ����Ÿ��, ȭ��ǥ ���� ����
	[] {};		// �ʼ� ��� : [ĸ�ĺ�] {�Լ��ٵ�}

	[] {cout << "1. Hi Hello Lambda!" << endl; };
	// �� �ڵ�� ���� O ��� X

	[] {cout << "2. Hi Hello Lambda!" << endl; }();
	// �� �ڵ�� ���� O ��� O

	// ������ ��� ���
	auto inha = [] {cout << "Hi Inha! " << endl; };
	inha();

	// ���ϰ��� ������, ���� ��� �ʿ�
	auto fifty = []() {return 5 * 10; };
	cout << fifty() << endl;

	// ���� �����ְ� ó���ϴ� ���
	auto inha2 = [](int a, int b) -> int {return a * b; };
	cout << inha2(5, 10) << endl;

	// -> ����Ϸ��� ����Ÿ�� �������� ��
	auto inha3 = [](int a, int b) -> int {return a * b; };
	cout << inha3(5, 10) << endl;

	// �μ� ���� �Է��Ͽ� ��� ����
	auto inha4 = [](int a, int b) -> int {return a + b; }(5, 10);
	cout << inha4 << endl;

	auto inha5 = [](float a, float b) -> float {return a + b; };
	cout << inha5(5, 10) << endl;

	auto inha6 = [](float a, float b) {return a + b; };
	cout << inha6(5.5, 10.0) << endl;


	short c = 5, d = 7;

	auto inha7 = [c, d](float a, int b) -> int {
		return a + b + c + d;
	};

	cout << inha7(5.2, 8) << endl;

}