//D: 最长公共子序列
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 67     Solved : 28
//Description
//求两个序列的最每组测试样例都为一行，两组字符串，每组不超过1000，用空格隔开。求最长公共子序列，都为小写字母。
//
//Input
//每组测试样例都为一行，两组字符串，每组不超过1000，用空格隔开。
//
//Output
//对于每个测试实例，输出最长公共子序列的长度，每个实例的输出占一行。
//
//Sample Input
//abcfbc abfcab
//programming contest
//abcd mnp
//Sample Output
//4
//2
//0
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<string.h>
//#include<string>
//#include<algorithm>
//
//#include<iostream> 
//#include<string.h>
//using namespace std;
//
//const int maxn = 1e5 + 10;
//string a, b;
//const int ERROR = maxn;
//int C[1010][1010] = { {0} };
//
//int cmp(int a, int b) {
//    return a > b ? a : b;
//}
//int LCS(string a, string b, int m, int n)
//{
//    for (int i = 1; i < m; i++) {
//        for (int j = 1; j < n; j++) {
//            if (a[i] == b[j]) {
//                C[i][j] = C[i - 1][j - 1] + 1;
//            }
//            else {
//                C[i][j] = cmp(C[i - 1][j], C[i][j - 1]);
//            }
//        }
//    }
//    return C[m - 1][n - 1];
//}
//int main()
//{
//    while (cin >> a >> b)
//    {
//        a = ' ' + a;
//        b = ' ' + b;
//        int m = a.length();
//        int n = b.length();
//        printf("%d\n", LCS(a, b, m, n));
//        //for (int i = 0; i < m; i++) {
//        //    for (int j = 0; j < n; j++) {
//        //        if (j == n - 1) {
//        //            cout << C[i][j] << endl;
//        //            break;
//        //        }
//        //        cout << C[i][j] <<" ";
//        //    }
//        //}
//    }
//    return 0;
//}
