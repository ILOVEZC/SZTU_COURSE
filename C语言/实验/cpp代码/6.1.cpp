/*7-1 求整数的位数及各位数字之和
分数 15
作者 C课程组
单位 浙江大学
对于给定的正整数N，求它的位数及其各位数字之和。

输入格式：
输入在一行中给出一个不超过10 
9
 的正整数N。

输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。

输入样例：
321
输出样例：
3 6*/ 
#include<stdio.h>   //编译预处理器
#include<math.h>
int main()  //定义主函数
{
int i = 0, num,sum=0;
scanf ("%d", &num) ;
if (num < 0){
num = -num;} /*把负数改为正数*/
do {
sum = sum + num % 10;
num = num / 10;
i ++;
} while (num != 0);
printf ("%d %d", i,sum);
  
return 0;
}
