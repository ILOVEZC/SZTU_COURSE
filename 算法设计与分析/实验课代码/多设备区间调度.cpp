//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//#include <vector>
//typedef long long LL;
//using namespace std;
//int t;
//LL sumTime;
//struct node {
//	LL startTime;
//	LL endTime;
//}task[105];
//
//struct machine {
//	LL startTime;
//	LL endTime;
//}m[105];
//
//bool compareAct(node a, node b) {
//	return a.startTime < b.startTime;
//}
//
//int main() {
//	scanf("%d", &t);
//	while (t--) {
//		sumTime = 0;
//		int n;
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &task[i].startTime, &task[i].endTime);
//		}
//		sort(task, task + n, compareAct);
//		vector<machine> m;
//		machine m1;
//		m1.startTime = task[0].startTime;
//		m1.endTime = task[0].endTime;
//		m.push_back(m1);
//		for (int i = 1; i < n; i++) {
//			bool flag = false;
//			LL tempMin = 1e9;
//			int pos = 0;
//			for (int j = 0; j < m.size(); j++) {
//				LL temp;
//				if (task[i].startTime >= m[j].endTime) {
//					temp = task[i].startTime - m[j].endTime;
//					if (temp < tempMin) {
//						tempMin = temp;
//						pos = j;
//					}
//					flag = true;
//				}
//			}
//			if (!flag) {
//				machine m2;
//				m2.startTime = task[i].startTime;
//				m2.endTime = task[i].endTime;
//				m.push_back(m2);
//			}
//			else {
//				m[pos].endTime = task[i].endTime;
//			}
//		}
//		for (int i = 0; i < m.size(); i++) {
//			sumTime += (m[i].endTime - m[i].startTime);
//		}
//		cout << m.size() << " " << sumTime << endl;
//	}
//	return 0;
//}