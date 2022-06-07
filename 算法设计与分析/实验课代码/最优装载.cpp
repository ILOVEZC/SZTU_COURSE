//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//#include<stack>
//using namespace std;
//
//int dp[10005];
//
//int ans;
//
//int main() {
//	int t;
//	int n, m;
//	while (scanf("%d", &t) != EOF) {
//		while (t--) {
//			scanf("%d %d", &n, &m);
//			ans = 0;
//			for (int i = 0; i < m; i++) {
//				scanf("%d", &dp[i]);
//			}
//			sort(dp, dp + m);
//			/*for (int i = 0; i < m; i++) {
//				cout << dp[i] << " ";
//			}*/
//			for (int i = 0; i < m; i++) {
//				if (n >= dp[i]) {
//					n -= dp[i];
//					ans++;
//				}
//				else { break; }
//			}
//			cout << ans << endl;
//		}
//	}
//	return 0;
//}