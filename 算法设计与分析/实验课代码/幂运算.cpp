//D: 幂运算
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 106     Solved : 30
//Description
//给你三个整数a, b, p，求ab mod p的值
//
//Input
//第一行是一个整数t，表示t组数据。
//
//接下来的n行，每行有 3 个整数，分别表示a, b, p
//
//t ≤ 2  * 105，a  > 0, b  > 0, p ≥ 2,
//
//Output
//每组数据，输出一个整数表示答案。
//
//Sample Input
//2
//2 10 9
//2 3 3
//Sample Output
//7
//2
//Hint


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef long long ll;
//
////当b为偶数时，a^ b可以转为a ^ 2的b / 2次方。
////当b为奇数时，a ^ b可以转为a ^ 2的b / 2次方，再乘以a。
//ll longlongPower(ll x, ll n, ll m) {
//	if (n == 0)	return 1;
//	ll res = longlongPower(x * x % m, n / 2, m);
//	if (n & 1)	res = res * x % m;
//	return res;
//}
//int main() {
//	int t;
//	scanf("%d", &t);
//	int a, b, p;
//	while (t--) {
//		scanf("%d %d %d", &a, &b, &p);
//		printf("%lld\n", longlongPower(a, b, p));
//	}
//	return 0;
//}