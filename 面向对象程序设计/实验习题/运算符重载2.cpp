/* 复数的加减乘运算（运算符重载）
题目描述

定义一个复数类，通过重载运算符：+、-、*，实现两个复数之间的各种运算。

class Complex
{
private:
    float real, image;
public:
    Complex(float x = 0, float y = 0);
    friend Complex operator+(Complex&, Complex&);
    friend Complex operator-(Complex&, Complex&);
    friend Complex operator*(Complex&, Complex&);
    void show();
};
要求如下：
1.实现Complex类；
2.编写main函数，初始化两个Complex对象，计算它们之间的加减乘，并输出结果。
复数相乘的运算规则
设z1=a+bi，z2=c+di(a、b、c、d∈R)是任意两个复数，那么它们的积(a+bi)(c+di)=(ac-bd)+(bc+ad)i.

输入

第1行：输入两个数值，分别为第一个Complex对象的实部和虚部。
第2行：输入两个数值，分别为第二个Complex对象的实部和虚部。
 
 


输出

第1行：两个Complex对象相加后的输出结果。
第2行：两个Complex对象相减后的输出结果。
第3行：两个Complex对象相乘后的输出结果。
 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
10 20
50 40
输出样例1
Real=60 Image=60
Real=-40 Image=-20
Real=-300 Image=1400

*/
#include <iostream>
#include<math.h>
using namespace std;
class Complex
{
private:
    float real, image;
public:
    Complex(float x = 0, float y = 0)
    {
        real = x;
        image = y;
    }

    friend Complex operator+(Complex&, Complex&);
    friend Complex operator-(Complex&, Complex&);
    friend Complex operator*(Complex&, Complex&);
    void show();
};
void Complex::show()
{
    cout << "Real=" << real << " " << "Image=" << image << endl;
}
Complex operator+(Complex&a, Complex&b) 
{
    Complex text;
    text.real = a.real + b.real;
    text.image = a.image + b.image;
    return text;
}
Complex operator-(Complex& a, Complex& b)
{
    Complex text;
    text.real = a.real - b.real;
    text.image = a.image - b.image;
    return text;
}
Complex operator*(Complex& a, Complex& b)
{
    Complex text;
    text.real = a.real * b.real - a.image * b.image;
    text.image = a.real * b.image + a.image * b.real;
    return text;
}
int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    Complex text1(a, b);
    Complex text2(c, d);
    Complex text3 = text1 + text2;
    Complex text4 = text1 - text2;
    Complex text5 = text1 * text2;
    text3.show();
    text4.show();
    text5.show();
    return 0;
}
