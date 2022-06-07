//D: 二进制数组
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 101     Solved : 33
//Description
//有一个数组，里面元素只有0或1，可以删除该数组中的一个元素，然后返回数组中最长连续的1的长度，若不存在，则返回0
//
//Input
//第一行：数组长度n， 1 <= n <= 100000 第二行：n个0或1的数字
//
//Output
//输出一个数字，最长的连续的1的长度
//
//Sample Input
//6
//1 0 1 0 1 1
//Sample Output
//3
//Hint



//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef long long LL;
//const int maxn = 1e5 + 10;
//int ans[maxn];
//LL n;
//LL maxNum = 0;
//LL maxIndex = 0;
//int main()
//{
//    while (scanf("%lld", &n) != EOF) {
//        maxNum = 0;
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &ans[i]);
//        }
//        int temp = 0;
//        int tempIndex = 0;
//        bool first = true;
//        for (int i = 0; i < n; i++) {
//            if (ans[i] == 1) {
//                temp++;
//            }
//            else if (ans[i] == 0 && first) {
//                first = false;
//                tempIndex = i;
//            }
//            else if (ans[i] == 0 && (!first)) {
//                if (temp > maxNum) {
//                    maxNum = temp;
//                }
//                i = tempIndex;
//                first = true;
//                temp = 0;
//            }
//        }
//        if (temp > maxNum) {
//            maxNum = temp;
//        }
//
//        cout << maxNum << endl;
//    }
//    return 0;
//}
