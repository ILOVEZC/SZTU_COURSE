/*求最大值最小值（引用）
题目描述

编写函数void find(int *num,int n,int &minIndex,int &maxIndex)，求数组num(元素为num[0]，num[1]，...，num[n-1]）中取最小值、最大值的元素下标minIndex,maxIndex（若有相同最值，取第一个出现的下标。）

输入n，动态分配n个整数空间，输入n个整数，调用该函数求数组的最小值、最大值下标。最后按样例格式输出结果。

改变函数find功能不计分。


输入

测试次数

每组测试数据一行：数据个数n，后跟n个整数


输出

每组测试数据输出两行，分别是最小值、最大值及其下标。具体格式见样例。多组测试数据之间以空行分隔。

 

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
5 10 20 40 -100 0
10 23 12 -32 4 6 230 100 90 -120 15
输出样例1
min=-100 minindex=3
max=40 maxindex=2

min=-120 minindex=8
max=230 maxindex=5
*/
#include<iostream>
using namespace std;
void find(int* num, int n, int& minindex, int& maxindex);
int main(void)
{
	int i, t;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		int n,k,min,max;
		cin >> n;
		int* number = new int[n];
		for (k = 0; k < n; k++)
			cin >> *(number + k);
		find(number, n, min, max);
		cout << "min=" <<number[min]<< " " << "minindex=" << min << endl
			<< "max=" <<number[max]<< " " << "maxindex=" << max << endl;
		cout << endl;
	}

	return 0;
}

void find(int* num, int n, int& minindex, int& maxindex)
{
	int j;
	minindex = 0;
	maxindex = 0;
	int small = *(num);
	int big = *(num);
	for (j = 0; j < n; j++)
	{
		if (*(num + j) < small)
		{
			minindex = j;
			small = *(num + j);
		}
		if (*(num + j) > big)
		{
			maxindex = j;
			big = *(num + j);
		}

	}
}
