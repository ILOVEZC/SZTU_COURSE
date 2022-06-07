/*7-4 统计单词的长度
分数 15
作者 颜晖
单位 浙大城市学院
本题目要求编写程序，输入一行字符，统计每个单词的长度。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。

输入格式:
输入给出一行字符。

输出格式:
在一行中输出每个单词的长度。每个数字后有一个空格。

输入样例:
How are you?
输出样例:
3 3 4 */ 
#include<stdio.h>
#include<math.h>
int main()
{
	int num=0,i=1;
	char op;
	scanf("%c",&op);
	do
	{
	
		if(op==' '&&i==1)
		{
			printf("%d ",num);
			num=0;
			i=0;
		}
		else
		{
			num++;
			i=1;
		}
			scanf("%c",&op);
	}while(op!='\n');
	return 0;
}
