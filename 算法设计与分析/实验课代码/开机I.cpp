//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//#include<stack>
//using namespace std;
//
//int dp[1005];
//int ans;
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		ans = 0;
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &dp[i]);
//		}
//		sort(dp, dp + n);
//		int num = n;
//		for (int i = 0; i < n; i++) {
//			ans += dp[i];
//			ans += (num - 1) * (dp[i]*2);
//			num--;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}