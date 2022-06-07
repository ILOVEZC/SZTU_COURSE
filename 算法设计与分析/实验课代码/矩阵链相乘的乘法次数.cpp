//G: 矩阵链相乘的乘法次数
//Time Limit : 2 Sec     Memory Limit : 128 Mb     Submitted : 24     Solved : 15
//Description
//设 A1, A2, …, An 为矩阵序列，Ai 是阶为 Pi − 1 * Pi 的矩阵 i  = 1, 2, …, n.
//
//试确定矩阵的乘法顺序，使得计算 A1A2…An 过程中元素相乘的总次数最少.
//
//Input
//多组数据
//
//第一行一个整数 n(1≤n≤300) ，表示一共有 n 个矩阵.
//
//第二行 n  + 1 个整数 P0, P1, …, Pn(1≤Pi≤100) ，第i个矩阵的行数为Pi − 1，列数为Pi.
//
//Output
//对于每组数据输出最少的元素乘法次数.
//
//Sample Input
//5
//74 16 58 58 88 80
//5
//10 1 50 50 20 5
//Sample Output
//342848
//3650
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//using namespace std;
//const int maxn = 3e2 + 10;
//int num;           //矩阵个数
//int p[maxn];       //矩阵规模的记录
//long long m[maxn][maxn]; //记录最优值
//
//void matrixchain()
//{
//	int i, r, j, k, q;
//	//从两个矩阵链开始，逐次添加矩阵链的长度(r表示矩阵链的长度)
//	for (r = 2; r <= num; r++)
//	{
//		for (i = 1; i <= num - r + 1; i++) // i值为左端点位置，取值不能大于num-r+1
//		{
//			j = i + r - 1; // j为右端点位置
//			m[i][j] = m[i + 1][j] + 1LL * p[i - 1] * p[i] * p[j];
//			for (k = i + 1; k < j; k++) //遍历全部可能的划分点k，计算出最优的划分方案
//			{
//				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
//			}
//		}
//	}
//	cout << m[1][num] << endl;
//	/*for (int i = 1; i <= num; i++) {
//		for (int j = 0; j <= num; j++) {
//			cout << m[i][j] << ' ';
//		}
//		cout << endl;
//	}*/
//}
//
//int main()
//{
//	while (scanf("%d", &num) != EOF)
//	{
//		memset(p, 0, sizeof(p));
//		memset(m, 0, sizeof(m));
//		for (int i = 0; i <= num; i++)
//		{
//			cin >> p[i];
//		}
//		matrixchain();
//	}
//	return 0;
//}