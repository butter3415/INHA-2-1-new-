#include <iostream>
#include <string>

using namespace std;

/* < 정적(static) 멤버 >
- 모든 객체가 공유하는 멤버. (강의실 - 학생들이 공유해서 사용)
- 클래스이름::함수이름();
*/

class Student {
public:
	string name;
	int sNo;
	
	Student(const string& name_arg, int stdNumber);
	~Student();

public:
	static int student_count;
	static void PrintStdCount();	// 다 같이 사용 

};

int Student::student_count = 0;

void Student::PrintStdCount() {
	cout << "Student 객체 수 = " << student_count << endl;
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
	Student std1("김지혜", 12223415);	// 객체 생성 +1
	Student std2("김까미", 12223952);	// 객체 생성 +1

	Student::PrintStdCount();	// 갯수 찍기(3명)
	// Func 함수 끝날 때 std1, std2 객체 소멸
}

int main() {
	Student::PrintStdCount();
	Student std("김해봉", 12226251);	// 객체 생성 +1
	Student::PrintStdCount();
	Func();
	Student::PrintStdCount();



}