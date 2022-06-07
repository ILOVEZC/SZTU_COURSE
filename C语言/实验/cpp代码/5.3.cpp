/*7-3 统计数字字符和空格
分数 15
作者 颜晖
单位 浙大城市学院
本题要求编写程序，输入一行字符，统计其中数字字符、空格和其他字符的个数。建议使用switch语句编写。

输入格式:
输入在一行中给出若干字符，最后一个回车表示输入结束，不算在内。

输出格式:
在一行内按照

blank = 空格个数, digit = 数字字符个数, other = 其他字符个数
的格式输出。请注意，等号的左右各有一个空格，逗号后有一个空格。

输入样例:
在这里给出一组输入。例如：

Reold 12 or 45T
输出样例:
在这里给出相应的输出。例如：

blank = 3, digit = 4, other = 8*/ 
#include<stdio.h>
int main()
{
	int blank=0,digit=0,other=0;
	char op;
	while((op=getchar())!='\n')
	{
		switch(op)
		{
			case' ':blank=blank+1;break;
			case '0':digit=digit+1;break;
			case '1':digit=digit+1;break;
			case '2':digit=digit+1;break;
			case '3':digit=digit+1;break;
			case '4':digit=digit+1;break;
			case '5':digit=digit+1;break;
			case '6':digit=digit+1;break;
			case '7':digit=digit+1;break;
			case '8':digit=digit+1;break;
			case '9':digit=digit+1;break;
			default:other=other+1;
		}
	}
	printf("blank = %d, digit = %d, other = %d",blank,digit,other);
	return 0;
}
