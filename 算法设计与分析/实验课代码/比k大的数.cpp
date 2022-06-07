//H: 比k大的数
//Time Limit : 2 Sec     Memory Limit : 128 Mb     Submitted : 67     Solved : 33
//Description
//给出一个由n个整数组成的数列 a1, a2, a3, ..., an
//
//之后给出m个整数k。 问：对于每一个k，数列中有多少个数比k大？
//
//Input
//输入共包括三行
//
//第一行是两个由空格隔开的正整数n和m
//
//第二行是由n个整数组成的数列 a1, a2, a3, ..., an ，数与数之间由空格隔开。
//
//第三行有m个整数k，数与数之间由空格隔开。
//
//保证 0 < n ≤ 1 × 103; 0 < m ≤ 1 × 103;  − 1 × 103 ≤ a1, a2, a3, ..., an ≤ 1 × 103;  − 1 × 106 ≤ k ≤ 1 × 106;
//
//Output
//输出共包括m行，每行一个整数，表示数列中有多少个数比k大
//
//Sample Input
//5 5
//1 2 3 4 5
//3 5 4 6 - 1
//Sample Output
//2
//0
//1
//0
//5
//Hint
//题目给的数据范围很小（ - 1000~1000），可以先统一映射到 0~2000，统计总数与前缀和
//对于每个 k，超出范围可直接得结果，范围内就用总数减去前缀和。


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//int alist[1100];
//long long int blist[1100];
//
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &alist[i]);
//	}
//	for (int i = 0; i < m; i++) {
//		scanf("%lld", &blist[i]);
//	}
//	for (int i = 0; i < m; i++) {
//		long long int count = 0;;
//		for (int j = 0; j < m; j++) {
//			if (alist[j] > blist[i]) {
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}