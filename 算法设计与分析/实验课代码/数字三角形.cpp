//E: 数字三角形
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 75     Solved : 32
//Description
//给出如下图的数字三角形，要求从顶层走到底层，若每一步只能走到相邻的结点，则经过的结点的数字之和最大是多少？
//
//Input
//输入数据首先包括一个整数T, 表示测试实例的个数。
//
//每个测试实例的第一行是一个整数N(1 <= N <= 100)，表示数塔的高度。
//
//接下来用N行数字表示数塔，其中第i行有个i个整数，且所有的整数均在区间[0, 99]内。
//
//Output
//对于每个测试实例，输出可能得到的最大和，每个实例的输出占一行。
//
//Sample Input
//1
//5
//7
//3 8
//8 1 0
//2 7 4 4
//4 5 2 6 5
//Sample Output
//30
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//const int maxn = 110;
//int d[maxn][maxn];
//int ans[maxn][maxn];
//int t;
//int n;
//
//int main() {
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d", &n);
//		memset(d, -1, sizeof(d));
//		memset(ans, -1, sizeof(ans));
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= i; j++) {
//				scanf("%d", &d[i][j]);
//			}
//		}
//		for (int j = 1; j <= n; j++)
//			ans[n][j] = d[n][j];
//		for (int i = n; i > 1; i--)
//			for (int j = 1; j < i; j++)
//			{
//				ans[i - 1][j] = max(ans[i][j], ans[i][j + 1]) + d[i - 1][j];
//			}
//		printf("%d\n", ans[1][1]);
//	}
//	return 0;
//}
