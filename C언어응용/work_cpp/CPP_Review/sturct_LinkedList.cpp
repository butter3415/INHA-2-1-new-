#include <iostream>
using namespace std;

/*
a, b, c 구조체 노드가 연결되어 있는 구조
(환형 형태의 LinkedList)
a -> b -> c
*/

struct LinkedList {

	int data;
	LinkedList* p;

};


int main() {
	LinkedList a, b, c;
	a.data = 99;
	a.p = &b;

	b.data = 87;
	b.p = &c;

	c.data = 75;
	c.p = &a;

	cout << a.data << " = " << c.p->data << " = " << (*c.p).data << " = " << c.p->p->p->p->data << endl;
	cout << b.data << " = " << a.p->data << " = " << (*a.p).data << " = " << a.p->p->p->p->data << endl;
	cout << c.data << " = " << b.p->data << " = " << (*b.p).data << " = " << b.p->p->p->p->data << endl;

}