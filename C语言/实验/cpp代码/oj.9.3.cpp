/*题目描述

本题要求实现一个计算两个数的最大公约数的简单函数。

函数接口定义：
int gcd( int x, int y );
其中x和y是两个正整数，函数gcd应返回这两个数的最大公约数。

主函数参考代码如下：

int gcd( int x, int y );

int main()

{

    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d\n", gcd(x, y));

    return 0;

}


输入

输出

样例查看模式 
正常显示
查看格式
输入样例1 <-复制
32 72
输出样例1
8
*/
#include<stdio.h>
#include <math.h>
int gcd(int x,int y);
int main()
{
 int x,y;
 scanf("%d %d",&x,&y);
 printf("%d\n",gcd(x,y));
 return 0;
}
int gcd(int x,int y)
{
 int i,j,k;
 int flag=0;
 for(i=x;i>=1;i--)
 {
  if(x%i==0)
  {
   for(j=x;j>=1;j--)
   {
    if(y%j==0&&i==j)
    {
        k=i;
        flag=1;
  break;
    }
   }
  }
  if(flag==1){
   break;
  }
 }
 return k;
}
