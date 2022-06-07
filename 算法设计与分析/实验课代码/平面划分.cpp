//A: 平面划分
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 42     Solved : 36
//Description
//一条直线可以把平面分成两部分，两条直线分成四部分。那么 n 条直线最多可以把平面分成几部分？
//
//Input
//多组数据，每组数据一个正整数 1 ≤ n ≤ 1000。
//
//Output
//Sample Input
//3
//5
//Sample Output
//7
//16
//Hint
//小学奥数：要分的最多，就需要两两相交，且没有任何三条直线交于一点。假设已有 n 条直线，在增加第 n + 1 条时，
//与之前每条直线都有一个独立交点， n 个交点把新的直线分成 n + 1 段，每段都会把一个部分一分为二，所以增加了 n + 1 块。


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//int n;
//long long ans[1100];
//
//int main() {
//	ans[0] = 1;
//	for (int i = 1; i <= 1000; i++) {
//		ans[i] = ans[i - 1] + i;
//	}
//	while (scanf("%d", &n) != EOF) {
//		cout << ans[n] << endl;
//	}
//	return 0;
//}