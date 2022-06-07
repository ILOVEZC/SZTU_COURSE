/*7-4 计算油费
分数 15
作者 颜晖
单位 浙大城市学院
现在90号汽油6.95元/升、93号汽油7.44元/升、97号汽油7.93元/升。为吸引顾客，某自动加油站推出了“自助服务”和“协助服务”两个服务等级，分别可得到5%和3%的折扣。

本题要求编写程序，根据输入顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助），计算并输出应付款。

输入格式：
输入在一行中给出两个整数和一个字符，分别表示顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助）。

输出格式：
在一行中输出应付款额，保留小数点后2位。

输入样例：
40 97 m
输出样例：
301.34*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b;
	float payment;
	char c,m;
	scanf("%d %d %c",&a,&b,&c);
	if(c=='m')
	{
		if(b==90)
		{
			payment=6.95*a;
		}
		else if(b==93)
		{
			payment=7.44*a;
		}
		else if(b==97)
		{
			payment=7.93*a;
		}
		printf("%.2f",payment*0.95);
	}
	else
	{
		if(b==90)
		{
			payment=6.95*a;
		}
		else if(b==93)
		{
			payment=7.44*a;
		}
		else if(b==97)
		{
			payment=7.93*a;
		}
    	printf("%.2f",payment*0.97);
	}
	return 0;
	
}
