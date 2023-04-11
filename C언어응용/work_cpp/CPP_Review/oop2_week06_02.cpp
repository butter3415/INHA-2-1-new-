// Old Style (C Style)

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

//// C++ Style
//// 문자열 복사 속도는 더 느리다. 
//// 사용하기에 편하다. 가독성이 높음
//#include <iostream>
//using namespace std;
//
//int main() {
//	/*char src[] = "Inha Univ";*/
//	string src = "Inha Univ";
//	string dest;
//
//	cout << src.size() << endl;
//
//	dest = src;
//	
//	cout << src << endl;
//	cout << dest << endl;	
//	// strcpy 사용한 것과 동일
//
//
//
//}

// Old Style (C Style)

//#pragma warning(disable:4996)	// 원인 무시하고 사용 가능하도록 해주는 구문
//#include <iostream>
//#include <cstring>	// 옛날 컴파일러는 이 구문을 넣어야 함.
//using namespace std;
//
//int main() {
//	char str1[] = "Inha";	// strlen 함수 사용하여 길이 구하면 9 나옴
//	char str2[] = "Zero";
//
//	if (strcmp(str1, str2) == 0) {	// 글자 비교 함수 (strcmp)	// str1 = inha, str2 = Havard 이면 다르다 출력
//		cout << " 같다 " << endl;
//
//	}
//	else {
//		cout << " 다르다 " << endl;
//		cout << strcmp(str1, str2) << endl;	// 맨 앞글자가 본 앞글자 문자보다 앞에 있으면 1 리턴, 뒤에 있으면 -1 리턴, 두 값이 같으면 0 리턴
//	}
// // ascii str1 < str2 -1 리턴, str1 > str2 1 리턴
//
//	//strcat(str1, str2);	// 결합	str1 에 str2 를 붙인 것. str1 은 inha ~ Havard Univ 이고, str2 는 Harvard Univ 이다
//	//cout << str1 << endl;
//	//cout << str2 << endl;
//
//}

// C++ Style

//#include <iostream>
//using namespace std;
//
//int main(){
//	
//	string str1 = "Inha";
//	string str2 = "Inha";
//
//	// 동일 문자열 여부 비교
//	if (str1 == str2) {
//		cout << "같다" << endl;	
//		cout << typeid((str1 == str2)).name() << endl;	// 같으면 1 출력 -> true, false 와 동일
//	}
//	else {
//		cout << "다르다" << endl;
//		cout << (str1 == str2) << endl;	// 다르면 0 출력 -> true, false 와 동일
//	}
//
//
//	// 결합
//	//str1 = str1 + str2;
//
//	//cout << str1 << endl;
//	//cout << str2 << endl;
//
//
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//	string str = "Hi, Inha Univ.";
//	
//	// 찾는 값 위치 출력
//	cout << str.find("Univ") << endl;	//  Univ 찾을 때는 9 리턴, 대소문자 모두 일치해야함.
//
//	// 위치값으로 문자열 불러오기
//	string capture = str.substr(4, 4);	// str string 에서 4번째부터 4개의 글자 불러오기
//
//	cout << capture << endl;
//
//
//
//
//
//}