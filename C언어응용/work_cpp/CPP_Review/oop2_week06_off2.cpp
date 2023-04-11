/*
행 : 학생
열 : 과목
힙과 힙의 2차원 배열 구조
*/

#include <iostream>
using namespace std;

int main() {
	
	int total = 0;

	int student, subject;
	cout << "학생 수 입력 : ";
	cin >> student;
	cout << "수강과목 수 입력 : ";
	cin >> subject;

	int sum;
	int count;


	// heap allocation
	int** scores = new int* [student];	
	for (auto i = 0; i < student; i++) {
		// scores[i] = new int[subject];
		*(scores + i) = new int[subject];
		
	}

	/*
	학생 수(행), 수강과목 수(열)을 입력받아 각 학생의 총점과 평균을 구하는 프로그램을 작성하시오.
	*/
	
	for (auto k = 0; k < student; k++) {
		cout << k + 1 << "번 학생" << endl;
		for (auto j = 0; j < subject; j++) {
			cout << j + 1 << " 과목 성적 입력 ";
			cin >> scores[k][j];

		}
	}

	cout << endl;

	for (auto k = 0; k < student; k++) {
		total = 0;
		for (auto j = 0; j < subject; j++) {
			total = total + scores[k][j];

		}
		cout << k + 1 << "번 학생" << endl;
		cout << " 총점 : " << total << "점." << endl;
		cout << " 평균 : " << total / (double)subject << "점." << endl;
		cout << endl;
	}






	// 분해는 조립의 역순
	// free heap	//  !!!!!먼저 하는 습관 들이기!!!!!
	for (auto i = 0; i < student; i++) {
		// delete scores[i]
		delete[] *(scores + i);
	}

	delete[] scores;
	// delete[] scores;	// double free bug 이중 삭제 버그
	scores = nullptr;


}