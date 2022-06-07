/*复数运算（友元函数）
题目描述

复数类的声明如下：

class Complex
{
private:
	double real; // 实部
	double imag; // 虚部
public:
	Complex();
	Complex(double r, double i);
	// 友元函数，复数c1 + c2(二参数对象相加)
	friend Complex addCom(const Complex& c1, const Complex& c2);
	// 友元函数，输出类对象c的有关数据(c为参数对象)
	friend void outCom(const Complex& c);
};
 

要求如下：

1.     实现复数类和友元函数addCom和outCom。

2.   参考addCom函数为复数类增加一个友元函数minusCom，用于实现两个复数的减法

3.     在main函数中，通过友元函数，实现复数的加减法和复数的输出。

 

 


输入

第1行：第1个复数的实部和虚部

第2行：需进行运算的次数，注意：是连续运算。具体结果可参考样例

    第3行开始，每行输入运算类型，以及参与运算的复数的实部与虚部。“+”表示复数相加，“-”表示复数相减。

 


输出

 每行输出复数运算后的结果，复数输出格式为“(实部,虚部)”。

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
10 10
3
+ 20 10
- 15 5
+ 5 25
输出样例1
(30,20)
(15,15)
(20,40)
*/
#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
class Complex
{
private:
	double real; // 实部
	double imag; // 虚部
public:
	Complex(){}
	Complex(double r, double i):real(r),imag(i){}
	// 友元函数，复数c1 + c2(二参数对象相加)
	friend Complex addCom(const Complex& c1, const Complex& c2);
	// 友元函数，复数c1 - c2(二参数对象相减)
	friend Complex minusCom(const Complex& c1, const Complex& c2);
	// 友元函数，输出类对象c的有关数据(c为参数对象)
	friend void outCom(const Complex& c);
};
Complex addCom(const Complex& c1, const Complex& c2)
{
	Complex a(c1.real + c2.real, c1.imag + c2.imag);
	return a;
}
Complex minusCom(const Complex& c1, const Complex& c2)
{
	Complex a(c1.real - c2.real, c1.imag - c2.imag);
	return a;
}
void outCom(const Complex& c)
{
	cout << "(" << c.real << "," << c.imag << ")" << endl;
}
int main(void)
{
	double a, b, t;
	cin >> a >> b >>t;
	Complex item(a, b);
	while (t--)
	{
		char flag;
		double r, i;
		cin >>flag >>r >> i;
		Complex item2(r, i);
		if (flag == '+')
		{
			item=addCom(item, item2);
			outCom(item);
		}
		if (flag == '-')
		{
			item = minusCom(item, item2);
			outCom(item);
		}
	}
    return 0;
}
