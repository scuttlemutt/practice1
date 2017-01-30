// practice1.cpp : Defines the entry point for the console application.
//https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations

#include "stdafx.h"
#include <iostream>
using namespace std;

//9


////8
//int u(int n) {
//
//
//	if (n == 0) {
//		return 1;
//	}
//
//	if (n == 1) {
//		return 1;
//	}
//
//	else return u(n - 1) + u(n - 2);
//
//}
//
//int main() {
//	int x;
//	cin >> x;
//	cout << u(x);
//	return 0;
//}

//
//// 7
//int u(int n);
//int main() {
//	int n;
//	cin >> n;
//	int x = u(n);
//	cout << x;
//
//	return 0;
//}
//
//int u(int n) {
//	
//	if (n == 0) {
//		return 0;
//	}
//
//	else {
//		return 3 * u(n-1) + 4;
//	}
//
//	return n;
//}

// ************************TODO******** 6
//int main() {
//
//	int n;
//	cin >> n;
//}

//5
//int main() {
//	int foo[10];
//	int lowest;
//
//	for (int i = 0; i < 10; i++) {
//		int x;
//		cin >> x;
//		foo[i] = x;
//	}
//
//	for (int i = 0; i < 1; i++) {
//		
//		if (i == 0 || foo[i] < lowest) {
//			lowest = foo[i];
//		}
//	}
//	cout << "\n" << lowest;
//}

// 4
//int main() {
//
//	int sum=0;
//	for (int i = 0; i < 10; i++) {
//		int x;
//		cin >> x ;
//		sum += x;
//	}
//
//	cout << sum;
//	return 0;
//}


//exercise 2/3
//int main() {
//
//	int foo;
//	int i=8;
//	while (i<23) {
//		cout << "Type the number " << i <<"\n" ;
//		cin >> foo;
//		if (foo == i) {
//			cout << "correct\n";
//		}
//		else {
//			cout << "incorect\n";
//		}
//		i++;
//	}
//
//
//	return 1;
//}


//Solution 1
//int main()
//{
//	int foo;
//	cout << "Please input your age\n" ;
//	cin >> foo;
//	if (foo >= 56 && foo <= 78) {
//		cout << "YOU WIN\n";
//	}
//	else {
//		cout << "YOU LOSE\n";
//	}
//
//	cout << foo;
//	return 0;
//}

