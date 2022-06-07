/*动态数组（指针与数组）
题目描述

一开始未知数组长度，根据要求创建不同类型的指针，并且使用指针创建相应长度的数组，然后再完成不同的要求

若要求创建整数数组，计算数组内所有数据的平均值

若要求创建字符数组，找出数组内的最大字母

若要求创建浮点数数组，找出数组的最小值

要求程序整个过程不能使用数组下标，从数组创建、输入到搜索、比较、计算，到输出都必须使用指针

提示：使用new关键字

 


输入

第一行输入t表示有t个测试实例

第二行先输入一个大写字母表示数组类型，I表示整数类型，C表示字符类型，F表示浮点数类型；然后输入n表示数组长度。

第三行输入n个数据

依次输入t个实例

 


输出

每个根据不同的数组类型输出相应的结果

 


样例查看模式 
正常显示
查看格式
输入样例
3
C 5
A D E B C
I 6
22 55 77 33 88 55
F 4
3.1 1.9 6.5 4.8

输出样例
E
55
1.9

*/
#include<iostream>
using namespace std;
int main(void)
{
	int t, i;
	char item;
	int num;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int j;
		cin>>item>>num;
		if(item=='I')
		{
			int sum=0;
			double average;
			int *p = new int[num];
			for(j=0;j<num;j++)
			{
				cin>>*p;
				sum=sum+*p;
				p++;
			}
			average=sum/num;
			cout<<average<<endl;
		}
		else if(item=='C')
		{
			char max;
			char *q = new char[num];
			cin>>max;
			*q++ = max;
			for(j=1;j<num;j++)
			{
				cin>>*q;
				if(*q>=max) max=*q;
				q++;
			}
			cout<<max<<endl;
		}
		else if(item=='F')
		{
			float min;
			float *r = new float[num];
			cin>>min;
			*r++ = min;
			for(j=1;j<num;j++)
			{
				cin>>*r;
				if(*r<=min) min=*r;
				r++;
			}
			cout<<min<<endl;
		}
	}
	return 0;
	
}
