//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//#include<stack>
//using namespace std;
//
//int p[1005], m[1005];
//int ans;
//int main() {
//	int v, n;
//	while (scanf("%d %d", &v, &n) != EOF) {
//		ans = 0;
//		if (v == 0) { break; }
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &p[i],&m[i]);
//		}
//		while (v > 0) {
//			int max = 0;
//			int index = 0;
//			for (int i = 0; i < n; i++) {
//				if (p[i] > max && m[i] > 0) {
//					max = p[i];
//					index = i;
//				}
//			}
//			v --;
//			m[index]--;
//			ans += max;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}