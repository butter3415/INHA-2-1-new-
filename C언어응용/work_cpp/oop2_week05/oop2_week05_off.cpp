//#include <iostream>
//using namespace std;
//
//int main() {
//	// p414 동적 메모리 할당
//	// code memory
//	// static memory 
//	// stack memory
//	// heap memory
//	// 뉴진스 콘서트와 김태간 교수님과 아이들 밴드 관객 수가 몇명 올지 모른다.
//	// 뉴진스 콘서트는 매진 
//	// 교수님과 아이들 콘서트는 오는 관객마다 의자 갖다 놔야함.
//	
//	// heap 메모리는 delete 를 해주어야 한다.
//
//	int total = 0;
//	int humans = 0;
//	
//	// int* ptrHumans = nullptr;	//  c++11, (NULL, 0) 
//	// modern style
//	// 초기화 하지 않으면 쓰레기값을 가진다.
//	// -> 
//
//	cout << "몇분이신가요?";
//	cin >> humans;
//
//	int* ptrHumans = new int[humans];
//	// dynamic memory allocation 동적 할당
//	// stack 은 변수 이름이 있지만 heap은 변수 이름이 없다. 
//	// 그래서 포인터가 필요(주소 참조)
//	// 메인 주소
//
//	for (int i = 0; i < humans; i++) {
//		cout << "나이가 어떻게 되세요? ";
//		cin >> ptrHumans[i];	
//		// cin >> *(ptrHumans + i);	// + i 는 가리키는 대상에 따라 다르다.
//	}
//
//
//	cout << "나이 확인합니다." << endl;
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
//			cout << "정상적인 나이가 아닙니다." << endl;
//		}
//	}
//
//	cout << endl << "총 입장료는 " << total << "원 입니다." << endl;
//
//
//	// 만들고 해지해야 함. 미리 만들어 놓기
//	delete[] ptrHumans;	// 전여친과의 기억을 지워야 한다.	// heap 메모리에 있는 데이터 삭제
//	// → 사람이 죽었으면
//
//	cout << ptrHumans << endl;	// 머릿속에선 지웠지만 전화번호가 남아있다.	// 문제가 생길 수도 있다.
//	// → 쓰고 있던 번호가 있다.
//
//	ptrHumans = nullptr;	// 전화번호도 지워야 한다.		// heap 메모리 
//	// ptrHumans = NULL;
//	// → 이를 지워야 한다.
//
//	cout << ptrHumans << endl;
//
//	// ★ 동적 할당과 해지하는 법 확인하기 ★
//	//  heap 은 delete 하지 않는 이상 삭제되지 않는다.
//
//
//
//
//
//
//
//}