//#include <iostream>
//using namespace std;
//
//// 구조체 (Struct)
//struct StudentInfo {	// 구조체 디자인 
//	int id;
//	float grade;
//	char bloodType;
//
//} s3 = { 12223433, 4.0f, 'B' }, s4;
// 
// // 구조체 변수 선언과 동시에 초기화까지 완료, 변수 선언만도 가능
//
//int main() {
//
//
//	//// 구조체 변수 하나 만들기
//	//StudentInfo s1 = { 12223415, 4.1f, 'A' };
//	//StudentInfo s2 = { 12223485, 3.9f, 'B' };
//
//
//	//cout << s2.grade << endl;
//	//cout << s1.id << endl;
//	//cout << s3.bloodType << endl;
//
//
//	///*s4.bloodType = 'AB';
//	//s4.id = 12223414;
//	//s4.grade = 3.9f;*/
//
//	//s4 = s2;	// 구조체간 복사 // 서로 다른 메모리값 복제 // 복제가 됨
//
//	//cout << s4.bloodType << endl;
//
//	//s4.bloodType = 'O';
//	//cout << s4.bloodType << endl;
//	//cout << s2.bloodType << endl;	// s4 의 혈액형이 바뀌었지만 s2 의 혈액형은 바뀌지 않는다.
//
//	//s4.bloodType = 'O';
//	//s4.id = 12221317;
//	//s4.grade = 2.9f;
//
//	//// Modern school code
//	//char letters[] = "Hello";
//	//void* ps;
//	//ps = letters;
//
//	//// Ranged based for loop	 범위 기반 for 문 
//	//for (auto letter : letters) {	// auto i : 배열
//	//	cout << letter;
//	//}
//
//	///* ↓ 파이썬 코드와 동일 (Modern)↓
//	//for i in range(0, 3, 1):
//	//	print(subjects[i])
//	//*/
//
//
//	//// Old school code
//	//char s[] = { 'H', 'e','l','l','o', 0 };
//	//void* ps;
//	//ps = &s[0];
//
//	//for (int i = 0; i < sizeof(s); i++) {
//	//	cout << *((char*)ps + i);
//
//	//}
//
//	///* ↓ 파이썬 코드와 동일 (Old)↓
//	//for i in range(0, 3, 1):
//	//    print(subjects[i])
//	//*/
//
//	//for (int i : {1, 3, 5, 7, -9})
//	//	cout << i << " ";
//
//	//int a = 10;		// 10진수
//	//int b = 0xA;	// 16진수
//	//int c = 012;	// 8진수
//	//int d = 0b1010;	// 이전에는 2진수 출력 X	// c++ 14, binary literals
//
//	//cout << a << endl;
//	//cout << b << endl;
//	//cout << c << endl;	
//	//cout << d << endl;
//
//
//
//
//	return 0;
//}