//A: 打家劫舍问题
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 94     Solved : 33
//Description
//你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。 给定一个代表每个房屋存放金额的非负整数数组，计算你 不触动警报装置的情况下 ，一夜之内能够偷窃到的最高金额。
//
//Input
//每组测试案例有两行，第一行只有一个整数N，代表着有N间房屋(2 <= N <= 10000)
//
//第二行有N个整数，代表着每间房屋里的金额，金额范围[0, 1000]。
//
//Output
//输出你可以得到的最高金额
//
//Sample Input
//4
//1 3 2 1
//5
//2 7 9 3 1
//Sample Output
//4
//12
//Hint
//dp[i][0] 与 dp[i][1] 分别表示第 i 个物品取与不取，分别考虑如何基于 dp[i - 1][0]与dp[i - 1][1]进行状态转移。
//
//参考代码框架
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//const int maxn = 1e4 + 10;
//int max(int x, int y) { return x > y ? x : y; }
//int n, a;
//int dp[maxn][2];
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        memset(dp, 0, sizeof(dp));
//        dp[0][0] = dp[0][1] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &a);
//            // TODO: 完成状态转移
//        }
//        printf("%d\n", max(dp[n][0], dp[n][1]));
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//const int maxn = 1e4 + 10;
//int max(int x, int y) { return x > y ? x : y; }
//int n, a;
//int dp[maxn][2];
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        memset(dp, 0, sizeof(dp));
//        dp[0][0] = dp[0][1] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &a);
//            dp[i][0] = max(dp[i - 2][0], dp[i - 1][1]) + a;
//            dp[i][1] = max(dp[i - 2][0], dp[i - 1][0]);
//            // TODO: 完成状态转移
//        }
//        printf("%d\n", max(dp[n][0], dp[n][1]));
//    }
//    return 0;
//}