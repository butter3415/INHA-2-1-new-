/*
�� : �л�
�� : ����
���� ���� 2���� �迭 ����
*/

#include <iostream>
using namespace std;

int main() {
	
	int total = 0;

	int student, subject;
	cout << "�л� �� �Է� : ";
	cin >> student;
	cout << "�������� �� �Է� : ";
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
	�л� ��(��), �������� ��(��)�� �Է¹޾� �� �л��� ������ ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	*/
	
	for (auto k = 0; k < student; k++) {
		cout << k + 1 << "�� �л�" << endl;
		for (auto j = 0; j < subject; j++) {
			cout << j + 1 << " ���� ���� �Է� ";
			cin >> scores[k][j];

		}
	}

	cout << endl;

	for (auto k = 0; k < student; k++) {
		total = 0;
		for (auto j = 0; j < subject; j++) {
			total = total + scores[k][j];

		}
		cout << k + 1 << "�� �л�" << endl;
		cout << " ���� : " << total << "��." << endl;
		cout << " ��� : " << total / (double)subject << "��." << endl;
		cout << endl;
	}






	// ���ش� ������ ����
	// free heap	//  !!!!!���� �ϴ� ���� ���̱�!!!!!
	for (auto i = 0; i < student; i++) {
		// delete scores[i]
		delete[] *(scores + i);
	}

	delete[] scores;
	// delete[] scores;	// double free bug ���� ���� ����
	scores = nullptr;


}