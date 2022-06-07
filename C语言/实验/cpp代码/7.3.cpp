/*7-3 求整数段和
分数 10
作者 杨起帆
单位 浙大城市学院
给定两个整数A和B，输出从A到B的所有整数以及这些数的和。

输入格式：
输入在一行中给出2个整数A和B，其中?100≤A≤B≤100，其间以空格分隔。

输出格式：
首先顺序输出从A到B的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中按Sum = X的格式输出全部数字的和X。

输入样例：
-3 8
输出样例：
   -3   -2   -1    0    1
    2    3    4    5    6
    7    8
Sum = 30*/ 
#include<stdio.h>
#include<math.h>
int main()
{
	int A,B,N,i,n,Sum=0;
	scanf("%d %d",&A,&B);
	N=B-A;
	for(i=0;i<=N;i++)
	{
		n=A+i;
		printf("%5d",n);
		Sum=Sum+n;
		if((i%10==4||i%10==9)&&n!=B)
		{
			printf("\n");
		}
	}
	printf("\n");
	printf("Sum = %d",Sum);
	return 0;
}
