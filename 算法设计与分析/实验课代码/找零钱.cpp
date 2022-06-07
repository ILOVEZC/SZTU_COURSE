//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//#include<stack>
//using namespace std;
//
//int dp[7] = { 100,50,20,10,5,2,1 };
//int record[7];
//int ans;
//
//void PrintFormation(int record[])
//{
//	// TODO: 基于计算的各钱张数输出式子
//	bool first = true;
//	for (int i = 0; i < 7; i++) {
//		if (record[i] >0) {
//			if (first) {
//				first = false;
//				if (record[i] == 1) {
//					cout << dp[i];
//				}
//				else {
//					cout << dp[i] << '*' << record[i];
//				}
//			}
//			else {
//				if (record[i] == 1) {
//					cout << '+'<<dp[i];
//				}
//				else {
//					cout <<"+"<< dp[i] << '*' << record[i];
//				}
//			}
//		}
//	}
//
//}
//
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		ans = 0;
//		int result = n;
//		memset(record, 0, sizeof(record));
//		for (int i = 0; i < 7; i++) {
//			int temp = n / dp[i];
//			record[i] = temp;
//			ans += temp;
//			n -= temp * dp[i];
//		}
//		cout << ans << " ";
//		PrintFormation(record);
//		cout << "=" << result << endl;
//	}
//	return 0;
//}