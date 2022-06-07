//B: 众数问题
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 100     Solved : 36
//Description
//给定含有n个元素的多重集合S，每个元素在S中出现的次数称为该元素的重数。多重集S中重数最大的元素称为众数。例如，S = { 1，2，2，2，3，5 }。多重集S的众数是2，其重数为3。对于给定的由n 个自然数组成的多重集S，计算S的众数及其重数。如果出现多个众数，请输出最小的那个。
//
//Input
//输入数据的第1行是多重集S中元素个数n（n < 1300000）；接下来的n行中，每行有一个最多含有5位数字的自然数。
//
//    Output
//    输出数据的第1行给出众数，第2行是重数。
//
//    Sample Input
//    6
//    1
//    2
//    2
//    2
//    3
//    5
//    Sample Output
//    2
//    3
//    Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//typedef long long LL;
//const LL maxn = 1e5;
//LL n;
//int ans[maxn];
//int multipe = maxn;
//int res;
//
//int main() {
//	while (scanf("%lld", &n) != EOF) {
//		res = 0;
//		memset(ans, 0, sizeof(ans));
//		for (int i = 0; i < n; i++) {
//			int temp;
//			scanf("%d", &temp);
//			ans[temp]++;
//		}
//		for (int i = 0; i < maxn; i++) {
//			if (ans[i] > res) {
//				multipe = i;
//				res = ans[i];
//			}
//		}
//		cout << multipe << endl;
//		cout << res << endl;
//	}
//	return 0;
//}