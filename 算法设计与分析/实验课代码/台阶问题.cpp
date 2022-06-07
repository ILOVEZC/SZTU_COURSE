//B: 台阶问题
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 129     Solved : 37
//Description
//有 N 级的台阶，你一开始在底部，每次可以向上迈最多 K 级台阶（最少 1 级），问到达第 N 级台阶有多少种不同方式。
//
//Input
//两个正整数N，K。1 ≤ N ≤ 106, 1 ≤ K ≤ 20
//
//Output
//一个正整数，为不同方式数，由于答案可能很大，你需要输出 ans mod 100003 后的结果。
//
//Sample Input
//5 2
//Sample Output
//8
//Hint
//N级台阶的情况可以由 N - K ~N - 1 这些台阶的情况得到
//
//参考代码框架
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//const int mod = 100003;
//int n, k;
//int ans[1111111];
//int main()
//{
//    while (scanf("%d%d", &n, &k) != EOF)
//    {
//        ans[0] = 1;
//        // TODO: 递推得到 ans[n]
//        printf("%d\n", ans[n]);
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//const int mod = 100003;
//int n, k;
//int ans[1111111] = { 0 };
//int main()
//{
//    long long int j;
//    while (scanf("%d%d", &n, &k) != EOF)
//    {
//        ans[0] = 1;
//        for (int i = 0; i <= n; i++) {
//            j = 1; //每次求ans[i]时重置j=1
//            //递推求ans[i]的值
//            while (j <= k && (i - j) >= 0) {
//                ans[i] += ans[i - j];
//                ans[i] = ans[i] % 100003;
//                j++;
//            }
//        }
//        printf("%d\n", ans[n]);
//    }
//    return 0;
//}