/*7-4 求给定精度的简单交错序列部分和
分数 15
作者 C课程组
单位 浙江大学
本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。

输入格式:
输入在一行中给出一个正实数eps。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。

输入样例1:
4E-2
输出样例1:
sum = 0.854457
输入样例2:
0.02
输出样例2:
sum = 0.826310*/ 
#include<stdio.h>
#include<math.h>
int main()
{
    int a=1,b=1;
    double sum=0,c=1.0,eps;
    scanf("%lf",&eps);
    if(eps>=1)
    {
        printf("sum=%.6f",c);
    }
    else
    {
        while(fabs(c)>eps) 
        {
            c=(a*1.0)/b;
            sum=sum+c;
            b+=3;
            a=-a;
        }
        printf("sum=%.6f",sum);
    }
    return 0;
}

