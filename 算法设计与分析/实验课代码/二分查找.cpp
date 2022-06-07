//G: 二分查找
//Time Limit : 2 Sec     Memory Limit : 128 Mb     Submitted : 240     Solved : 32
//Description
//给出一串由N个自然数组成的非降数列 a1, a2, a3, ..., an，即数列中位置靠后的数一定大于或等于位置靠前的数。之后给出M次询问，每次询问包含一个数字Q。对于每次询问，求出数列中第一个大于或等于Q的数字的编号（数字在数列中的编号从1开始）
//
//Input
//输入仅有一组数据，共 M  + 2行。
//
//第一行有两个用空格隔开的自然数 N 和 M，表示数列中共有N个数字，一共有 M 次询问。保证 1 ≤ N ≤ 107, 1 ≤ M ≤ 1 × 106 第二行有 N 个用空格隔开的自然数 a1、a2、a3、…… 、aN，分别表示ai，都有 1 ≤ ai ≤ 109, ai ≤ ai  + 1
//
//第三行到第M  + 2行，每行一个数Q，表示要问数列中第一个大于或等于Q的元素的编号。保证 1 ≤ Q ≤ aN
//
//Output
//输出共 M行，每行1个自然数，即数列中第一个大于或等于Q的元素的编号
//
//Sample Input
//5 3
//1 3 5 7 9
//1
//3
//6
//Sample Output
//1
//2
//4
//Hint

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//long long int ans[10000001] = { 0 };
//
//int main()
//{
//    long long int n, m;
//    scanf("%lld %lld", &n, &m);
//    for (long long int i = 1; i <= n; i++) {
//        scanf("%d", &ans[i]);
//    }
//    for (long long int i = 0; i < m; i++) {
//        long long int temp;
//        scanf("%lld", &temp);
//        long long int left = 1;
//        long long int right = n;
//        long long int result = 0;
//        while (left <= right) {
//            long long int middle = left + ((right - left) / 2);
//            if (ans[middle] >= temp) {
//                result = middle;
//                right = middle - 1;
//            }
//            else if (ans[middle] < temp) {
//                left = middle + 1;
//            }
//        }
//        printf("%d\n", result);
//    }
//    return 0;
//}