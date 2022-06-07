// D : 数的划分
//     Time Limit: 1 Sec     Memory Limit: 128 Mb     Submitted: 67     Solved: 34    
// Description
// 将整数 n 分成 k 份，且每份不能为空，任意两个方案不相同（不考虑顺序）。

// 例如：n = 7，k = 3，下面三种分法被认为是相同的。

// 1 , 1 , 5

// 1 , 5 , 1

// 5 , 1 , 1

// 问有多少种不同的分法。

// Input
// n,k （6 < n ≤ 200，2 ≤ k ≤ 6）

// Output
// 1 个整数，即不同的分法。

// Sample Input
// 7 3
// Sample Output
// 4
// Hint
// 对于样例的输入输出

// 四种分法为：

// 1 , 1 , 5

// 1 , 2 , 4

// 1 , 3 , 3

// 2 , 2 , 3

// 递推

// dp[i][j] 表示 i 分成 j 份。由于每份不为 0 ，则 dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1]
// dp[i - j][j] 表示先拿出 j 个 1 放在 j 份上，保证都不为 0，再把剩下的分 j 份，即每份都大于 1
// dp[i - 1][j - 1] 表示第 j 份只有 1 个，剩下的 i - 1 个分配给其他的 j - 1 份，这样保证第 j 份是最少的，不会重复
// 参考代码框架

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int dp[220][11];

// int main()
// {
//     int n, k;
//     memset(dp, 0, sizeof(dp));
//     for(int i = 0; i <= 200; i ++) {
//         // TODO: 最小问题赋初值
//     }
//     while(scanf("%d%d", &n, &k) != EOF)
//     {
//         // TODO: 递推，dp[n][k] 为答案

//     }
//     return 0;
// }


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int dp[220][11];

int main()
{
   int n, k;
   memset(dp, 0, sizeof(dp));
   dp[0][0] = 1;
   while (scanf("%d%d", &n, &k) != EOF)
   {
       // TODO: 递推，dp[n][k] 为答案
       for (int i = 1; i <= n; i++) {
           for (int j = 0; j <= k; j++) {
               if (i >= j) {
                   dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1];
               }
           }
       }
       printf("%d\n", dp[n][k]);
   }
   return 0;
}
