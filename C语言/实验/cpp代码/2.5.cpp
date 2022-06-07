/*7-5 倒序4位数
分数 10
作者 于延
单位 哈尔滨师范大学
输入一个4位的正整数，输出它的倒序数。

输入样例:
1200
输出样例:
0021
输入样例:
1234
输出样例:
4321*/ 
#include<stdio.h>
 
int main()
{
	
	int A,B,C,D,E,F,G,H;
	scanf("%d",&A);
    B=A/1000;
    F=A%1000;
    C=F/100;
    G=F%100;
    D=G/10;
    H=G%10;
    E=H/1;
    printf("%d%d%d%d",E,D,C,B);
    return 0;
    
}
