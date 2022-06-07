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
//	int lastTime;
//	int endTime;
//}task[105];
//	 
//int ans;
//
//bool compareAct(node a, node b) {
//	if(a.endTime != b.endTime){
//		return a.endTime < b.endTime;
//	}
//	else if (a.endTime == b.endTime) {
//		return a.lastTime < b.lastTime;
//	}
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		ans = 0;
//		int time = 0;
//		int tempMin = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &task[i].lastTime, &task[i].endTime);
//		}
//		sort(task, task + n, compareAct);
//		for (int i = 0; i < n; i++) {
//			if (time + task[i].lastTime > task[i].endTime) {
//				tempMin = (time + task[i].lastTime)-task[i].endTime;
//				if (tempMin > ans) {
//					ans = tempMin;
//				}
//			}
//			time += task[i].lastTime;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}