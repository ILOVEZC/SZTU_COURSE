/*题目描述

本题要求实现函数输出一个实心的字符矩形，定义并调用函数matrix(length, width, ch)，它的功能是在屏幕上显示行数为width、列数为length，由字符ch组成的实心矩形图案。

函数接口定义：
 void matrix(int length, int width, char ch);
其中length是矩阵的长度，width是矩阵的宽度，ch是输出的字符，要求函数按照如样例所示的格式，打印出行数为width、列数为length，由字符ch组成的实心矩形图案。

主函数参考代码如下：

?void matrix(int length, int width, char ch);

int main()

{    

    int length, width;

    char ch;

    scanf("%d %d %c", &length, &width, &ch);

    matrix(length, width, ch);

    return 0;

}


输入

?


输出

样例查看模式 
正常显示
查看格式
输入样例1 <-复制
4 2 H
输出样例1
HHHH
HHHH
*/
#include<stdio.h>
void matrix(int length,int width,char ch);
int main()
{
	int length,width;
	char ch;
	scanf("%d %d %c",&length,&width,&ch);
	matrix(length,width,ch);
	return 0;
}
void matrix(int length,int width,char ch)
{
    int num,i;
    num=length*width;
    for(i=1;i<=num;i++)
    {
    	if(i%length==0)
    	{
    		printf("%c\n",ch);
		}
		else
		{
			printf("%c",ch);
	    }
	}
}
