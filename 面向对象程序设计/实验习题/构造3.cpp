/*对象是怎样构造的(拷贝构造函数)
题目描述

某个类包含一个整型数据成员.程序运行时若输入0表示用缺省方式定义一个类对象;输入1及一个整数表示用带一个参数的构造函数构造一个类对象;输入2及一个整数表示构造2个类对象，一个用输入的参数构造，另一个用前一个对象构造。试完成该类的定义和实现。


输入

测试数据的组数 t

第一组数

第二组数

......


输出

第一个对象构造输出

第二个对象构造输出

......


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
3
0
1 10
2 20
输出样例1
Constructed by default, value = 0
Constructed using one argument constructor, value = 10
Constructed using one argument constructor, value = 20
Constructed using copy constructor, value = 20
*/ 
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class A
{
private:
	int value;
public:
	A() :value(0)
	{
		cout << "Constructed by default, value = " << value << endl;
	}
	A(int a) :value(a)
	{
		cout << "Constructed using one argument constructor, value = " << value << endl;
	}
	A(A& x)
	{
		value = x.value;
		cout << "Constructed using copy constructor, value = " << value << endl;
	}
};

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		int elect, num;
		cin >> elect;
		if (elect == 0)
		{
			A a;
		}
		else if (elect == 1)
		{
			cin >> num;
			A a(num);
		}
		else if (elect == 2)
		{
			cin >> num;
			A b(num);
			A a(b);
		}
	}
	return 0;
}
