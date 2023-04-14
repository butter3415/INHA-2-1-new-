//# include <iostream>
//using namespace std;
///* < 동적 메모리 할당 >
//ex. 뉴진스 콘서트에는 몇명 올지 모르지만,
//ex. 김태간 교수 밴드 콘서트에는 오는 관객마다 의자를 갖다 놓아야 한다 
//
//★★★ 동적 할당과 해지하는 법 확인하기 ★★★
//heap 은 delete 하지 않는 이상 삭제되지 않는다.
////
//*/
//int main() {
//	int total = 0;
//	int humans = 0;
//
//	cout << "몇분이신가요~? ";
//	cin >> humans;
//
//	int* humansNum = new int[humans];		// ★ 동적 메모리 할당(8바이트)
//
//	for (int i = 0; i < humans; i++) {
//		cout << "나이가 어떻게 되시나요? : ";
//		cin >> humansNum[i];
//		// cin >> humansNum(humansNum + i);
//	}
//
//	cout << "나이 확인하겠습니다~ " << endl;
//
//	// 8세 미만 : 5000원
//	// 20세 미만 : 8000원
//	// 20세 이상 : 10000원
//	for (int k = 0; k < humans; k++) {
//		int age = 0;
//
//		age = humansNum[k];
//
//		cout << humansNum[k] << " ";
//
//		if (age < 8) {
//			total = total + 5000;
//		}
//		else if (age < 20) {
//			total = total + 8000;
//		}
//		else if (age >= 20) {
//			total = total + 10000;
//		}
//		else {
//			cout << "나이를 제대로 말씀해주세요~" << endl;
//		}
//	
//	}
//	cout << endl << "고객님들의 총 입장료는 " << total << "원 입니다~" << endl;
//
//	delete[] humansNum;		// ★ 동적 메모리 삭제
//	humansNum = nullptr;	// ★ 동적 메모리 값 제거
//
//
//}