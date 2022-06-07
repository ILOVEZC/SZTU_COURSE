//F: 背包问题
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 92     Solved : 33
//Description
//n 种物品，每种物品有重量 w[i]、价值v[i]，数量不限，背包容量为 b。求背包能装物品最大价值。
//
//Input
//每组数据第一行 n b，表示总共有 n 种物品和背包容量b，其中 1 ≤ n, b ≤ 1000。
//
//接下来 n 行每行两个数 w[i]与v[i] 表示物品的重量与价值，其中 1 ≤ w[i] ≤ b， 1 ≤ v[i] ≤ 1000。
//
//Output
//输出背包能装的最大价值。
//
//Sample Input
//4 10
//2 1
//3 3
//4 5
//7 9
//Sample Output
//12
//Hint


//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int maxn = 1e3 + 10;
//int v[maxn], w[maxn];
//int f[maxn][maxn]; //f[i][j]表示取i种物品容量为j时的最大价值
//int main()
//{
//    int x, y;
//    cin >> x >> y;
//    for (int i = 1; i <= x; i++)
//    {
//        cin >> w[i] >> v[i];
//    }
//    for (int i = 1; i <= x; i++)
//    {
//        for (int j = 1; j <= y; j++)
//        {
//            f[i][j] = f[i - 1][j];
//            if (j >= w[i])
//            {
//                f[i][j] = max(f[i][j], f[i][j - w[i]] + v[i]);
//            }
//        }
//    }
//    int ans = 0;
//    for (int i = 1; i <= y; i++) {
//        ans = max(ans, f[x][i]);
//    }
//    cout << ans << endl;
//    return 0;
//}
