//#include <iostream>	
//using namespace std;	
//
//
//int main() { 
//	int number;
//	bool isprime = true;	// 약수 발생 시 false
//
//	cin >> number;	// scanner sc = new scanner(system.in); int number = sc.nextint();
//	
//	// cout << number << endl;
//
//	if (number < 1) {
//		isprime = false;
//	}
//	else {
//		for (int i = 2; i < number; i++) {
//			if (number % i == 0) {
//				isprime = false;
//				break;	// for구문 탈출
//			}
//		}
//	}
//
//	if (isprime == true) {
//		cout << number << " is prime number." << endl;	// system.out.println("~~~");
//	}
//	else {
//		cout << number << " is not prime number." << endl;
//	}
//
//	// return 0;
//}
