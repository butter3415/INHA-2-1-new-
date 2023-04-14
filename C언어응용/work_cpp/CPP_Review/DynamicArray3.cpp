//#include <iostream>
//using namespace std;
//
//char* reverseString(const char* src, int size) {
//	char* reverse = new char[size + 1];
//
//	for (int i = 0; i < size; i++) {
//		reverse[i] = src[size - 1 - i];		
//	}
//
//	reverse[size] = NULL;
//
//	return reverse;
//}
//
//int main() {
//	char original[] = "inha";
//
//	char* copy = reverseString(original, 5);
//	
//	cout << copy << endl;
//
//
//}

# include <iostream>
using namespace std;

char* reverseString(char* src, int size) {
	char* reverse = new char[size + 1];		// �� ���� �޸� �Ҵ�(8����Ʈ)
											// char ���Ŀ� �� ���ڸ��� null �ʱ�ȭ �ʿ��Ͽ� �ϳ��� ���� �߰�

	for (int i = 0; i < size; i++) {		// 
		reverse[i] = src[size - i - 1];		// ������
	}
	
	reverse[size] = NULL;					// ������ ���ڴ� NULL �� �ֱ�

	return reverse;
}

int main() {
	char nameis[] = "jihye";

	char* copy = reverseString(nameis, sizeof(nameis)-1);

	cout << copy << endl;

	delete[] copy;		// �� ���� �޸� ����

	copy = nullptr;		// �� ���� �޸� �� ����
	


}