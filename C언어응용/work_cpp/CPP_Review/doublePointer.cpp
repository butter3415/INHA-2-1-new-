#include <iostream>
using namespace std;

/*
����������
- 2���� �迭���� ���
- �������� ���� ���ϱ� ��������ϱ� ��ȭ���� ���ϸ鼭 ��� ������! ��(��������)
- ������ �ּ�(ppi)�� �˱� ���ؼ��� ��ȭ�� �ּ�(pi)���� �˾Ƴ�����
*/

int main() {
	double* pd;
	double j = 5.21;

	int i = 6;
	cout << i << endl;

	int* pi = &i;
	cout << "pi : " << pi << " / *pi : " << *pi << endl;

	int** ppi = &pi;	// (����������)
	cout << "ppi : " << ppi << " / *ppi(pi �ּ�) : " << *ppi << " / **ppi : " << **ppi << endl;

	int*** pppi = &ppi;	// (����������)
	cout << "pppi : " << pppi << " / *pppi : " << *pppi << " / **pppi : " << **pppi << " / ***pppi : " << ***pppi << endl;


}