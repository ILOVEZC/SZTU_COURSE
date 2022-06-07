/*7-4 判断一个三位数是否为水仙花数
分数 15
作者 颜晖
单位 浙大城市学院
本题要求编写程序，判断一个给定的三位数是否为水仙花数。三位水仙花数，即其个位、十位、百位数字的立方和等于该数本身。

输入格式:
输入在一行中给出一个需要判断的整数 N（100≤N≤999）。

输出格式:
如果N是水仙花数，则在一行中输出Yes，否则输出No。如果N不是三位数，则输出Invalid Value.。

输入样例1:
153
输出样例1:
Yes
输入样例2:
500
输出样例2:
No
输入样例3:
-2
输出样例3:
Invalid Value.*/ 
#include<stdio.h>
#include<math.h>
int main()
{
	
	int N,a,b,c;
	scanf("%d",&N);
	a=N/100;
	b=(N%100)/10;
	c=(N%100)%10;
	if(N/100>=10||N/10<10)
	{
		printf("Invalid Value.");
	}
	else
	{
	
	if(pow(a,3)+pow(b,3)+pow(c,3)==N)
	{
		printf("Yes");
	}
	if(pow(a,3)+pow(b,3)+pow(c,3)!=N)
	{
		printf("No");
	}
    }
    return 0;
	 
}
