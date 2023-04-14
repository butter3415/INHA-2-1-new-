#include <iostream>
#include <string>

using namespace std;

/* < ����(static) ��� >
- ��� ��ü�� �����ϴ� ���. (���ǽ� - �л����� �����ؼ� ���)
- Ŭ�����̸�::�Լ��̸�();
*/

class Student {
public:
	string name;
	int sNo;
	
	Student(const string& name_arg, int stdNumber);
	~Student();

public:
	static int student_count;
	static void PrintStdCount();	// �� ���� ��� 

};

int Student::student_count = 0;

void Student::PrintStdCount() {
	cout << "Student ��ü �� = " << student_count << endl;
}

Student::Student(const string& name_arg, int stdNumber)
	: name(name_arg), sNo(stdNumber)
{
	student_count++;
}

Student::~Student() {
	student_count--;
}

void Func() {
	Student std1("������", 12223415);	// ��ü ���� +1
	Student std2("����", 12223952);	// ��ü ���� +1

	Student::PrintStdCount();	// ���� ���(3��)
	// Func �Լ� ���� �� std1, std2 ��ü �Ҹ�
}

int main() {
	Student::PrintStdCount();
	Student std("���غ�", 12226251);	// ��ü ���� +1
	Student::PrintStdCount();
	Func();
	Student::PrintStdCount();



}