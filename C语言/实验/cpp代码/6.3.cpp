/*7-3 单词首字母大写
分数 15
作者 颜晖
单位 浙大城市学院
本题目要求编写程序，输入一行字符，将每个单词的首字母改为大写后输出。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。

输入格式:
输入给出一行字符。

输出格式:
在一行中输出已输入的字符，其中所有单词的首字母已改为大写。

输入样例:
How are you?
输出样例:
How Are You?*/ 
#include<stdio.h>
#include<math.h>
int main()
{
	int i=1;
	char op; 
	scanf("%c",&op);
	do
	{
	   
		if(op>='A'&&op<='Z')
		{
			i=0;
		}
		else if(op>='a'&&op<='z'&&i==1)
		{
			op=op+32;
			i=0;
		}
		else if(op==' ')
		{
			i=1;
		}
		
	}while (scanf("%c",&op) != '\n');
	printf("%c",op);
	return 0;
}
