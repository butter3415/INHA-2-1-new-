// Old Style (C Style)

//#pragma warning(disable:4996)	// ���� �����ϰ� ��� �����ϵ��� ���ִ� ����
//#include <iostream>
//#include <cstring>	// ���� �����Ϸ��� �� ������ �־�� ��.
//using namespace std;
//
//int main() {
//	char src[] = "Inha Univ";	// strlen �Լ� ����Ͽ� ���� ���ϸ� 9 ����
//	int len = strlen(src);
//	cout << len << endl;
//
//	char* dest = new char[len + 1];
//	strcpy(dest, src);	// strcpy(�����Ұ�, ����)
//	cout << src << endl;
//	cout << dest << endl;
//
//	delete[] dest;
//	dest = NULL;
//
//}

//// C++ Style
//// ���ڿ� ���� �ӵ��� �� ������. 
//// ����ϱ⿡ ���ϴ�. �������� ����
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
//	// strcpy ����� �Ͱ� ����
//
//
//
//}

// Old Style (C Style)

//#pragma warning(disable:4996)	// ���� �����ϰ� ��� �����ϵ��� ���ִ� ����
//#include <iostream>
//#include <cstring>	// ���� �����Ϸ��� �� ������ �־�� ��.
//using namespace std;
//
//int main() {
//	char str1[] = "Inha";	// strlen �Լ� ����Ͽ� ���� ���ϸ� 9 ����
//	char str2[] = "Zero";
//
//	if (strcmp(str1, str2) == 0) {	// ���� �� �Լ� (strcmp)	// str1 = inha, str2 = Havard �̸� �ٸ��� ���
//		cout << " ���� " << endl;
//
//	}
//	else {
//		cout << " �ٸ��� " << endl;
//		cout << strcmp(str1, str2) << endl;	// �� �ձ��ڰ� �� �ձ��� ���ں��� �տ� ������ 1 ����, �ڿ� ������ -1 ����, �� ���� ������ 0 ����
//	}
// // ascii str1 < str2 -1 ����, str1 > str2 1 ����
//
//	//strcat(str1, str2);	// ����	str1 �� str2 �� ���� ��. str1 �� inha ~ Havard Univ �̰�, str2 �� Harvard Univ �̴�
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
//	// ���� ���ڿ� ���� ��
//	if (str1 == str2) {
//		cout << "����" << endl;	
//		cout << typeid((str1 == str2)).name() << endl;	// ������ 1 ��� -> true, false �� ����
//	}
//	else {
//		cout << "�ٸ���" << endl;
//		cout << (str1 == str2) << endl;	// �ٸ��� 0 ��� -> true, false �� ����
//	}
//
//
//	// ����
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
//	// ã�� �� ��ġ ���
//	cout << str.find("Univ") << endl;	//  Univ ã�� ���� 9 ����, ��ҹ��� ��� ��ġ�ؾ���.
//
//	// ��ġ������ ���ڿ� �ҷ�����
//	string capture = str.substr(4, 4);	// str string ���� 4��°���� 4���� ���� �ҷ�����
//
//	cout << capture << endl;
//
//
//
//
//
//}