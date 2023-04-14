//#include <iostream>
//using namespace std;
//
//class DynamicArray {
//public:
//	int* arr;
//
//	DynamicArray(int arraysize);
//	~DynamicArray();
//
//};
//
//DynamicArray::DynamicArray(int arraysize) {
//	arr = new int[arraysize];	// 동적 메모리 할당
//}
//
//
//// main 함수 끝나는 시점에 자동적으로 소멸자 동작
//DynamicArray::~DynamicArray() {	// 소멸자
//	cout << "소멸자 동작" << endl;
//	delete[] arr;		// 동적 메모리 해제	
//	arr = nullptr;		// 해당 변수에 null 을 넣어서 깨끗하게 지워줌
//}
//
//
//int main() {
//	int size; 
//	cout << "몇 개의 정수를 입력하시겠소? ";
//	cin >> size;
//
//	DynamicArray da(size);
//
//	for (int i = 0; i < size; ++i) {
//		cin >> da.arr[i];
//	}
//
//	for (int i = size - 1; i >= 0; --i) {
//		cout << da.arr[i] << " ";
//	}
//
//	cout << endl;
//
//
//
//}