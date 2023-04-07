#include <iostream>
using namespace std;

// stack memory (feat. reverse array)
//char* reverseString(const char* src, int size) {
//	char reverse[5];	// stack memory 정적 할당
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
	char* reverse = new char[size + 1];	// heap memory 동적 할당
	// reverse가 끝나도 다 남아있는다.

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
	// 문자열 끝에 NULL 이 없다 다른 메모리 침범한다.
	
	/*char original[] = { 'j','i','h','y','e','\0'};	*/
	// null 값을 뒤에야 넣어야 한다. -> cout 함수는 null 문자 앞에 문자까지 출력
	// null을 넣지 않으면 null을 찾을때까지 출력

	// char original[] = { 'j','i','h','y','e',0 };
	
	/*char original[] = { 'j','i','h','y','e', NULL};*/

	// 출력 방법 다양함

	cout << original << endl;


	// char* copy = reverseString(&original[0], 5);

	char* copy = reverseString(original, 4);	// copy 는 reverse가 동적할당된 메모리 주소를 넘겨 받음


	cout << copy << endl;
	// 사람이 죽었는데 (함수가 끝났는데) 전화번호를 가져옴

	delete[] copy;	// new 가 있으면 delete 꼭 있어야 함
	// copy랑 연결이 되어 있으니까 copy를 지워야 한다.

	// delete[] copy; // double free error
	// 죽였는데 또 죽였어 ㅠ-ㅠ 피해야 함.
	copy = nullptr;


	// reverse (Stack memory) -> copy (Heap memory)
	// 공간을 계속 써먹을 수 있다.

	// 보물을 찾으로 지도를 갖고 있는데 (reverse) 내가 사고를 당해서 친구에게 전해줬다(copy) 친구가 다시 보물을 찾으러 다닌다

	// 동적 할당을 하나만 할 일은 거의 없다.

	// stack 과의 큰 차이점 : heap은 delete 하지 않는 한 사라지지 않는다.
	
}