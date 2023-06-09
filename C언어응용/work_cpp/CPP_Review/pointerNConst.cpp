//# include <iostream>
//using namespace std;
// 
//	// ===================================================================
//	/* < 포인터& const 콜라보 >
//	[1] 'const 포인터'
//	-> 값 변경 X, 주소 변경 O
//	(ex. 교수님이 가리키는 지혜 자리에 설화가 앉을 수는 없지만, 
//	     교수님이 히령이를 가리킬 수는 있음)
//
//	[2] '포인터 const'
//	-> 값 변경 O, 주소 변경 X
//	(ex. 교수님이 가리키는 지혜 자리에 설화가 대신 앉을 수 는 있지만,
//	     교수님이 히령이를 가리킬 수 없음)
//
//	[3] 'const 포인터 const'
//	-> 값 변경 X, 주소 변경 X
//	(ex. 교수님이 가리키는 지혜 자리에 설화가 대신 앉을 수 없고,
//	     교수님이 히령이를 가리킬 수도 없음)
//	*/
//	
//		
//int main() {
// ------------------------------------------------------------------ 
//	
//	/* < 'const 포인터' >
//	[1] const 가 포인터 앞에 오는 경우
//	- 값 변경 X /// 주소 변경 O
//	*/ 
//
//	//const double* cDP;	// ★★★
//	//
//	//double dNum2 = 5.21;
//	//	
//	//cDP = &dNum2;
//	//
//	//cout << "dNum2 메모리 주소 : " << &dNum2 << endl;
//	//cout << "cDP 메모리 주소 : " << cDP << endl;
//	//cout << "cDP 값 : " << *cDP << endl;
//	//
//	//cout << endl;
//	//
//	//// cDP = 98;
//	//// 값 변경 불가능 ★
//	//	
//	//double dNum3 = 98;
//	//
//	//cDP = &dNum3;	// 주소를 바꿔주었으니 그 값도 바뀐다.
//	//
//	//cout << "dNum3 메모리 주소 : " << &dNum3 << endl;
//	//cout << "변경 cDP 메모리 주소 : " << cDP << endl;
//	//cout << "변경 cDP 값 : " << *cDP << endl;
//	//
//	//cout << endl;
//		
//	// ------------------------------------------------------------------ 
//	
//	/* < '포인터 const' >
//	[2] const 가 포인터 뒤에 오는 경우
//	 - 값 변경 O /// 주소 변경 X
//	 + 포인터 상수 선언 시에는 이니셜라이저(초기화 값 지정) 필요
//	*/
//
//	//int iNum2 = 980521;
//	//
//	//int* const IPC = &iNum2;
//	//
//	//cout << "iNum2 메모리 주소 : " << &iNum2 << endl;
//	//cout << "IPC 메모리 주소 : " << IPC << endl;
//	//cout << "IPC 값 : " << *IPC << endl;
//	//
//	//cout << endl;
//	//
//	//*IPC = 3415;
//	//
//	//cout << "변경 IPC 메모리 주소 : " << IPC << endl;
//	//cout << "변경 IPC 값 : " << *IPC << endl;
//	//
//	//int iNum3 = 3415;
//	//
//	//// IPC = &iNum3;	
//	//// 주소 변경 불가능 ★
//	
//	// ------------------------------------------------------------------
//	
//	///* < 'const 포인터 const' >
//	//[3] const 가 포인터 앞, 뒤에 오는 경우
//	//- 값 변경 X /// 주소 변경 X
//	//*/
//	//short sNum = 6;
//	//
//	//const short* const SPC = &sNum;
//	//
//	//cout << "sNum 메모리 주소 : " << &sNum << endl;
//	//cout << "SPC 메모리 주소 : " << SPC << endl;
//	//cout << "SPC 값 : " << *SPC << endl;
//
//	//// short sNum2 = 66; 
//	//
//	//// SPC = 5;
//	//// 값 변경 불가능 ★
//	//// SPC = &sNum2;
//	//// 주소 변경 불가능 ★
//	
//
//}