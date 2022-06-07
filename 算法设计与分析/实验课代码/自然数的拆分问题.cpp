//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<vector>
//int n;
//std::vector<int> ans;
//void DFS(int last, int remain)
//{
//    if (!remain)
//    {
//        // TODO: 处理递归终点，输出结果
//        if (ans.size() == 1) {
//            return;
//        }
//        else {
//            for (int i = 0; i < ans.size(); i++) {
//                if (i == ans.size() - 1) {
//                    printf("%d\n", ans[i]);
//                }
//                else {
//                    printf("%d+", ans[i]);
//                }
//            }
//        }
//    }
//    for (int i = last; i <= remain; i++)
//    {
//        // TODO: 枚举可能性，进行回溯
//        ans.push_back(i);
//        DFS(i, remain - i);
//        ans.pop_back();
//    }
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        ans.clear();
//        DFS(1, n);
//    }
//    return 0;
//}
