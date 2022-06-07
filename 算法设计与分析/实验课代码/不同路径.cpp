//G: 不同路径
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 165     Solved : 53
//Description
//一个机器人位于一个 m x n 网格的左上角，机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角，问总共有多少条不同的路径？
//
//图解
//图解
//Input
//输入一行，包含由空格隔开的两个整数m，n（1 <= m，n <= 25），表示网格的长宽。
//
//Output
//输出一行，表示从网格左上角到右下角总共有多少条不同的路径。
//
//Sample Input
//3 2
//Sample Output
//3
//Hint
//对于样例的输入输出 从左上角开始，总共有 3 条路径可以到达右下角。 1. 向右->向下->向下 2. 向下->向下->向右 3. 向下->向右->向下


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//typedef long long LL;
//const int maxn = 1e2;
//LL ans[maxn][maxn];
//int t;
//int m, n;
//
//int main() {
//
//	while (scanf("%d %d", &m, &n) != EOF) {
//		memset(ans, 0, sizeof(ans));
//		for (int i = 1; i <= m; i++)ans[i][1] = 1;
//		for (int i = 1; i <= n; i++)ans[1][i] = 1;
//		for (int i = 2; i <= m; i++)
//			for (int j = 2; j <= n; j++)
//			{
//				ans[i][j] = ans[i][j - 1] + ans[i - 1][j];
//			}
//		printf("%lld\n", ans[m][n]);
//		/*for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <= n; j++) {
//				cout << ans[i][j] << ' ';
//			}
//			cout << endl;
//		}*/
//	}
//	return 0;
//}
