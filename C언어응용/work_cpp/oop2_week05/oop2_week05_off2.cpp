#include <iostream>
using namespace std;

// stack memory (feat. reverse array)
//char* reverseString(const char* src, int size) {
//	char reverse[5];	// stack memory ���� �Ҵ�
//
//	for (int i = 0; i < size; i++) {
//		reverse[i] = src[size - i - 1];
//	}
//
//	reverse[size] = NULL;
//
//	// cout << reverse << endl;
//
//	return reverse;
//}

char* reverseString(const char* src, int size) {
	char* reverse = new char[size + 1];	// heap memory ���� �Ҵ�
	// reverse�� ������ �� �����ִ´�.

	for (int i = 0; i < size; i++) {
		reverse[i] = src[size - i - 1];
	}

	reverse[size] = NULL;

	// cout << reverse << endl;

	return reverse;
}

int main() {
	char original[] = "inha";

	// char original[] = { 'j','i','h','y','e' };	
	// ���ڿ� ���� NULL �� ���� �ٸ� �޸� ħ���Ѵ�.
	
	/*char original[] = { 'j','i','h','y','e','\0'};	*/
	// null ���� �ڿ��� �־�� �Ѵ�. -> cout �Լ��� null ���� �տ� ���ڱ��� ���
	// null�� ���� ������ null�� ã�������� ���

	// char original[] = { 'j','i','h','y','e',0 };
	
	/*char original[] = { 'j','i','h','y','e', NULL};*/

	// ��� ��� �پ���

	cout << original << endl;


	// char* copy = reverseString(&original[0], 5);

	char* copy = reverseString(original, 4);	// copy �� reverse�� �����Ҵ�� �޸� �ּҸ� �Ѱ� ����


	cout << copy << endl;
	// ����� �׾��µ� (�Լ��� �����µ�) ��ȭ��ȣ�� ������

	delete[] copy;	// new �� ������ delete �� �־�� ��
	// copy�� ������ �Ǿ� �����ϱ� copy�� ������ �Ѵ�.

	// delete[] copy; // double free error
	// �׿��µ� �� �׿��� ��-�� ���ؾ� ��.
	copy = nullptr;


	// reverse (Stack memory) -> copy (Heap memory)
	// ������ ��� ����� �� �ִ�.

	// ������ ã���� ������ ���� �ִµ� (reverse) ���� ��� ���ؼ� ģ������ �������(copy) ģ���� �ٽ� ������ ã���� �ٴѴ�

	// ���� �Ҵ��� �ϳ��� �� ���� ���� ����.

	// stack ���� ū ������ : heap�� delete ���� �ʴ� �� ������� �ʴ´�.
	
}