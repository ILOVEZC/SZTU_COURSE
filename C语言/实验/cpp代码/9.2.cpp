/*本题要求编写程序，对顺序读入的n个整数，顺次计算后项减前项之差，并按每行三个元素的格式输出结果。

输入格式：
输入的第一行给出正整数n（1<n≤10）。随后一行给出n个整数，其间以空格分隔。

输出格式：
顺次计算后项减前项之差，并按每行三个元素的格式输出结果。数字间空一格，行末不得有多余空格。

输入样例：
10
5 1 7 14 6 36 4 28 50 100
输出样例：
-4 6 7
-8 30 -32
24 22 50*/ 
#include<stdio.h>
int main()
{
	int n,result,i,j,k=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(j=1;j<n;j++)
	{
		result=a[j]-a[j-1];
		k++;
		if(k%3==0&&k!=n-1)
		{
			printf("%d\n",result);
		}
		else if(k!=n-1)
		{
			printf("%d ",result);
		}
		else
		{
			printf("%d",result);
		}
	}
	return 0;
}
