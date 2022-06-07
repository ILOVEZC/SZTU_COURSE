/*7-5 判断字符或数字
分数 15
作者 黄隆华
单位 怀化学院
键盘输入一个字符，要求判断是否为数字字符，如果是’a’~’z’或’A’~’Z’，则输出“character”，如果是‘0’~‘9’，则输出“digit”，如果都不是，则输出“ERROR”。

输入格式:
键盘输入一个字符。

输出格式:
如果是字母，则输出“character”，如果是数字，则输出“digit”，如果都不是，则输出“ERROR”。

输入样例:
A
输出样例:
在这里给出相应的输出。例如：

character*/ 
#include<stdio.h>
int main()
{
	char x;
    scanf("%c",&x);
	if(x>='0' && x<='9')
	{
		printf("digit"); 
	}
	else if((x>=65&&x<=90)||(x>=97&&x<=122)) 
	{
		printf("character");
	}
	else
	{
		printf("ERROR");
	}
	return 0;
}
