//E: 01饭卡
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 177     Solved : 32
//Description
//如果购买一个商品之前，卡上的剩余金额大于或等于5元，就一定可以购买成功（即使购买后卡上余额为负），否则无法购买（即使金额足够）。所以大家都希望尽量使卡上的余额最少。 某天，食堂中有n种菜出售，每种菜可购买一次。已知每种菜的价格以及卡上的余额，问最少可使卡上的余额为多少。
//
//Input
//多组数据。对于每组数据： 第一行为正整数n，表示菜的数量。n <= 1000。 第二行包括n个正整数，表示每种菜的价格。价格不超过50。 第三行包括一个正整数m，表示卡上的余额。m <= 1000。
//
//n = 0表示数据结束。
//
//Output
//对于每组输入, 输出一行, 包含一个整数，表示卡上可能的最小余额。
//
//Sample Input
//1
//50
//5
//10
//1 2 3 2 1 1 2 3 2 1
//50
//0
//Sample Output
//- 45
//32
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//
//int a[1100], dp[1100] = { 0 }; //dp[i]表示卡上有i元时的最大消费
//
//int main() {
//	int n, m, i, j;
//	while (cin >> n)
//	{
//		memset(dp, 0, sizeof(dp));
//		if (n == 0) {
//			break;
//		}
//		for (i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//		}
//		scanf("%d", &m);
//		if (m < 5) {
//			printf("%d\n", m);
//			continue;
//		}
//		sort(a, a + n);
//		m -= 5;
//		//先拿5元买最贵的菜，剩下m-5元，买n-1种菜
//		for (i = 0; i < n - 1; i++) {
//			for (j = m; j >= a[i]; j--) {
//				dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
//			}
//			//下面代码可以观察出该问题的解决过程
//			/*for (int k = 0; k < m-4; k++) {
//				printf("%d ", dp[k]);
//			}
//			printf("\n");*/
//		}
//		printf("%d\n", m + 5 - dp[m] - a[n - 1]);
//	}
//	return 0;
//}