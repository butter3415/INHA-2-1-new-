//// �� ������Ʈ�� ��� ���� ������ ���ڿ� ��� �ʿ�
//// C++ ��Ÿ�ϰ� C ��Ÿ���� ȣȯ�ϴ� �ɷ� �ʿ�
//// C ��Ÿ�� ���ڿ� -> ������ �̿��Ͽ� C++ ��Ÿ�� ��ȯ ����
//
//# include <iostream>
//using namespace std;
//
//int main() {
//	char cstyle[] = "Hi~";
//
//	string cppstyle;
//
//	cppstyle = cstyle;	// ������ ĳ����	
//	// �޸� �� ���� -> ������ �޸� ���� ����
//	cppstyle[0] = 'A';
//	// cstyle �� ��ȭ X	// cppstyle ��ȭ O 
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//}

// �� ������Ʈ�� ��� ���� ������ ���ڿ� ��� �ʿ�
// C++ ��Ÿ�ϰ� C ��Ÿ���� ȣȯ�ϴ� �ɷ� �ʿ�
// C ��Ÿ�� ���ڿ� -> ������ �̿��Ͽ� C++ ��Ÿ�� ��ȯ ����

//# include <iostream>
//using namespace std;
//
//int main() {
//	string cppstyle = "Hell!";
//	const char* cstyle = NULL;
//
//	// ���ڿ� �� �Լ� ��� , �ν��Ͻ� ���� ���� �ٷ� ��� ����
//	// cppstyle -> cstyle �� ����
//	// c_str() -> cppstyle �޸� ���� �ּҸ� �����ͼ� ���
//	// �б� ���� ���� -> �׷��� const�� ����
//	// �� ���� XXX
//	cstyle = cppstyle.c_str();
//
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//}

//# pragma warning(disable:4996)
//#include <cstring>
//# include <iostream>
//using namespace std;
//
//int main() {
//	string cppstyle = "Hell!";
//	char* cstyle = new char[cppstyle.size() + 1];
//
//	strcpy(cstyle, cppstyle.c_str());
//
//	cstyle[0] = 'Y';
//
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//	delete[] cstyle;
//	cstyle = NULL;
//
//}

//# pragma warning(disable:4996)
//# include <iostream>
//#include <cstring>
//#include <string>
//
//using namespace std;
//
//int main() {
//	char cstyle[3];		// ������ �����ϰ� �ޱ� ������ ������ �Ѿ�� ���� ��. 
//	string cppstyle;	// ũ�� ������� �� ���� �� ����.
//
//	//cin >> cstyle;	// �����ڰ� �����̽��� Inha University �� ���� �� �ܾ�� cstyle, �� �ܾ�� cppstyle �� ��
//	//cin >> cppstyle;
//
//	// cstyle getlinge ����
//	cin.getline(cstyle, 3);	// cin �� �ڽ��� ���¸� �� ����. 3�� �̻� �ԷµǸ� fail �ǵ��� ����
//	cin.clear(); // �̾ ���� �� �ֵ��� ����.
//
//	// cppstyle getline ����
//	getline(cin, cppstyle);	// string include �������	// 
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//
//}

// �ڵ带 �ҽ����Ͽ� �ѹ��� ������ ã�⵵ ��ư� ������ �����
// �β��� å ������ ��� �ٴѴٰ� �����ϸ� ��.

// ������ϰ� �������� ������

#include <iostream>
#include "ex1.h"	// ���� ���� ���� (Plus �Լ��� ���� ���� �������)
using namespace std;


int main() {
	int r;
	r = Plus(3, 7);


}