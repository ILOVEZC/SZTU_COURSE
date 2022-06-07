//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//using namespace std;
//const int maxn = 15;
//int n, a[maxn][maxn], ans;
//bool vis[maxn];
//void DFS(int cur, int nowans)
//{
//    // cur: 当前所在的机器
//    // nowans：当前已走的路程
//    // 回溯处理机器的顺序，保证奇数机器处理完之前不处理偶数机器
//    // 递归终点： ans = min(ans, nowans);
//    bool finish = true;
//    for (int i = 1; i <= n; i++) {
//        if (!vis[i]) {
//            finish = false;
//            break;
//        }
//    }
//    if (finish) {
//        ans = min(ans, nowans);
//        return;
//    }
//
//    for (int i = 3; i <= n; i += 2) {
//        if (!vis[i]) {
//            nowans += a[cur][i];
//            vis[i] = 1;
//            DFS(i, nowans);
//            nowans -= a[cur][i];
//            vis[i] = 0;
//        }
//    }
//    bool odd = true;
//    for (int i = 1; i <= n; i+=2) {
//        if (!vis[i]) {
//            odd = false;
//        }
//    }
//    if (odd) {
//        for (int i = 2; i <= n; i += 2) {
//            if (!vis[i]) {
//                nowans += a[cur][i];
//                vis[i] = 1;
//                DFS(i, nowans);
//                nowans -= a[cur][i];
//                vis[i] = 0;
//            }
//        }
//    }
//    
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        ans = 0x3f3f3f3f;
//        memset(vis, 0, sizeof(vis));
//        for (int i = 1; i <= n; i++)
//            for (int j = 1; j <= n; j++)
//                scanf("%d", &a[i][j]);
//        vis[1] = true;
//        DFS(1, 0);
//        printf("%d\n", ans);
//    }
//    return 0;
//}