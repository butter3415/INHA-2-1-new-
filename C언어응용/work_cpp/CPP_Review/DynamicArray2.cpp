//# include <iostream>
//using namespace std;
///* < ���� �޸� �Ҵ� >
//ex. ������ �ܼ�Ʈ���� ��� ���� ������,
//ex. ���°� ���� ��� �ܼ�Ʈ���� ���� �������� ���ڸ� ���� ���ƾ� �Ѵ� 
//
//�ڡڡ� ���� �Ҵ�� �����ϴ� �� Ȯ���ϱ� �ڡڡ�
//heap �� delete ���� �ʴ� �̻� �������� �ʴ´�.
////
//*/
//int main() {
//	int total = 0;
//	int humans = 0;
//
//	cout << "����̽Ű���~? ";
//	cin >> humans;
//
//	int* humansNum = new int[humans];		// �� ���� �޸� �Ҵ�(8����Ʈ)
//
//	for (int i = 0; i < humans; i++) {
//		cout << "���̰� ��� �ǽó���? : ";
//		cin >> humansNum[i];
//		// cin >> humansNum(humansNum + i);
//	}
//
//	cout << "���� Ȯ���ϰڽ��ϴ�~ " << endl;
//
//	// 8�� �̸� : 5000��
//	// 20�� �̸� : 8000��
//	// 20�� �̻� : 10000��
//	for (int k = 0; k < humans; k++) {
//		int age = 0;
//
//		age = humansNum[k];
//
//		cout << humansNum[k] << " ";
//
//		if (age < 8) {
//			total = total + 5000;
//		}
//		else if (age < 20) {
//			total = total + 8000;
//		}
//		else if (age >= 20) {
//			total = total + 10000;
//		}
//		else {
//			cout << "���̸� ����� �������ּ���~" << endl;
//		}
//	
//	}
//	cout << endl << "���Ե��� �� ������ " << total << "�� �Դϴ�~" << endl;
//
//	delete[] humansNum;		// �� ���� �޸� ����
//	humansNum = nullptr;	// �� ���� �޸� �� ����
//
//
//}