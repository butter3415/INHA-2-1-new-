//#include <iostream>
//using namespace std;
//
////enum { JOB_NECROMANCER, JOB_BARBARIAN, JOB_WIZARD };	// { 0, 1, 2 }
//
//// enum JOB_KINDS { JOB_NECROMANCER, JOB_BARBARIAN = 2, JOB_WIZARD };	// { 0, 2, 3 }	=> JOB_WIZARD : 3
//
//enum JOB_KINDS { JOB_NECROMANCER = 10, JOB_BARBARIAN, JOB_WIZARD };	// { 0, 2, 3 }
//
//// ����ü -> ������, ���ڸ� ����ؾ� �Ѵٴ��� ���� �����κ��� �����Ӱ� ����
////		-> �� ��ü�� ��ġ�� �ǹ̵� ����.
////        -> �ϳ��� Ÿ���̴�. 
//
//
//struct Character {
//	JOB_KINDS jobType;	// 0: ���ɼ���, 1: �߸����, 2: ������	
//					// ���ڿ� Ŭ�������� ���踦 �ľ��ϱ� ��ƴ�. 
//					// ��� �� �ּ� ������ ������ 2�� ����, 1�� ���� �� ���� ����.
//					// �̸� �ذ��ϱ� ���� ����ü�� ����Ѵ�.
//};	
//
//
//int main() {
//	Character c;
//	c.jobType = JOB_WIZARD;
//
//	if (c.jobType == JOB_WIZARD) {
//		cout << "�����ݷ�!" << endl;
//	}
//
//
//
//
//}

// ===========================================================================

//#include <iostream>
//using namespace std;
//
//enum Color { RED, GREEN, BLUE, YELLOW };
//
//enum Java { PASS, FAIL };
//enum Python { PASS, FAIL };
//
//// ����ü�� int Ÿ������ ����
//// ��� ������ �Ұ� / �� ������ ����
//
//
//int main() {
//	Color c1 = RED;
//	Color c2;
//
//
//	// ����ü Ư¡ [1] ��� ���� �Ұ�
//	//c1 = GREEN + BLUE;
//	// c1 = c1 + 2;
//
//	// ���� �߻� [ int ������ ���� Color ������ ����Ƽ�� �Ҵ��� �� �����ϴ�. ]
//
//	// --------------------------------------------------------------------------
//	 
//	// ����ü Ư¡ [2] ���� ���� �Ұ�
//	// c2 = 3;
//
//	// --------------------------------------------------------------------------
//
//	// ����ü Ư¡ [3] �ݴ��� ��� ���԰� ��� ������ ����
//	//				   -> ������(�Ͻ���) Casting ����Ǿ ����
//	// int Ÿ�� ������ BLUE �־ ���� �߻� X
//
//
//	int n = BLUE;			// 2
//	int o = GREEN + BLUE;	// 3 ( 1 + 2 )
//
//	cout << n << endl;
//	cout << o << endl;
//
//	// ����� Casting �� ���� ����
//
//	Color c3 = (Color)1000;	// BLUE
//
//	cout << c3 << endl;
//
//
//}