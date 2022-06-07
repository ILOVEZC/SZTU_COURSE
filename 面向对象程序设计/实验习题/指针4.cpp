/*三串合一（指针与字符数组）
题目描述

输入三个字符串，通过指针读取各个字符串的子串（子串是指字符串中连续的一小部分），把它们合并成一个新字符串

要求：

1. 三个字符串的创建和输入可以使用数组，也可以不用

2. 输入后，根据三个字符串的子串的长度，计算出新字符串的长度

3. 使用动态数组的方法创建新的字符串，并且使用指针读取三个字符串的不同部分，并且复制到新字符串中，要求整个过程都不能使用数组下标

4. 使用指针输出新的字符串

 


输入

第一行输入t表示有t个测试实例

连续三行输入三个字符串，每个字符串都包含10个字符

连续三行，每行输入数字a和b，表示每个子串的开始和结束位置。注意字符串的位置是按照一般意义从1开始计算，和编程中的数组位置不同。例如字符串abcdefg，开始位置是3，结束位置是5，那么子串就是cde

依次输入t个实例

 


输出

每行输出合并后的新字符串

 


样例查看模式 
正常显示
查看格式
输入样例
2
abcdefghij
ABCDEFGHIJ
aabbccddee
3 5
2 6
8 10
AABBCCDDEE
ffgghhiijj
FFGGHHIIJJ
1 4
5 8
2 7

输出样例
cdeBCDEFdee
AABBhhiiFGGHHI

*/
#include<iostream>
using namespace std;
int main(void)
{
	int t,i,j,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
		char *p = new char[10];
		char *q = new char[10];
		char *r = new char[10];
		for(j=0;j<10;j++)
		{
			cin>>*p++;
		}
		for(j=0;j<10;j++)
		{
			cin>>*q++;
		}
		for(j=0;j<10;j++)
		{
			cin>>*r++;
		}
		for(j=0;j<10;j++)
		{
			p--;
			q--;
			r--;
		}
		int a,b,c,d,e,f,sum=0;
		cin>>a>>b>>c>>d>>e>>f;
		sum=b-a+d-c+f-e+3;
		char *s = new char[sum];
		int count = 0;
		for(j=0;j<10;j++)
		{
			count++;
			if(a<=count&&count<=b)
			{
			*s =*p;
			s++;
			}
			p++;
		}
		count = 0;
		for(j=0;j<10;j++)
		{
			count++;
			if(c<=count&&count<=d)
			{
			*s =*q;
			s++;
			}
			q++;
		}
		count = 0;
		for(j=0;j<10;j++)
		{
			count++;
			if(e<=count&&count<=f)
			{
			*s=*r;
			s++;
			}
			r++;
		}
		for(j=0;j<sum;j++) s--;
		for(j=0;j<sum;j++)
		{
			cout<<*s++;
		}
		cout<<endl;	
		
	}
	return 0;
	
}
