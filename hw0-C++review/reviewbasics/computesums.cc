// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
// sum the numbers from 1 to n and return the answer
int sum(int n) {
	int suhm = 0;
	for (int i = 1; i <= n; i++) {
		suhm = suhm + i;
	}
	return suhm;
}

// sum the numbers from 1/1 + 1/2 + 1/3 + ... to 1/n and return
// sum 1/1 + 1/2 + 1/3 + ... + 1/100 = 5.18
float sumReciprocals(int n) {
	float suhm2 = 0;
	for (int i = 1; i <= n; i++) {
		suhm2 = suhm2 + (1/(float)i);
	}
	return suhm2;
}

// sum the numbers from 1/n to 1/1 (same as above but reversed) and return
// 1/n + 1/(n-1) + 1/(n-2) + ... + 1/1
float sumReciprocalsReverse(int n) {
	float suhm3 = 0;
	for (int i = n; i >= 1; i--) {
		suhm3 = suhm3 + (1 / (float)i);
	}
	return suhm3;
}

int main() {
	cout << sum(100) << '\n';
	cout << sumReciprocals(100) << '\n';
	cout << sumReciprocalsReverse(100) << '\n';
	system("pause");
	return 1;
}
