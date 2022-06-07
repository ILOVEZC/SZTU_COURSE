/*三数论大小（引用）
题目描述

输入三个整数，然后按照从大到小的顺序输出数值。

要求：定义一个函数，无返回值，函数参数是三个整数参数的引用，例如int &a, int &b, int &c。在函数内通过引用方法来对三个参数进行排序。主函数调用这个函数进行排序。

要求：不能直接对三个整数进行排序，必须通过函数而且是引用的方法。

 

 


输入

第一行输入t表示有t个测试实例

第二行起，每行输入三个整数

输入t行

 


输出

每行按照从大到小的顺序输出每个实例，三个整数之间用单个空格隔开

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
3
2 4 6
88 99 77
111 333 222

输出样例1
6 4 2
99 88 77
333 222 111

输入样例2 <-复制
1
2 4 6
输出样例2
6 4 2
*/ 
#include<iostream>
using namespace std;
void swap(int&, int&, int&);
int main(void)
{
	int i, t;
	int a, b, c;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> a >> b >> c;
		swap(a, b, c);
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}

void swap(int& d, int& e, int& f)
{
	int temp;
	if (d < e)
	{
		temp = e;
		e = d;
		d = temp;
	}
	if (d < f)
	{
		temp = f;
		f = d;
		d = temp;
	}
	if (e < f)
	{
		temp = f;
		f = e;
		e = temp;
	}
}
