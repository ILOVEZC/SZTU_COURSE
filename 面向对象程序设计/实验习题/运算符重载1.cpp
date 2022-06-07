/*分数的加减乘除（运算符重载）
题目描述

Fraction类的基本形式如下：

// 定义Fraction类
class Fraction
{
private:
    int fz, fm;
    int commonDivisor(); // 计算最大公约数
    void contracted(); // 分数化简
public:
    Fraction(int = 0, int = 1);
    Fraction(Fraction&);
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    Fraction operator*(Fraction);
    Fraction operator/(Fraction);
    void set(int = 0, int = 1);
    void disply();
};
要求如下：
1.实现Fraction类；common_divisor()和contracted()函数体可为空，不实现具体功能。
2.编写main函数，初始化两个Fraction对象的，计算它们之间的加减乘除。
 
 


输入

第1行：依次输入第1个和第2个Fraction对象的分子和分母值。

 

 


输出

每行依次分别输出加减乘除计算后的Fraction对象（直接输出分数值，不需要约简）。

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
1 3 2 5
输出样例1
fraction=11/15
fraction=-1/15
fraction=2/15
fraction=5/6
*/
#include <iostream>
#include<math.h>
using namespace std;
class Fraction
{
private:
    int fz, fm;
    int commonDivisor() // 计算最大公约数
    {
        int maxx = max(fz, fm);
        int minn = min(fz, fm);
        int temp = maxx % minn;
        while (temp != 0)
        {
            maxx = minn;
            minn = temp;
            temp = maxx % minn;
        }
        return minn;
    }
    void contracted(); // 分数化简
public:
    Fraction(int = 0, int = 1) {};
    Fraction(Fraction& a)
    {
        fz = a.fz;
        fm = a.fm;
    }
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    Fraction operator*(Fraction);
    Fraction operator/(Fraction);
    void set(int = 0, int = 1);
    void disply();
};
void Fraction::set(int a, int b)
{
    fz = a;
    fm = b;
}
void Fraction::contracted()
{
    fz = fz / commonDivisor();
    fm = fm / commonDivisor();
}
Fraction Fraction::operator-(Fraction tt)
{
    Fraction text;
    text.set(fz, fm);
    int afm = fm;
    int bfm = tt.fm;
    text.fm = text.fm * bfm;
    text.fz = text.fz * bfm;
    tt.fm = tt.fm * afm;
    tt.fz = tt.fz * afm;
    text.fz -= tt.fz;
    return text;
}
Fraction Fraction::operator+(Fraction tt)
{
    Fraction text;
    text.set(fz, fm);
    int afm = fm;
    int bfm = tt.fm;
    text.fm = text.fm * bfm;
    text.fz = text.fz * bfm;
    tt.fm = tt.fm * afm;
    tt.fz = tt.fz * afm;
    text.fz += tt.fz;
    return text;
}
Fraction Fraction::operator*(Fraction tt)
{
    Fraction text;
    text.set(fz, fm);
    text.fz = text.fz * tt.fz;
    text.fm = text.fm * tt.fm;
    return text;
}
Fraction Fraction::operator/(Fraction tt)
{
    Fraction text;
    text.set(fz, fm);
    text.fz = text.fz * tt.fm;
    text.fm = text.fm * tt.fz;
    return text;
}
void Fraction::disply()
{
    cout << "fraction=" << fz << "/" << fm << endl;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Fraction text1, text2;
    text1.set(a, b);
    text2.set(c, d);
    Fraction text3,text4,text5,text6;
    text3 = text1 + text2;
    text4 = text1 - text2;
    text5 = text1 * text2;
    text6 = text1 / text2;
    text3.disply();
    text4.disply();
    text5.disply();
    text6.disply();
    return 0;
}
