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
	char* reverse = new char[size + 1];		// ★ 동적 메모리 할당(8바이트)
											// char 형식에 맨 뒷자리는 null 초기화 필요하여 하나의 공간 추가

	for (int i = 0; i < size; i++) {		// 
		reverse[i] = src[size - i - 1];		// 뒤집기
	}
	
	reverse[size] = NULL;					// 마지막 문자는 NULL 값 넣기

	return reverse;
}

int main() {
	char nameis[] = "jihye";

	char* copy = reverseString(nameis, sizeof(nameis)-1);

	cout << copy << endl;

	delete[] copy;		// ★ 동적 메모리 삭제

	copy = nullptr;		// ★ 동적 메모리 값 제거
	


}