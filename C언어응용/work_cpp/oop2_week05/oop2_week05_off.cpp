//#include <iostream>
//using namespace std;
//
//int main() {
//	// p414 ���� �޸� �Ҵ�
//	// code memory
//	// static memory 
//	// stack memory
//	// heap memory
//	// ������ �ܼ�Ʈ�� ���°� �����԰� ���̵� ��� ���� ���� ��� ���� �𸥴�.
//	// ������ �ܼ�Ʈ�� ���� 
//	// �����԰� ���̵� �ܼ�Ʈ�� ���� �������� ���� ���� ������.
//	
//	// heap �޸𸮴� delete �� ���־�� �Ѵ�.
//
//	int total = 0;
//	int humans = 0;
//	
//	// int* ptrHumans = nullptr;	//  c++11, (NULL, 0) 
//	// modern style
//	// �ʱ�ȭ ���� ������ �����Ⱚ�� ������.
//	// -> 
//
//	cout << "����̽Ű���?";
//	cin >> humans;
//
//	int* ptrHumans = new int[humans];
//	// dynamic memory allocation ���� �Ҵ�
//	// stack �� ���� �̸��� ������ heap�� ���� �̸��� ����. 
//	// �׷��� �����Ͱ� �ʿ�(�ּ� ����)
//	// ���� �ּ�
//
//	for (int i = 0; i < humans; i++) {
//		cout << "���̰� ��� �Ǽ���? ";
//		cin >> ptrHumans[i];	
//		// cin >> *(ptrHumans + i);	// + i �� ����Ű�� ��� ���� �ٸ���.
//	}
//
//
//	cout << "���� Ȯ���մϴ�." << endl;
//	for (int k = 0; k < humans; k++) {
//		int age = 0;
//		
//		age = ptrHumans[k];
//
//		cout << ptrHumans[k] << " ";
//
//		if (age < 8) {
//			total = total + 5000;
//		} 
//		else if (age < 20) {
//			total = total + 10000;
//		}
//		else if (age >= 20) {
//			total = total + 20000;
//		}
//		else {
//			cout << "�������� ���̰� �ƴմϴ�." << endl;
//		}
//	}
//
//	cout << endl << "�� ������ " << total << "�� �Դϴ�." << endl;
//
//
//	// ����� �����ؾ� ��. �̸� ����� ����
//	delete[] ptrHumans;	// ����ģ���� ����� ������ �Ѵ�.	// heap �޸𸮿� �ִ� ������ ����
//	// �� ����� �׾�����
//
//	cout << ptrHumans << endl;	// �Ӹ��ӿ��� �������� ��ȭ��ȣ�� �����ִ�.	// ������ ���� ���� �ִ�.
//	// �� ���� �ִ� ��ȣ�� �ִ�.
//
//	ptrHumans = nullptr;	// ��ȭ��ȣ�� ������ �Ѵ�.		// heap �޸� 
//	// ptrHumans = NULL;
//	// �� �̸� ������ �Ѵ�.
//
//	cout << ptrHumans << endl;
//
//	// �� ���� �Ҵ�� �����ϴ� �� Ȯ���ϱ� ��
//	//  heap �� delete ���� �ʴ� �̻� �������� �ʴ´�.
//
//
//
//
//
//
//
//}