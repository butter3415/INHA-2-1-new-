////#include <iostream>
////using namespace std;
////
////char* ReverseString(const char* src, int len) {
////    char* rev = new char[len + 1];   // NULL �� �ֱ� ���Ͽ� len + 1   // new char[len + 1] -> ���� �Ҵ�
////    for (auto i = 0; i < len; ++i) {
////        rev[i] = src[len - i - 1];
////    }
////
////    rev[len] = NULL;   // ������ �濡 NUL   -> cout �� ������ �д��� �˷��ַ���
////    return rev;
////
////}
////
////int main() {
////    char orig[] = "Inha";
////    char* copy = ReverseString(orig, 4);   // reverseString �Լ��� ������ �ٸ� �����鵵 �� �״´�. �װŸ� �����Ű�� ���� copy �� ����
////
////    cout << orig << endl;
////    cout << copy << endl;
////
////    delete[] copy;   // �����Ҵ� �� ��������� ��������� ��. delete
////    copy = NULL;   // �� �����߱� ������ null �� �־���� �Ѵ�. => ���� �ִ� �����Ⱚ �ʱ�ȭ �����ִ� ����
////
////
////
////}
//
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