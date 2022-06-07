// A : log2(N)
// Description
// 给你一个数N，请你找出最大的的整数k，满足 2k ≤ N

// Input
// 1 ≤ N ≤ 1019

// Output
// 输出k并换行

// Sample Input
// 6
// Sample Output
// 2
// Hint
// 注意精度问题

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
	long long a;
	long long int min =0;
	cin >> a;
	while (a>1)
	{
		min++;
		a = a/2;
	}
	cout << min;
	return 0;
}

//方法二
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//typedef unsigned long long ULL;
//ULL n;
//int main()
//{
//    while (scanf("%llu", &n) != EOF)
//    {
//        int k = 0;
//        ULL x = 1;
//        for (; x <= n; x <<= 1, k++);
//        printf("%d\n", k - 1);
//    }
//    return 0;
//}