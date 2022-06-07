//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include <math.h>
//
//int ans[22][22];
//int min = 22;
//int num = 0;
//
//void DFS(int x,int y)
//{
//    if (num > min) { return; }
//    if (x == 1 && y == 1) {
//        // TODO: 处理递归终点，输出结果
//        if (num < min) {
//            min = num;
//        }
//        return;
//    }
//    if (x >= 1 && y >= 1 && x <= 20 && y <= 20) {
//        if (x - 2 >= 1 && y - 1 >= 1) {
//            if (ans[x - 2][y - 1] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x - 2][y - 1] = 1;
//            DFS(x - 2, y - 1);
//            num -= 1;
//            ans[x - 2][y - 1] = 0;
//        }
//        if (x - 2 >= 1 && y + 1 <= 20) {
//            if (ans[x - 2][y + 1] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x - 2][y + 1] = 1;
//            DFS(x - 2, y + 1);
//            num -= 1;
//            ans[x - 2][y + 1] = 0;
//        }
//        if (x - 1 >= 1 && y - 2 >= 1) {
//            if (ans[x - 1][y - 2] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x - 1][y - 2] = 1;
//            DFS(x - 1, y - 2);
//            num -= 1;
//            ans[x - 1][y - 2] = 0;
//        }
//        if (x - 1 >= 1 && y + 2 <= 20) {
//            if (ans[x - 1][y + 2] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x - 1][y + 2] = 1;
//            DFS(x - 1, y + 2);
//            num -= 1;
//            ans[x - 1][y + 2] = 0;
//        }
//        if (x + 2 <= 20 && y - 1 >= 1) {
//            if (ans[x + 2][y - 1] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x + 2][y - 1] = 1;
//            DFS(x + 2, y - 1);
//            num -= 1;
//            ans[x + 2][y - 1] = 0;
//        }
//        if (x + 2 <= 20 && y + 1 <= 20) {
//            if (ans[x + 2][y + 1] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x + 2][y + 1] = 1;
//            DFS(x + 2, y + 1);
//            num -= 1;
//            ans[x + 2][y + 1] = 0;
//        }
//        if (x + 1 <= 20 && y - 2 >= 1) {
//            if (ans[x + 1][y - 2] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x + 1][y - 2] = 1;
//            DFS(x + 1, y - 2);
//            num -= 1;
//            ans[x + 1][y - 2] = 0;
//        }
//        if (x + 1 <= 20 && y + 2 <= 20) {
//            if (ans[x + 1][y + 2] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x + 1][y + 2] = 1;
//            DFS(x + 1, y + 2);
//            num -= 1;
//            ans[x + 1][y + 2] = 0;
//        }
//        if (x - 2 >=1 && y - 2 >= 1) {
//            if (ans[x - 2][y - 2] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x - 2][y - 2] = 1;
//            DFS(x - 2, y - 2);
//            num -= 1;
//            ans[x - 2][y - 2] = 0;
//        }
//        if (x - 2 >= 1 && y + 2 <= 20) {
//            if (ans[x - 2][y + 2] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x - 2][y + 2] = 1;
//            DFS(x - 2, y + 2);
//            num -= 1;
//            ans[x - 2][y + 2] = 0;
//        }
//        if (x + 2 <= 20 && y - 2 >= 1) {
//            if (ans[x + 2][y - 2] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x + 2][y - 2] = 1;
//            DFS(x + 2, y - 2);
//            num -= 1;
//            ans[x + 2][y - 2] = 0;
//        }
//        if (x + 2 <= 20 && y + 2 <= 20) {
//            if (ans[x + 2][y + 2] == 1) {
//                return;
//            }
//            num += 1;
//            ans[x + 2][y + 2] = 1;
//            DFS(x + 2, y + 2);
//            num -= 1;
//            ans[x + 2][y + 2] = 0;
//        }
//    }
//}
//int main()
//{
//    int x1, y1, x2, y2;
//    while (scanf("%d %d", &x1,&y1) != EOF)
//    {
//        scanf("%d %d", &x2, &y2);
//        min = 999;
//        num = 0;
//        memset(ans, 0, sizeof(ans));
//        ans[x1][y1] = 1;
//        DFS(x1,y1);
//        printf("%d\n", min);
//        num = 0;
//        min = 999;
//        memset(ans, 0, sizeof(ans));
//        ans[x2][y2] = 1;
//        DFS(x2, y2);
//        printf("%d\n", min);
//    }
//    return 0;
//}
