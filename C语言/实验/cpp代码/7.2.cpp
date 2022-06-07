/*7-2 统计MOOC证书
分数 15
作者 颜晖
单位 浙大城市学院
本题要求编写程序，输入N个学生的MOOC成绩，统计优秀、合格证书的数量，以及没有获得证书的数量。学生修读程序设计MOOC，85分及以上获得优秀证书，不到85分但是60分及以上获得合格证书，不到60分则没有证书。

输入格式:
输入在第一行中给出非负整数N，即学生人数。第二行给出N个非负整数，即这N位学生的成绩，其间以空格分隔。

输出格式:
在一行中依次输出优秀证书、合格证书、没有获得证书的数量，中间以空格分隔。请注意，最后一个数字后没有空格。

输入样例1:
7
85 59 86 60 84 61 45
输出样例1:
2 3 2
输入样例2:
4
91  100  88 75
输出样例2:
3 1 0*/ 
#include<stdio.h>
int main()
{
	int N,exc=0,qua=0,no=0,i,num;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&num);
		if(num>=85)
		{
			exc++;
		}
		else if(num>=60&&num<85)
		{
			qua++;
		}
		else
		{
			no++;
		}
	}
	printf("%d %d %d",exc,qua,no);
	return 0;
}
