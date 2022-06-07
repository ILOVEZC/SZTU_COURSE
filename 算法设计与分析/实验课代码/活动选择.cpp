//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//#include<stack>
//using namespace std;
//
//struct node {
//	int startTime;
//	int endTime;
//}act[10005];
//	 
//int ans;
//
//bool compareAct(node a, node b) {
//	return a.endTime<b.endTime;
//}
//
//
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		ans = 1;
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &act[i].startTime, &act[i].endTime);
//		}
//		sort(act, act + n, compareAct);
//		int j = 0;
//		for (int i = 1; i < n; i++) {
//			if (act[i].startTime >= act[j].endTime) {
//				ans++;
//				j = i;
//			}
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}