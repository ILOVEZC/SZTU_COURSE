//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//
//int ans[7][7];
////int a[4] = { 0,-1,0,1 };
////int b[4] = { 1,0,-1,0 };
//int num;
//int n, m, t;
//int sx, sy, fx, fy;
//int x, y;
//
//void search(int x, int y) {
//	if (x == fx && y == fy) {
//		num++;
//		return;
//	}
//	if (x > 0 && y > 0 && x <= n && y <= m) {
//		if (ans[x + 1][y] != 1) {
//			ans[x + 1][y] = 1;
//			search(x + 1, y);
//			ans[x + 1][y] = 0;
//		}
//		if (ans[x][y - 1] != 1) {
//			ans[x][y - 1] = 1;
//			search(x, y - 1);
//			ans[x][y - 1] = 0;
//		}
//		if (ans[x - 1][y] != 1) {
//			ans[x - 1][y] = 1;
//			search(x - 1, y);
//			ans[x - 1][y] = 0;
//		}
//		if (ans[x][y + 1] != 1) {
//			ans[x][y + 1] = 1;
//			search(x, y + 1);
//			ans[x][y + 1] = 0;
//		}
//	}
//}
//
//int main() {
//	
//	while (scanf("%d %d %d", &n, &m, &t) != EOF) {
//		scanf("%d %d", &sx, &sy);
//		scanf("%d %d", &fx, &fy);
//		num = 0;
//		memset(ans, 0, sizeof(ans));
//		while (t--) {
//			scanf("%d %d", &x, &y);
//			ans[x][y] = 1;
//		}
//		ans[sx][sy] = 1;
//		search(sx,sy);
//		printf("%d\n", num);
//	}
//	return 0;
//}