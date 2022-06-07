//F: 区间和
//Time Limit : 2 Sec     Memory Limit : 128 Mb     Submitted : 366     Solved : 30
//Description
//给出一串由N个自然数组成的数列 a1, a2, a3, ..., an，之后给出M次询问，每次询问包含两个数字L和R。对于每次询问，求出L和R之间所有数（包括L和R本身）之和。
//
//Input
//输入仅有一组数据，共 M  + 2行。
//
//第一行有两个用空格隔开的自然数 N 和 M，表示数列中共有N个数字，一共有 M 次询问。保证 1 ≤ N, M ≤ 1 × 106 第二行有 N 个用空格隔开的自然数 a1、a2、a3、…… 、aN，对于所有的i，都有 1 ≤ ai ≤ 1 × 106
//
//第三行到第M + 2行，每行有两个自然数 L 和 R ，表示要问数列中aL到aR之间的所有数之和（包括aL和aR）。保证 1 ≤ L ≤ R ≤ N
//
//Output
//输出共 M行，每行1个自然数，即数列中aL到aR之间的所有数之和（包括aL和aR）
//
//Sample Input
//5 8
//1 2 3 4 5
//1 3
//2 5
//2 3
//1 1
//5 5
//1 5
//3 4
//4 5
//Sample Output
//6
//14
//5
//1
//5
//15
//7
//9
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//long long int ans[1000010];
//long long int n, m;
//long long int a, b;
//int main()
//{
//    scanf("%lld %lld", &n, &m);
//    ans[0] = 0;
//    for (long long int i = 1; i <= n; i++) {
//        int temp;
//        scanf("%d", &temp);
//        ans[i] = temp + ans[i - 1];
//    }
//    for (long long int i = 0; i < m; i++) {
//        scanf("%lld %lld", &a, &b);
//        long long int result = ans[b] - ans[a - 1];
//        printf("%lld\n", result);
//    }
//    return 0;
//}