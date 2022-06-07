// B : 如何溜的最快
// Description
// 给你一个终点(x,y)，从(0,0)出发，每步可以向任意方向沿直线走 恰好为R 的距离，请你输出到达终点所需的最短步数。

// Input
// 多组数据，每组数据输入R,x,y

// 1 ≤ R ≤ 105

// 0 ≤ x, y ≤ 105

// (x,y)≠(0,0)

// 所有输入皆为int型

// Output
// 输出结果并换行

// Sample Input
// 3 4 4
// 2 1 1
// 2 2 2
// Sample Output
// 2
// 2
// 2
// Hint
// 距离不能恰好走到的情况，可以走折线到达


//#include<iostream>
//#include<stdio.h>
//#include<math.h>
//using namespace std;
//
//int main() {
//	int r, x, y;
//	while (scanf("%d %d %d", &r, &x, &y) != EOF)
//	{
//		double minDis = sqrt(pow(x, 2) + pow(y, 2));
//		if (r > minDis) {
//			cout << 2 << endl;
//		}
//		if (r == minDis) {
//			cout << 1 << endl;
//		}
//		if (r < minDis) {
//			cout << ceil(minDis / r) << endl;;
//		}
//	}
//	return 0;
//}


//方法二
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//    double x, y, r;
//    while (scanf("%lf%lf%lf", &r, &x, &y) != EOF)
//    {
//        double dis = sqrt(x * x + y * y);
//        int pace = dis / r + 1e-8;
//        if (pace * r < dis - 1e-8)
//            pace += pace ? 1 : 2;
//        printf("%d\n", pace);
//    }
//    return 0;
//}