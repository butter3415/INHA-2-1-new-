//// �Լ� : ���, ����, Function, ���� �����ָ� ó���ؼ� �����ϴ� ����
//// �����Լ� ����, �Ʒ��� ��ġ ����
//// ���������� �����Ϸ��� �о� ���� ������ ���� �Լ����� Hello() �Լ��� �� �Ʒ� ������ ����
//// ���� ���� �Լ� �Ʒ��� �Լ��� �ۼ��ϰ� ���� ������ Ÿ�� �ۼ��ϸ鼭 �Լ��� �����Ѵ�.
//
////#include <iostream>
////using namespace std;
////
////void Hello(); // �λ�
////// ���� ���� ���� Ȯ���ϴ� ���
////
////int main() {
////	Hello();	// �Լ� ȣ��
////
////}
////
////
////void Hello() {
////	cout << "�ȳ�~!" << endl;
////
////}
//
//// =======================================================
//
//// �Ű����� �Լ� ���� / �Ű����� Ȱ�� ����
//
//// �Լ� ������ ���
//// -> ���� �������� ���� Ÿ�԰� �Ű����� Ÿ�� ��ġ ���� ��� �Ѵ�.
//// -> ���� Ÿ��(������ �ּ�) (�Ű����� Ÿ��);
//
//#include <iostream>
//using namespace std;
//
//void Hello(int n); // �λ�
//int Factorial(int f);	// ���丮�� �Լ�, �ݺ��� �̿�
//int FactorialRecursion(int); // ���丮�� �Լ�, ����Լ� �̿�
//
//// �������ش�� ����ϱ�
//
//int main() {
//	int(*pFact)(int);
//	// int Ÿ�� (pFact �� ������) (int Ÿ��)
//	void(*pHi)(int);	//Hello �Լ��� ���� �谳��� �Լ�
//
//	// pFact = &Factorial;
//	// pFact = &Hello; // Hello �� ����, �Ű����� Ÿ�� ��ġ���� �ʾƼ� ������
//
//	pFact = &Factorial;
//	pHi = &Hello;
//
//	int in;
//	cin >> in;
//
//	cout << (*pFact)(in) << endl;
//	(*pHi)(in);
//	
//
//	cout << FactorialRecursion(in) << endl;
//	cout << Factorial(in) << endl;
//	Hello(2);	// �Լ� ȣ��
//
//}
//
//
//void Hello(int n) {
//	cout << "�ȳ�~!" << " " << n << endl;
//
//}
//
//int Factorial(int f) {
//	int result = 1;
//
//	for (int i = 1; i <= f; i++) {
//		result = result * i;
//
//	}
//	return result;
//}
//
//int FactorialRecursion(int f){
//	// f = 4
//	// f = 3
//	// f = 2
//	// f = 1
//	if (f <= 1) {
//		return 1;
//	}
//	else {
//		return f * FactorialRecursion(f - 1);
//		// 4 * FactorialRecursion(3)
//		// 3 * FactorialRecursion(2)
//		// 2 * FactorialRecursion(1)
//		
//	}
//
//}