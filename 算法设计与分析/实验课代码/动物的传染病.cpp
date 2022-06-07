//A: 动物的传染病
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 104     Solved : 37
//Description
//动物患传染病了。一个动物会每轮传染 x 个动物。试问 n 轮传染后有多少动物被传染？
//
//Input
//两个非负整数 x 和 n。
//
//Output
//一个整数，即被传染的动物数。
//
//Sample Input
//10 2
//Sample Output
//121
//Hint
//参考代码框架
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//long long Solve(int x, int n)
//{
//    // TODO: 递推第 n 轮的结果
//}
//int main()
//{
//    long long x, n;
//    while (scanf("%lld%lld", &x, &n) != EOF)
//    {
//        printf("%lld\n", Solve(x, n));
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//long long Solve(int x, int n)
//{
//    if (n < 1) {
//        return 1;
//    }
//    else {
//        return Solve(x, n - 1) * (x + 1);
//    }
//}
//int main()
//{
//    long long x, n;
//    while (scanf("%lld%lld", &x, &n) != EOF)
//    {
//        printf("%lld\n", Solve(x, n));
//    }
//    return 0;
//}