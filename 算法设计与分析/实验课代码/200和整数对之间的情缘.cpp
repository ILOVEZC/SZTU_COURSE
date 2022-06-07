// C : 200和整数对之间的情缘

// Description
// 给你一个有N个整型数字的序列A，整数对(i, j)满足以下条件，请问能找到多少这样的整数对：

// 1 ≤ i, j ≤ N

// Ai−Aj 是200的整数倍

// Input
// 第一行输入N，第二行输入N个整数分别A1 A2 … AN

// 所有输入均为整型(int)

// 2 ≤ N ≤ 2 × 105

// 1 ≤ Ai ≤ 109

// Output
// 输出答案并换行

// Sample Input
// 6
// 123 223 123 523 200 2000
// Sample Output
// 4
// Hint

//#include<iostream>
//#include<stdio.h>
//#include<math.h>
//
//using namespace std;
//
//int temp[200] = { 0 };
//int main() {
//	int n;
//	int num;
//	int pair = 0;
//	cin >> n;
//	while (n--) {
//		cin >> num;
//		temp[num % 200]++;
//	}
//	for (int i = 0; i < 200; i++) {
//		if (temp[i] > 1) {
//			pair += (temp[i] * (temp[i] - 1)) / 2;
//		}
//	}
//	cout << pair << endl;
//	return 0;
//}