//#include <iostream>
//using namespace std;
//
/////*  a, b, c ����ü ��尡 ����Ǿ� �ִ� ����(ȯ�� ������ LinkedList) 
////*	a -> b -> c	
////*/
////
////struct LinkedList {
////	int data;
////	LinkedList* p;	
////
////};
////
////int main() {
////	LinkedList a, b, c;
////	a.data = 99;
////	a.p = &b;				// p�� �����ͱ� ������ ����ü�� �ּҸ� ���� �� ����
////
////	b.data = 93;
////	b.p = &c;
////
////	c.data = 94;
////	c.p = &a;
////
////	cout << a.data << " = " << c.p->data << " = " << (*c.p).data << " = " << b.p->p->data << " = " << a.p->p->p->data << endl;	// 99 (a.data)
////
////	cout << b.data << " = " << a.p->data << " = " << (*a.p).data << " = " << c.p->p->data << endl;	// 93 (b.data)
////	
////	cout << c.data << " = " << b.p->data << " = " << (*b.p).data << " = " << a.p->p->data << endl;	// 94 (c.data)
////
////}
//
////==============================================================================
//
//// union : ����ü (���� ū �������� ��� ���� ũ��� �޸� �Ҵ�)
////	     : ���� �ּ�ȭ
////		 : ���� ������� ����
//
//union JobUnion {
//	// char name[32];	// 32����Ʈ
//	//float salary;	// 4����Ʈ
//	long salary;	// 4����Ʈ
//	int workId;		// 4����Ʈ
//
//}uJob;	// ����ü �ٷ� ����
//
//// struct : ����ü
//
//struct JobStruct {
//	// char name[32];	// 32����Ʈ
//	// float salary;	// 4����Ʈ
//	long salary;	// 4����Ʈ
//	int workId;		// 4����Ʈ	// �ּ� 40����Ʈ
//
//}sJob;	// ����ü �ٷ� ����
//
//
//int main() {
//	uJob.salary = 11;
//	uJob.workId = 1234;	
//
//	sJob.salary = 21;
//	sJob.workId = 44434;
//
//	// cout << uJob.salary << endl;	// 1.7292e-42 / float salary �� ���
//
//	cout << uJob.salary << endl;	// 1234	
//	cout << uJob.workId << endl;	// 1234
//
//
//	// �� union�� ���� ū ��� ���� ũ��� �޸� �Ҵ� 
//	// => ���� 4����Ʈ�� �Ҵ�Ǿ� �ִ� ���¿��� salary(11)�� ���� workId(1234)�� ������ ������ 11 �ڸ��ۿ� ��� ���.
//	// �����(11) -> �����(44434) �ڸ��� ��� ���! (4����Ʈ) 
//
//	// cout << sJob.salary << endl;	// 2.1 / float salary �� ���
//	
//	cout << sJob.salary << endl;	// 21
//	cout << sJob.workId << endl;	// 44434
//	// �����(21) | �����(44434) (8����Ʈ)�� �������� ���� 
//
//
//	//cout << sizeof(uJob) << endl;	// 32����Ʈ -> name + salary + workId
//	//cout << sizeof(sJob) << endl;	// 40����Ʈ -> name + salary + workId
//
//}