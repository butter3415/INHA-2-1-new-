//#include <iostream>
//using namespace std;

// �� [1]�� �ڵ�� [2]�� �ڵ� ����
//  �ؽ�Ʈ ����� ����� ����

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

// ���� ���翡 ���� ������� ���δ�.
// �ζ��� �Լ� 
// void protectedFunc() {}; / void privateFunc() {}; -> ���� ����
// ���� �������ְ� �Ʒ����� ��Ȯ�� �ۼ����ֱ� ����
// �������� ��� ����

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
- �ζ��� �踮��� ���� ����� ���ÿ� �ʱ�ȭ ����
- �Լ��� ��� �����߾��� �ζ��� Ű���带 �������� ��� ����
*/


int main() {
	Test aa;
	cout << aa.a << endl;
}

