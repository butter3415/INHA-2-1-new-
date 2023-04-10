//#include <iostream>
//using namespace std;
//
///*
//이중포인터
//- 2차원 배열에서 사용
//- 지혜한테 직접 말하기 껄끄러우니까 설화한테 말하면서 대신 전해줘! 함(간접참조)
//- 지혜의 주소(ppi)를 알기 위해서는 설화의 주소(pi)부터 알아내야함
//*/
//
//int main() {
//	double* pd;
//	double j = 5.21;
//
//	int i = 6;
//	cout << i << endl;
//
//	int* pi = &i;
//	cout << "pi : " << pi << " / *pi : " << *pi << endl;
//
//	int** ppi = &pi;	// (이중포인터)
//	cout << "ppi : " << ppi << " / *ppi(pi 주소) : " << *ppi << " / **ppi : " << **ppi << endl;
//
//	int*** pppi = &ppi;	// (삼중포인터)
//	cout << "pppi : " << pppi << " / *pppi : " << *pppi << " / **pppi : " << **pppi << " / ***pppi : " << ***pppi << endl;
//
//
//}