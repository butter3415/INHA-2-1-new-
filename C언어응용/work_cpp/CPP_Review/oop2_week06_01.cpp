////#include <iostream>
////using namespace std;
////
////char* ReverseString(const char* src, int len) {
////    char* rev = new char[len + 1];   // NULL 값 주기 위하여 len + 1   // new char[len + 1] -> 동적 할당
////    for (auto i = 0; i < len; ++i) {
////        rev[i] = src[len - i - 1];
////    }
////
////    rev[len] = NULL;   // 마지막 방에 NUL   -> cout 이 어디까지 읽는지 알려주려고
////    return rev;
////
////}
////
////int main() {
////    char orig[] = "Inha";
////    char* copy = ReverseString(orig, 4);   // reverseString 함수가 끝나면 다른 변수들도 다 죽는다. 그거를 저장시키기 위해 copy 에 받음
////
////    cout << orig << endl;
////    cout << copy << endl;
////
////    delete[] copy;   // 동적할당 다 사용했으면 해지해줘야 함. delete
////    copy = NULL;   // 다 해지했기 때문에 null 값 넣어줘야 한다. => 원래 있던 쓰레기값 초기화 시켜주는 역할
////
////
////
////}
//
//#pragma warning(disable:4996)	// 원인 무시하고 사용 가능하도록 해주는 구문
//#include <iostream>
//#include <cstring>	// 옛날 컴파일러는 이 구문을 넣어야 함.
//using namespace std;
//
//int main() {
//	char src[] = "Inha Univ";	// strlen 함수 사용하여 길이 구하면 9 나옴
//	int len = strlen(src);
//	cout << len << endl;
//
//	char* dest = new char[len + 1];
//	strcpy(dest, src);	// strcpy(복사할곳, 원본)
//	cout << src << endl;
//	cout << dest << endl;
//
//	delete[] dest;
//	dest = NULL;
//
//}