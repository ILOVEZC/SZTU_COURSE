//F: 合并石子
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 55     Solved : 16
//Description
//在一个圆形操场的四周摆放 N 堆石子, 现要将石子有次序地合并成一堆.规定每次只能选相邻的2堆合并成新的一堆，并将新的一堆的石子数，记为该次合并的得分。
//
//试设计出一个算法, 计算出将 N堆石子合并成 1堆的最小得分和最大得分。
//
//Input
//数据的第 1行是正整数 N，表示有 N 堆石子, N <= 500。
//
//第 2 行有 N 个整数，第 i个整数 ai 表示第 i 堆石子的个数, ai <= 50。
//
//Output
//输出共 2 行，第 1 行为最小得分，第 2 行为最大得分。
//
//Sample Input
//4
//4 5 9 4
//Sample Output
//43
//54
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//
//int dpMin[1010][1010], dpMax[1010][1010], a[1010], n, temp;
//
//int getSum(int start, int step) {
//	int sum = 0;
//	for (int i = 0; i < step; i++)
//		sum += a[(start + i) % n];
//	return sum;
//}
//int main()
//{
//	while (scanf("%d", &n) != EOF) {
//		memset(dpMin, 127 / 3, sizeof(dpMin));
//		memset(dpMax, 0, sizeof(dpMax));
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//			dpMin[i][1] = 0;
//			dpMax[i][1] = 0;
//
//		}
//		for (int t = 2; t <= n; t++) {
//			for (int i = 0; i < n; i++) {
//				int sum = getSum(i, t);
//				for (int k = 1; k < t; k++)
//					dpMin[i][t] = min(dpMin[i][t], dpMin[i][k] + dpMin[(i + k) % n][t - k] + sum);
//			}
//		}
//		for (int t = 2; t <= n; t++) {
//			for (int i = 0; i < n; i++) {
//				int sum = getSum(i, t);
//				for (int k = 1; k < t; k++)
//					dpMax[i][t] = max(dpMax[i][t], dpMax[i][k] + dpMax[(i + k) % n][t - k] + sum);
//			}
//		}
//		int ans = dpMin[0][n];
//		for (int i = 1; i < n; i++)
//			ans = min(ans, dpMin[i][n]);
//		cout << ans << endl;
//		ans = dpMax[0][n];
//		for (int i = 1; i < n; i++)
//			ans = max(ans, dpMax[i][n]);
//		cout << ans << endl;
//
//	}
//	return 0;
//}