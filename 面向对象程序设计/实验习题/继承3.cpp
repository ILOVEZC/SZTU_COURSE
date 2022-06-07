<<<<<<< HEAD
/*时钟模拟(继承）
题目描述

定义计数器类，包含保护数据成员value,公有函数increment计数加1。

定义循环计算器继承计数器类，增加私有数据成员：最小值minValue，maxValue,

重写公有函数increment，使得value在minValue~maxValue区间内循环+1。

定义时钟类，数据成员是私有循环计数器对象小时hour、分钟minute、秒second，公有函数time(int s)计算当前时间经过s秒之后的时间，即hour，minute，second的新value值。

定义时钟类对象，输入当前时间和经过的秒数,调用time函数计算新时间。

根据题目要求，增加必要的构造函数、析构函数和其他所需函数。

因为clock和time是系统内置函数，为了避免重名，请不要使用clock或者time作为类名或者函数名


输入

第一行测试次数n

2行一组，第一行为当前时间（小时 分钟 秒），第二行为经过的秒数。
=======
/*图形面积（虚函数与多态）
题目描述

编写一个程序，定义抽象基类Shape，在Shape类中定义虚函数area()；由它派生出3个派生类：Circle(圆形)、Square(正方形)、Rectangle(矩形)。用虚函数分别计算几种图形面积。
1、要求输出结果保留两位小数。
2、要求用基类指针数组，使它每一个元素指向每一个派生类对象。

输入

测试数据的组数 t

第一组测试数据中圆的半径

第一组测测试数据中正方形的边长

第一组测试数据中矩形的长、宽

.......

第 t 组测试数据中圆的半径

第 t 组测测试数据中正方形的边长

第 t 组测试数据中矩形的长、宽
>>>>>>> 5e2661b (week16)


输出

<<<<<<< HEAD
输出n行

每行对应每组当前时间和经过秒数后计算得到的新时间（小时：分钟：秒）。
=======
第一组数据中圆的面积

第一组数据中正方形的面积

第一组数据中矩形的面积

......

第 t 组数据中圆的面积

第 t 组数据中正方形的面积

第 t 组数据中矩形的面积
>>>>>>> 5e2661b (week16)


样例查看模式 
正常显示
查看格式
<<<<<<< HEAD
输入样例
2
8 19 20
20
23 30 0
1801
输出样例
8:19:40
0:0:1*/
#include <iostream>
#include<cmath>
using namespace std;

class js
{
protected:
    int value;
public:
    js(int v) :value(v) {}
    void increment()
    {
        value++;
    }
};

class forjs :public js
{
public:
    forjs(int a,int b,int c):js(a), minValue(b),maxValue(c){}
    int increment(int s)
    {
        int num = 0;
        while (s--)
        {
            value++;
            if (value == maxValue)
            {
                value = minValue;
                num++;
            }
        }
        return num;
    }
    int getvalue()
    {
        return value;
    }
private:
    int minValue;
    int maxValue;
};

class Clock
{
public:
    Clock(int a,int b,int c):hour(a,0,24),minute(b,0,60),second(c,0,60){}
    void time(int s)
    {
        int flag1 = second.increment(s);
        int flag2 = minute.increment(flag1);
        hour.increment(flag2);

    }
    void print()
    {
        cout << hour.getvalue() << ":" << minute.getvalue() << ":" << second.getvalue() << endl;
    }
private:
    forjs hour;
    forjs minute;
    forjs second;
};

=======
输入样例1 <-复制
2
1.2
2.3
1.2 2.3
2.1
3.2
1.23 2.12

输出样例1
4.52
5.29
2.76
13.85
10.24
2.61

*/
#include <iostream>
#include<cstring>
#include<cmath>
#include <iomanip>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};
class Circle:public Shape
{
public:
    Circle(double r1)
    {
        r = r1;
    }
    double area()
    {
        return 3.14 * r * r;
    }
protected:
    double r;
};
class Square :public Shape
{
public:
    Square(double b1)
    {
        b = b1;
    }
    double area()
    {
        return b*b;
    }
protected:
    double b;
};
class Rectangle :public Shape
{
public:
    Rectangle(double x1,double y1)
    {
        x = x1;
        y = y1;
    }
    double area()
    {
        return x * y;
    }
protected:
    double x,y;
};
>>>>>>> 5e2661b (week16)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
<<<<<<< HEAD
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        Clock zeros(a, b, c);
        zeros.time(d);
        zeros.print();
    }
    return 0;
}


=======
        double a,b,c,d;
        cin >> a;
        Circle A(a);
        cout << fixed << setprecision(2) << A.area() << endl;
        cin >> b;
        Square B(b);
        cout << fixed << setprecision(2) << B.area() << endl;
        cin >> c >> d;
        Rectangle C(c, d);
        cout <<fixed<<setprecision(2)<< C.area() << endl;
    }
    return 0;
}
>>>>>>> 5e2661b (week16)
