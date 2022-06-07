//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//const int maxn = 14;
//int n;
//int ans;
//bool rcdx[maxn], rcdlr[maxn << 1 | 1], rcdrl[maxn << 1 | 1];
//void DFS(int cur)
//{
//    // TODO: 处理递归终点，并基于三条线标记进行回溯
//    if (cur == n) { ans++;  return; }
//    for (int i = 0; i < n; i++) {
//        
//        if (rcdx[i] == 0 && rcdlr[i - cur + maxn] == 0 && rcdrl[i + cur] == 0) {
//            rcdx[i] = 1;
//            rcdlr[i - cur + maxn] = 1;
//            rcdrl[i + cur] = 1;
//            DFS(cur + 1);
//            rcdx[i] = 0;
//            rcdlr[i - cur + maxn] = 0;
//            rcdrl[i + cur] = 0;
//        }
//    }
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        memset(rcdx, 0, sizeof(rcdx));      // 列
//        memset(rcdlr, 0, sizeof(rcdlr));    // 右对角线标记
//        memset(rcdrl, 0, sizeof(rcdrl));    // 左对角线标记
//        ans = 0;
//        DFS(0);
//        printf("%d\n", ans);
//    }
//    return 0;
//}