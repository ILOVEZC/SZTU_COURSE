// E : 绝对值最小的和
//     Time Limit: 2 Sec     Memory Limit: 128 Mb     Submitted: 105     Solved: 39    
// Description
// 给出一串由 N 个整数组成的数列 a1, a2, a3, ..., aN 求问数列中哪两个不同元素的和的绝对值最小。

// Input
// 输入共一组数据，共2行

// 第一行一个数字 N ，表示数列中元素的个数

// 第二行共 N 个数字，两两之间用空格分开，表示

// a1, a2, a3, ..., aN

// 输入保证 2 ≤ N ≤ 1 × 103,  − 1 × 108 ≤ ai ≤ 1 × 108

// Output
// 输出共1行，两个用空格隔开的数字 i 和 j ，表示 ai + aj 的绝对值最小。

// 若两对元素的之和的绝对值相同，且都比其它对元素之和的绝对值小，则取编号较小元素的编号较小的一对；若编号较小元素相同，则取编号较大元素的编号较小的一位。

// 例如，数列：  − 1, 1, 1,  − 1 中，有 |a1 + a2| = |a1 + a3| = |a2 + a4| = |a3 + a4| = 0

// ，它们的绝对值相等且最小。但应输出1 2

// Sample Input
// 5
// 5 4 3 2 1
// Sample Output
// 4 5
// Hint

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
long long int ans[1100];
long long int a ,b;
int main()
{
   int n;
   long long int minResult;
   scanf("%d", &n);
   for (int i = 1; i <= n; i++) {
       scanf("%lld", &ans[i]);
   }
   a = 1, b = 2;
   minResult = labs(ans[1] + ans[2]);
   for (int i = 1; i <= n; i++)
   {
       for (int j = i + 1; j <= n; j++) {
           long long temp = labs(ans[i] + ans[j]);
           if (temp < minResult) {
               a = i;
               b = j;
               minResult = temp;
           }
       }
   }
   printf("%lld %lld", a,b);
   return 0;
}