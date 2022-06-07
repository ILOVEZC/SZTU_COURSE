/*7-4 输出闰年
分数 15
作者 陈建海
单位 浙江大学
输出21世纪中截止某个年份以来的所有闰年年份。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。

输入格式:
输入在一行中给出21世纪的某个截止年份。

输出格式:
逐行输出满足条件的所有闰年年份，即每个年份占一行。输入若非21世纪的年份则输出"Invalid year!"。若不存在任何闰年，则输出“None”。

输入样例1:
2048
输出样例1:
2004
2008
2012
2016
2020
2024
2028
2032
2036
2040
2044
2048
输入样例2:
2000
输出样例2:
Invalid year!*/ 
#include<stdio.h>
int main()
{
	int year,n,i;
	scanf("%d",&year);
	n=(year-2000)/4;
	if(year>2100||year<=2000)
	{
		printf("Invalid year!");
	}
	else if(n<1)
	{
		printf("None");
	}
	else
	{
		for(i=1;i<=n;i++)
	    {
	    	year=2000+4*i;
	    	if(year%100!=0)
	    	{
	    		printf("%d\n",year);
			}
     	}
	}
    return 0;
}
