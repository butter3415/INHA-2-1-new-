//#include <iostream>
//using namespace std;
//
//// ����ü (Struct)
//struct StudentInfo {	// ����ü ������ 
//	int id;
//	float grade;
//	char bloodType;
//
//} s3 = { 12223433, 4.0f, 'B' }, s4;
// 
// // ����ü ���� ����� ���ÿ� �ʱ�ȭ���� �Ϸ�, ���� ���𸸵� ����
//
//int main() {
//
//
//	//// ����ü ���� �ϳ� �����
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
//	//s4 = s2;	// ����ü�� ���� // ���� �ٸ� �޸𸮰� ���� // ������ ��
//
//	//cout << s4.bloodType << endl;
//
//	//s4.bloodType = 'O';
//	//cout << s4.bloodType << endl;
//	//cout << s2.bloodType << endl;	// s4 �� �������� �ٲ������ s2 �� �������� �ٲ��� �ʴ´�.
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
//	//// Ranged based for loop	 ���� ��� for �� 
//	//for (auto letter : letters) {	// auto i : �迭
//	//	cout << letter;
//	//}
//
//	///* �� ���̽� �ڵ�� ���� (Modern)��
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
//	///* �� ���̽� �ڵ�� ���� (Old)��
//	//for i in range(0, 3, 1):
//	//    print(subjects[i])
//	//*/
//
//	//for (int i : {1, 3, 5, 7, -9})
//	//	cout << i << " ";
//
//	//int a = 10;		// 10����
//	//int b = 0xA;	// 16����
//	//int c = 012;	// 8����
//	//int d = 0b1010;	// �������� 2���� ��� X	// c++ 14, binary literals
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