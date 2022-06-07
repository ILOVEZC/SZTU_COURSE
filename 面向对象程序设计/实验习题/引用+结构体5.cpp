/*抄袭查找（结构体+指针+函数）
题目描述

已知一群学生的考试试卷，要求对试卷内容进行对比，查找是否有抄袭。

每张试卷包含：学号（整数类型）、题目1答案（字符串类型）、题目2答案（字符串类型）、题目3答案（字符串类型）

要求：使用结构体来存储试卷的信息。定义一个函数，返回值为一个整数，参数是两个结构体指针，函数操作是比较两张试卷的每道题目的答案，如果相同题号的答案相似度超过90%，那么就认为有抄袭，函数返回抄袭题号，否则返回0。相似度是指在同一题目中，两个答案的逐个位置上的字符两两比较，相同的数量大于等于任一个答案的长度的90%，就认为抄袭。

 


输入

第一行输入t表示有t张试卷

第二行输入第1张试卷的学生学号

第三行输入第1张试卷的题目1答案，最大长度不超过100

第四行输入第1张试卷的题目2答案，最大长度不超过100

第五行输入第1张试卷的题目3答案，最大长度不超过100

每张试卷对应4行输入

依次输入t张试卷的数据


输出

在一行中，把发现抄袭的两个学号和题目号输出，只输出第一次发现抄袭的题号，数据之间用单个空格隔开

如果发现是题目1抄袭，题目号为1，以此类推

输出顺序按照输入的学号顺序进行输出


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
5
2088150555
aabcdef11
ZZ887766dd
cc33447799ZZ
2088150333
abcdef00
AABBCCDDEE
ZZ668899cc
2088150111
AABBCCDDEE
ZZ668899cc
abcdef00
2088150222
AABBCFDDeE
ZZ889966dd
abcdef000
2088150444
aabcdef00
AABBCDDDEE
cc668899ZZ

输出样例1
2088150333 2088150444 2
2088150111 2088150222 3

*/
#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
struct paper
{
	int number;
	char q1[101];
	char q2[101];
	char q3[101];
};
int haha(paper* p, paper* q);
int main()
{
	int t, i, k;
	cin >> t;
	paper* qq = new paper[t];
	for (i = 0; i < t; i++)
	{
		cin >> (qq + i)->number >> (qq + i)->q1 >> (qq + i)->q2 >> (qq + i)->q3;
	}
	for (i = 0; i < t-1; i++)
	{
		for (k = i+1; k < t; k++)
		{
			if (haha(qq + i, qq + k))
			{
				cout << (qq + i)->number << " " << (qq + k)->number << " " << haha(qq + i, qq + k) << endl;
			}
		}
	}
}

int haha(paper* p, paper* q)
{
	int j;
	int num1 = strlen(p->q1);
	int num2 = strlen(q->q1);
	int num3 = strlen(p->q2);
	int num4 = strlen(q->q2);
	int num5 = strlen(p->q3);
	int num6 = strlen(q->q3);
	int one = 0;
	int two = 0;
	int three = 0;
	for (j = 0; j < min(num1,num2); j++)
	{
		if (*((p->q1) + j) == *((q->q1) + j)) one++;
	}
	for (j = 0; j < min(num3,num4); j++)
	{
		if (*((p->q2) + j) == *((q->q2) + j)) two++;
	}
	for (j = 0; j < min(num5,num6); j++)
	{
		if (*((p->q3) + j) == *((q->q3) + j)) three++;
	}
	if (one >= num1 * 0.9 || one >= num2 * 0.9) return 1;
	else if (two >= num3 * 0.9 || two >= num4 * 0.9) return 2;
	else if (three >= num5 * 0.9 || three >= num6 * 0.9) return 3;
	else return 0;
	

}
