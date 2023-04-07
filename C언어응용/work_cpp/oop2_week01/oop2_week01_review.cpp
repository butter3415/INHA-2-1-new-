//// 230301 김태간 교수님 코드 복습 자료
//# include<iostream>
//using namespace std;
//
//int main() {
//	int number;
//	bool isPrime = true;
//
//	cout << "소수 판정 수 :";
//	cin >> number;
//
//	if (number < 1) {
//		isPrime = false;
//	}
//	else {
//		for (int i = 2; i < number; i++) {
//			if (number % i == 0)
//			{
//				isPrime = false;
//				break;
//			}
//		}
//	}
//
//	if (isPrime) {
//		cout << number << " is Prime Number." << endl;
//	}
//	else {
//		cout << number << " is NOT Prime Number." << endl;
//	}
//
//
//
//}