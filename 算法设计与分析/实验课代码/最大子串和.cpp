//B: 最大子串和
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 84     Solved : 33
//Description
//给定一个整数数组，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
//
//Input
//有多组测试数据。 对于每组测试数据，第一行只有一个整数N，代表着数组的大小(1 <= N <= 100000)
//
//第二行有N个整数，(-100 <= N <= 100)
//
//Output
//每组测试数据仅输出一行，包括一个整数，表示最大子串和。
//
//Sample Input
//9
//- 2 1 - 3 4 - 1 2 1 - 5 4
//Sample Output
//6
//Hint
//参考代码框架
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//const int maxn = 1e5 + 10;
//int n, a[maxn], dp[maxn];
//int Solve(int a[], int n, int dp[])
//{
//    // TODO: 计算最大子串和
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 1; i <= n; i++)
//            scanf("%d", &a[i]);
//        printf("%d\n", Solve(a, n, dp));
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//const int maxn = 1e5 + 10;
//int n, a[maxn], dp[maxn];
//
////思路：当加第i个数时，如果前面i-1个数的和小于0，那么再加第i个数那么得到的数会比第i个数还小，所以就重新开始考虑第i个数以后的数作为最大子串。
//int Solve(int a[], int n, int dp[])
//{
//    // TODO: 计算最大子串和
//    int temp = 0, sum = a[0];
//    for (int i = 0; i < n; i++) {
//        if (temp <= 0) {
//            temp = a[i];
//        }
//        else {
//            temp += a[i];
//        }
//        if (temp > sum) {
//            sum = temp;
//        }
//    }
//    return sum;
//
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//            scanf("%d", &a[i]);
//        printf("%d\n", Solve(a, n, dp));
//    }
//    return 0;
//}