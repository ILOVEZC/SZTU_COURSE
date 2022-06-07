//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//#include<stack>
//using namespace std;
//
//int dp[105];
//int ans[105];
//int result;
//int main() {
//	int n;
//	
//	while (scanf("%d", &n) != EOF) {
//		memset(ans, 0, sizeof(ans));
//		result = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &dp[i]);
//		}
//		for (int j = 0; j < n; j++) {
//			int tempMin = 10000;
//			int des = 0;
//			int target = 0;
//			bool larger = true;
//			for (int k = 0; k < n; k++) {
//				if (ans[k] == 0) {
//					if (larger) { ans[k] = dp[j]; }
//					else {
//						ans[des] = target;
//					}
//					break;
//				}
//				else if (dp[j] <= ans[k]&&(ans[k]-dp[j])<=tempMin) {
//					larger = false;
//					des = k;
//					target = dp[j];
//					tempMin = ans[k] - dp[j];
//				}
//			}
//
//		}
//		for (int i = 0; i < n; i++) {
//			if (ans[i] == 0) { break; }
//			else {
//				result++;
//			}
//		}
//		cout << result << endl;
//	}
//	return 0;
//}