//C: 最长递增子序列
//Time Limit : 3 Sec     Memory Limit : 128 Mb     Submitted : 76     Solved : 30
//Description
//给出长度为N的数组，找出这个数组的最长递增子序列。(递增子序列是指，子序列的元素是递增的）
//
//    例如 : 1 3 2 5 4 7 6 9 8, 最长递增子序列为1 3 5 7 9
//
//    Input
//    输入数据首先包括一个整数 T(1≤10), 表示测试实例的个数。
//
//    每个测试实例的第一行是一个整数 N(2≤N≤5000) ，表示序列的长度。
//
//    第二行数字是一组数组，且所有的整数均在区间[0, 106]内。
//
//    Output
//    对于每个测试实例，输出最长递增子序列的长度，每个实例的输出占一行。
//
//    Sample Input
//    1
//    9
//    1 3 2 5 4 7 6 9 8
//    Sample Output
//    5


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//const int maxn = 1e5 + 10;
//int t, n, a[maxn];
//int longest[maxn];
//
//int LIS(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//        longest[i] = 1;
//
//    for (int j = 1; j < n; j++) {
//        for (int i = 0; i < j; i++) {
//            if (a[j] > a[i] && longest[j] < longest[i] + 1) {
//                longest[j] = longest[i] + 1; //计算以arr[j]结尾的序列的最长递增子序列长度  
//            }
//        }
//    }
//
//    int max = 0;
//    for (int j = 0; j < n; j++) {
//        if (longest[j] > max) max = longest[j];  //从longest[j]中找出最大值  
//    }
//    return max;
//
//}
//int main()
//{
//    scanf("%d", &t);
//    while (t--)
//    {
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//            scanf("%d", &a[i]);
//        printf("%d\n", LIS(a, n));
//    }
//    return 0;
//}