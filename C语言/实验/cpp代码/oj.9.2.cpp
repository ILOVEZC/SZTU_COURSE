/*题目描述

模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，四种运算符的优先级相同，按从左到右的顺序计算。


输入

输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。


输出

在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
1+2*10-10/2=
输出样例1
10*/ 

#include<stdio.h>
int main()
{
	double x,y;
	char op;
	scanf("%lf",&x);
    while((op=getchar())!='=')
	{
		scanf("%lf",&y);
		if(op=='/'&&y==0)
		{
			printf("ERROR");
			return 0;
		}
		else
		{
			switch(op)
			{
			    case '+':x=x+y;break;
                case '-':x=x-y;break;
                case '*':x=x*y;break;
                case '/':x=x/y;break;
                default:printf("ERROR");return 0;
			}
		}
	}
	printf("%lf",x);
	return 0;
}
