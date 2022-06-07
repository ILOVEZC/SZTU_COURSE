/*题目描述

本题要求实现一个判断素数的简单函数，并利用该函数验证哥德巴赫猜想：任何一个不小于6的偶数均可表示为两个奇素数之和。素数就是只能被1和自身整除的正整数。

输入两个正整数m和n（0<=m<=n<=100），将m和n之间的偶数表示成两个素数之和，输出时每行显示5组。要求定义并调用函数prime（m）判断m是否为素数，当m为素数时返回1，否则返回0。


输入

两个正整数m和n（0<=m<=n<=100）


输出

见样例


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
89 100
输出样例1
90=7+83, 92=3+89, 94=5+89, 96=7+89, 98=19+79
100=3+97，*/ 

#include<stdio.h>
int prime(int m);
int main()
{
	int m,n,i,j,x,a,b,h=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(i%2==0&&i>=6)
		{
			for(j=2;j<i;j++)
			{
			  	x=prime(j);
	            if(x==1)
               	{
		            a=j;
		            b=i-j;
		            x=prime(b);
		            if(x==1)
		            {
		            	printf("%d=%d+%d",i,a,b);
		            	h++;
		            	if(h%5==0)
		            	{
		            		printf("\n");
						}
						else
						{
							printf(", ") ;
						}
		            	break;
					}
             	}  
			} 
		}
	}
	return 0;
}
int prime(int m)
{
    int k,y=1;
	for(k=2;k<m;k++)
	{
		if(m%k==0)
		{
			y=0;
		}
	}
	return y;
}
