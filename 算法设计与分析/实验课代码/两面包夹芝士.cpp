// D : 两面包夹芝士

// Description
// 给你两个长度为N的整型(int)数组A = (A1, A2, A3, …, AN) 和 B = (B1, B2, B3, …, BN)

// 请你找出有多少整型(int)数字x，满足Ai ≤ x ≤ Bi，其中 1≤ i  ≤ N

// Input
// 第一行输入N，第二行输入N个数字Ai，第三行输入N个数字Bi

// 1 ≤ N ≤ 100

// 1 ≤ Ai ≤ Bi ≤ 1000

// 所有输入均为int

// Output
// 输出有多少个符合题意的x，然后换行

// Sample Input
// 3
// 3 2 5
// 6 9 8
// Sample Output
// 2
// Hint

//#include<iostream>
//#include<stdio.h>
//#include<math.h>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int* a = new int[n];
//	int* b = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> b[i];
//	}
//	int amax = 0;
//	int bmin = 99999; //0x3f3f3f3f
//	for (int i = 0; i < n; i++) {
//		if (a[i] > amax) { amax = a[i]; }
//		if (b[i] < bmin) { bmin = b[i]; }
//	}
//	if (amax <= bmin) {
//		cout << bmin - amax + 1 << endl;
//	}
//	else {
//		cout << 0 << endl;
//	}
//	return 0;
//}