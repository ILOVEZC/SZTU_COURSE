/*本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。

注意：题目保证最大和最小值都是唯一的。

输入格式：
输入在第一行中给出一个正整数N（≤10），第二行给出N个整数，数字间以空格分隔。

输出格式：
在一行中顺序输出交换后的序列，每个整数后跟一个空格。

输入样例：
5
8 2 5 1 4
输出样例：
1 2 5 4 8 */ 
#include<stdio.h>
int main()
{
	int n,i,j,k,l,m,min,max,nummin,nummax,x1,x2;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	if(n>1)
	{
	         min=a[0];
         	for(j=1;j<n;j++)
         	{
	         	if(min>a[j])
	        	{
		        	min=a[j];
		        	nummin=j;
	          	}
         	}
	         x1=a[0];
           	 a[0]=min;
	         a[nummin]=x1;
	         max=a[n-1];
	         if (n==2)
	         {
	         	printf("%d %d ",a[0],a[1]);
				return 0;
			 }
             for(k=n-2;k>0;k--)
         	{
		        if(max<a[k])
		        {
		        	 max=a[k];
			         nummax=k;
	           	}
	        }
	        x2=a[n-1];
	        a[n-1]=max;
	        a[nummax]=x2;
	        for(l=0;l<n;l++)
        	{
	        	printf("%d ",a[l]);
            }
    }
	else if(n==1)
	{
		printf("%d ",a[0]);
	}
	return 0;
}
