/*7-1 求班级平均分
分数 10
作者 庄波
单位 滨州学院
某班级若干个学生参加测验。在得到本次测验的成绩之后，确定该班级本次测验的平均分。

输入格式:
一个班级的若干个测验成绩（ 0 到 100 之间的整数），以 ?1 作为结束标记（结束标记不计算平均值）。

输出格式:
班级测验成绩平均分，结果保留两位小数。

若无输入成绩，则显示 No grades were entered。

输入样例 1:
75 94 97 88 70 64 83 89 -1
输出样例 1:
在这里给出相应的输出。例如：

82.50
输入样例 2:
-1
输出样例 2:
在这里给出相应的输出。例如：

No grades were entered*/ 
#include<stdio.h>
#include<math.h>
int main()
{   
    int score,num,total;
	float average;
	num=0;
	total=0;
	scanf("%d",&score); 
	while(score>=0)
	{	
		total=total+score;
		num++;
		scanf("%d",&score); 
	}

	if(num!=0)
	{
	    average=1.0*total/num;
	    printf("%.2f",average);
    }
	else
	{
		printf("No grades were entered");
	}
	return 0;
}
