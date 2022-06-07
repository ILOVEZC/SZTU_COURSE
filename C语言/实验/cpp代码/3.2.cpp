/*7-2 比较大小
分数 10
作者 杨起帆
单位 浙大城市学院
本题要求将输入的任意3个整数从小到大输出。

输入格式:
输入在一行中给出3个整数，其间以空格分隔。

输出格式:
在一行中将3个整数从小到大输出，其间以“->”相连。

输入样例:
4 2 8
输出样例:
2->4->8*/ 
#include<stdio.h>

int main()
{
	
	int x,y,z,a,b,c;
	scanf("%d %d %d",&x,&y,&z);
	if (x>y)
	{
		a=y;
		y=x;
		x=a;
	}
	if (y>z)
	{
		b=z;
		z=y;
		y=b;
	}
	if (x>z)
	{
		c=z;
		z=x;
		x=c;
	}
	if (x>y)
	{
		a=y;
		y=x;
		x=a;
	}
	printf("%d->%d->%d",x,y,z);
	return 0;
	
}
	
