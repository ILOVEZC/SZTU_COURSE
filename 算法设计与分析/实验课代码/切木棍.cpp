//C: 切木棍
//Time Limit : 2 Sec     Memory Limit : 1024 Mb     Submitted : 60     Solved : 10
//Description
//​ 有n根长为，a1, a2⋯an​的木棍。
//
//​ 对n根木棍总共切k​次（可以在任意点切割），即最后变成n  + k根木棍。
//
//​ 请输出各种切法得到的n  + k​​​​根木棍中最长那根在各种切法中的最短值（答案需要向上取整）。
//
//1 ≤ n ≤ 2 × 105
//0 ≤ k ≤ 109
//1 ≤ ai ≤ 109​
//所有值都是整数。
//Input
//n​ k
//
//a1 a2⋯an
//
//Output
//输出一个整数
//
//Sample Input
//2 3
//7 9
//Sample Output
//4
//Hint
//二分


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//typedef long long LL;
//const LL maxn = 2 * 1e5 + 10;
//LL n;
//LL k;
//LL ans[maxn];
//LL maxNum = 0;
//
//int main() {
//	while (scanf("%lld %lld", &n, &k) != EOF) {
//		maxNum = 0;
//		memset(ans, 0, sizeof(ans));
//		for (int i = 0; i < n; i++) {
//			scanf("%lld", &ans[i]);
//		}
//		for (int i = 0; i < n; i++) {
//			if (ans[i] > maxNum) {
//				maxNum = ans[i];
//			}
//		}
//		LL left = 1;
//		LL right = maxNum;
//		LL result = 0;
//		while (left <= right) {
//			LL middle = left + ((right - left) / 2);
//			LL kNum = 0;
//			for (int j = 0; j < n; j++) {
//				LL temp = ans[j];
//				kNum += (temp - 1) / middle;
//			}
//			if (kNum <= k) {
//				result = middle;
//				right = middle - 1;
//			}
//			else if (kNum > k) {
//				left = middle + 1;
//			}
//		}
//		cout << result << endl;
//	}
//	return 0;
//}