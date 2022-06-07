/*7-6 计算天数
分数 15
作者 沈睿
单位 浙江大学
本题要求编写程序计算某年某月某日是该年中的第几天。

输入格式:
输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

输出格式:
在一行输出日期是该年中的第几天。

输入样例1:
2009/03/02
输出样例1:
61
输入样例2:
2000/03/02
输出样例2:
62*/ 
#include<stdio.h>
int main()
{
	int year,month,day;
	scanf("%d/%d/%d",&year,&month,&day);
	if(year%4!=0||year%100==0&&year%400!=0)    
	{
		switch(month)
		{
			case 01:printf("%d",day);break;
			case 02:printf("%d",31+day);break;
			case 03:printf("%d",31+28+day);break;
			case 04:printf("%d",31*2+28+day);break;
			case 05:printf("%d",31*2+28+30+day);break;
			case 06:printf("%d",31*3+28+30+day);break;
			case 07:printf("%d",31*3+28+30*2+day);break;
			case 8:printf("%d",31*4+28+30*2+day);break;
			case 9:printf("%d",31*4+28+30*3+day);break;
			case 10:printf("%d",31*5+28+30*3+day);break;
			case 11:printf("%d",31*5+28+30*4+day);break;
			case 12:printf("%d",31*6+28+30*4+day);break;
		}
	}
	else
	{
	    switch(month)
		{
			case 01:printf("%d",day);break;
			case 02:printf("%d",31+day);break;
			case 03:printf("%d",31+29+day);break;
			case 04:printf("%d",31*2+29+day);break;
			case 05:printf("%d",31*2+29+30+day);break;
			case 06:printf("%d",31*3+29+30+day);break;
			case 07:printf("%d",31*3+29+30*2+day);break;
			case 8:printf("%d",31*4+29+30*2+day);break;
			case 9:printf("%d",31*4+29+30*3+day);break;
			case 10:printf("%d",31*5+29+30*3+day);break;
			case 11:printf("%d",31*5+29+30*4+day);break;
			case 12:printf("%d",31*6+29+30*4+day);break;
		}
    }
    return 0;
}
