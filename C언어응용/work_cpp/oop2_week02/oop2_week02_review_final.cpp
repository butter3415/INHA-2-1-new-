///*
//< �ڷ���, ����ǥ�����(2�� ������), �ڷ��� SIZE >
//int Ÿ�� : 4����Ʈ(32��Ʈ)
//short Ÿ�� : 2����Ʈ(16��Ʈ) (-2�� 15�� ~ +2�� 15�� -1)
//		   : �޸��� ������ ���� ǥ���� ���
//		   : signed (-2�� 15�� ~ +2�� 15�� -1)
//		   : unsigned (0 ~ 2�� 16�� -1)
//
//
//const : ���� �Ұ�(���)
//*/
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	// int k =5;
//	const int k = 5; 
//	cout << k << endl;
//
//	//short s = 65535;
//	unsigned short s = 65535;
//	cout << s << endl;
//
//}

// ============================================================

///*
//< �迭 >
//�迭 �ۼ� �Ҷ� �ʱ�ȭ���� ������ �����Ⱚ�� ���´�.
//*/
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	//int arr[4];
//	//arr[0] = -9;
//	//arr[3] = 3000;
//	//cout << arr[0] << endl;
//
//	//int arr[4] = { 0 };	// �⺻ �� 0
//	//arr[0] = -9;
//	//arr[3] = 3000;
//	//cout << arr[0] << endl;
//
//	//for (int i = 0; i < 4; i++) {
//	//	cout << arr[i] << endl;
//	//}
//
//	// -------------------------------------
//	// < ������ ���� >
//	// �迭�� �� ���ҵ��� �޸� �ּҴ� 4����Ʈ�� �����Ѵ�.
//	// �迭���� ������ ���
//	// 
//
//	int arr[4] = { -9, 0, 0, 30000 };
//	int* parr = &arr[0];
//
//	for (int i = 0; i < 4; i++) {
//		// cout << *( parr + i) << endl;
//		// cout << parr[i] << endl;
//		// cout << arr[i] << endl;
//		cout << *(arr + i) << endl;
//	}
//
//}

// ============================================================

///*
//< auto ���� >
//: Ÿ�� �ڵ� ����
//: �迭 �տ��� auto ��� �Ұ�
//: auto Ű����� const�� �Բ� ��� ����
//: ������ ũ��� 8����Ʈ
//*/
//
//#include <iostream>
//using namespace std;
//
////int main() {
////	double arr[4]{ -9, 0, 0, 3000 };
////	auto* parr = &arr[0];
////
////	for (auto i = 0; i < 4; i++) {
////		cout << *(arr + i) << endl;
////	}
////
////
////}
//
//int main() {
//	const auto f = 3.24f;
//	auto s = "test";
//
//	// f = 3.14f;
//	cout << sizeof(f) << "'\t" << typeid(f).name() <<  endl;
//	cout << f << endl;
//	cout << sizeof(s) << "'\t" << typeid(s).name() << endl;
//	cout << s << endl;
//
//}

// ============================================================

/*
< void ������ >
: ���� ��� � Ÿ�Ե� �� �޴´�.
*/

# include <iostream>
using namespace std;

int main() {

	//short a = 2;
	//double b = 3.14;
	//short* ps;
	//void* pv;

	//// ps = &a;

	//pv = &a;

	//// cout << *ps << endl;
	//cout << *(short*)pv << endl;

	//pv = &b;
	//cout << *(double*)pv << endl;

	char s[] = "Hello";
	// char s[] = { 'H', 'e', 'l','l','o', 0 };

	void* ps;

	ps = &s[0];
	ps = s;

	for (int i = 0; i < sizeof(s); i++) {
		cout << *((char*)ps + i) << " ";
	}


	//cout << (char*)ps << endl;
	//cout << s << endl;



}