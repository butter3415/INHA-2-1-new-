//#include <iostream>
//using namespace std;
//
///*
//a, b, c ����ü ��尡 ����Ǿ� �ִ� ����
//(ȯ�� ������ LinkedList)
//a -> b -> c
//*/
//
//struct LinkedList {
//
//	int data;
//	LinkedList* p;
//
//};
//
//
//int main() {
//	LinkedList a, b, c;
//	a.data = 99;
//	a.p = &b;
//
//	b.data = 87;
//	b.p = &c;
//
//	c.data = 75;
//	c.p = &a;
//
//	cout << a.data << " = " << c.p->data << " = " << (*c.p).data << " = " << c.p->p->p->p->data << endl;
//	cout << b.data << " = " << a.p->data << " = " << (*a.p).data << " = " << a.p->p->p->p->data << endl;
//	cout << c.data << " = " << b.p->data << " = " << (*b.p).data << " = " << b.p->p->p->p->data << endl;
//
//}