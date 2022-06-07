/*7-5 求一元二次方程的根
分数 20
作者 陈建海
单位 浙江大学
本题目要求一元二次方程ax 
2
 ＋bx＋c＝0的根，结果保留2位小数。

输入格式:
输入在一行中给出3个浮点系数a、b、c，中间用空格分开。

输出格式:
根据系数情况，输出不同结果：

1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；

2)如果方程有两个不相等复数根，则每行按照格式“实部+虚部i”输出一个根，先输出虚部为正的，后输出虚部为负的；

3)如果方程只有一个根，则直接输出此根；

4)如果系数都为0，则输出"Zero Equation"；

5)如果a和b为0，c不为0，则输出"Not An Equation"。

输入样例1:
2.1 8.9 3.5
输出样例1:
-0.44
-3.80
输入样例2:
1 2 3
输出样例2:
-1.00+1.41i
-1.00-1.41i
输入样例3:
0 2 4
输出样例3:
-2.00
输入样例4:
0 0 0
输出样例4:
Zero Equation
输入样例5:
0 0 1
输出样例5:
Not An Equation*/ 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	
	double a,b,c,delta,x,x1,x2,p,q,t,m,n;
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=(b*b-4*a*c);
	if(a==0&&b==0&&c==0)
	{
		printf("Zero Equation");
	}
	else if(a==0&&b==0&&c!=0)
	{
		printf("Not An Equation");
	}
	else if(delta>0)
	{
		if(a=0)
		{
			x=-c/b;
			printf("x=%.2lf",x);
		}
		else
		{
		    p=-b/(2.0*a);
		    q=sqrt(delta)/(2.0*a);
		    x1=p+q;
		    x2=p-q;
		    if(x1<x2)
	     	{
		    	t=x2;
			    x2=x1;
		    	x1=t;
		    }
		    printf("%.2lf\n%.2lf",x1,x2);
		}
		
	}
	else if(delta==0)
	{
		x=-b/(2*a);
		printf("%.2lf",x);
	}
	else if(delta<0)
	{
		m=-b/(2*a);
		n=sqrt(-delta)/(2*a);
		if(n>0)
		{
		printf("x1=%.2lf+%.2lfi\nx2=%.2lf-%.2lfi",m,n,m,n);
	    }
	    else
	    printf("x2=%.2lf-%.2lfi\nx1=%.2lf+%.2lfi",m,n,m,n);
	}
	return 0;
}
