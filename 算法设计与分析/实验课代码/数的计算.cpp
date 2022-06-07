//C: 数的计算
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 91     Solved : 38
//Description
//我们要求找出具有下列性质数的个数(包含输入的正整数 n)。
//
//先输入一个正整数 n(n≤1000), 然后对此正整数按照如下方法进行处理：
//
//不作任何处理；
//在它的左边加上一个正整数, 但该正整数不能超过上次加的数（第一次加则是原数）的一半；
//加上数后, 继续按此规则进行处理, 直到不能再加正整数为止。
//Input
//1 个正整数 n(n ≤ 1000)
//
//Output
//1 个整数，表示具有该性质数的个数。
//
//Sample Input
//6
//Sample Output
//6
//Hint
//满足条件的数为
//
//6，16，26，126，36，136
//


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//long long int ans[1100] = { 0 };
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n <= 0) {
//            continue;
//        }
//        ans[1] = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            ans[i]++;
//            for (int j = 1; j <= i / 2; j++)
//                ans[i] += ans[j];
//        }
//        printf("%lld\n", ans[n]);
//    }
//    return 0;
//}