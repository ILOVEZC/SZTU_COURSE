/*三数论大小（指针）
题目描述

输入三个整数，然后按照从大到小的顺序输出数值。

要求：用三个指针分别指向这三个整数，排序过程必须通过这三个指针来操作，不能直接访问这三个整数

输出时，必须使用这三个指针，不能使用存储三个整数的变量

 


输入

第一行输入t表示有t个测试实例

第二行起，每行输入三个整数

输入t行

 


输出

每行按照从大到小的顺序输出每个实例

 


样例查看模式 
正常显示
查看格式
输入样例
3
2 4 6
88 99 77
111 333 222

输出样例
6 4 2
99 88 77
333 222 111*/
#include<iostream>
using namespace std;
int main(void)
{
	int t,i;
	int a,b,c;
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int temp;
		cin>>a>>b>>c;
		if(*p<=*q)
		{
			temp=*q;
			*q=*p;
			*p=temp;
		}
		if(*p<=*r)
		{
			temp=*r;
			*r=*p;
			*p=temp;
		}
		if(*q<=*r)
		{
			temp=*r;
			*r=*q;
			*q=temp;
		}
		cout<<a<<' '<<b<<' '<<c<<endl;
	}
	return 0;
}

 
