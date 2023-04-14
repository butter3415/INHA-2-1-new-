#include <iostream>
using namespace std;

class DynamicArray {
public:
	int* arr;

	DynamicArray(int arraysize);
	~DynamicArray();

};

DynamicArray::DynamicArray(int arraysize) {
	arr = new int[arraysize];	// ���� �޸� �Ҵ�
}


// main �Լ� ������ ������ �ڵ������� �Ҹ��� ����
DynamicArray::~DynamicArray() {	// �Ҹ���
	cout << "�Ҹ��� ����" << endl;
	delete[] arr;		// ���� �޸� ����	
	arr = nullptr;		// �ش� ������ null �� �־ �����ϰ� ������
}


int main() {
	int size; 
	cout << "�� ���� ������ �Է��Ͻðڼ�? ";
	cin >> size;

	DynamicArray da(size);

	for (int i = 0; i < size; ++i) {
		cin >> da.arr[i];
	}

	for (int i = size - 1; i >= 0; --i) {
		cout << da.arr[i] << " ";
	}

	cout << endl;



}