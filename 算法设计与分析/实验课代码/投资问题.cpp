//H: 投资问题
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 46     Solved : 21     SpecialJudge
//Description
//m 元钱，n项投资，
//
//fi(x) : 将 x 元投入第 i 个项目的效益。 求使得总效益最大的投资方案。
//
//Input
//每组数据第一行 m n，表示总共有 m 元和 n 项投资。
//
//接下来 n 行每行 m 个整数 fi(j) 表示第 i 个项目投资 j 元的收益，i  = 1, 2, …, n, j  = 1, 2, …, m。
//
//对于一切 i，fi(0) = 0。
//
//其中 1 ≤ m, n ≤ 100，0 ≤ fi(j) ≤ 10000
//
//Output
//首先输出一行，一个整数表示最大收益。
//
//然后第二行依次输出能够得到最大收益的每个项目的投资额，空格隔开。
//
//如果有多个解，可输出任意一个。
//
//Sample Input
//5 4
//11 12 13 14 15
//0 5 10 15 20
//2 10 30 32 40
//20 21 22 23 24
//Sample Output
//61
//1 0 3 1
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<string>
//#include<algorithm>
//
//int m, n;
//const int maxn = 110;
//int f[maxn][maxn]; // 第i项投资j万元的收益 1 <= i <= n, 1 <= j <= m
//int F[maxn][maxn];  //最大收益数组
//int x[maxn][maxn];
//int result[maxn];
//
//void print() {
//	int temp = m;
//	printf("%d\n", F[m][n]);
//	int i, j;
//	for (i = n; i > 0; i--) {
//		result[i] = x[temp][i];
//		temp -= x[temp][i];
//	}
//	for (j = 1; j <= n; j++) {
//		printf("%d ", result[j]);
//	}
//	printf("\n");
//}
//
//void maxProfit() {
//	int i, j, k, temp;
//	for (i = 0; i <= m; i++) {
//		F[i][1] = f[i][1];
//		x[i][1] = i;
//	} // 投资第一个项目
//	for (i = 2; i <= n; i++) { // 投资前i个项目
//		F[0][i] = 0; // 投资前i个项目不超过0元的收益是0
//		x[0][i] = 0; // 标记
//		for (j = 1; j <= m; j++) { // 投资钱数不超过j
//			for (k = 0; k <= j; k++) { // 投资当前项目的钱数
//				temp = f[k][i] + F[j - k][i - 1];
//				if (temp > F[j][i]) {
//					F[j][i] = temp; // 更新当前的最优解
//					x[j][i] = k; // 更新标记函数
//				}
//			}
//		}
//	}
//	print();
//}
//
//int main() {
//	while (scanf("%d %d", &m, &n) != EOF) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				scanf("%d", &f[j][i]);
//			}
//		}
//		maxProfit();
//	}
//	return 0;
//}