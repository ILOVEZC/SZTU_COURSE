/* 点和圆 (类与对象)
题目描述

设计一个点类Point，包含属性：x坐标和y坐标，方法：设定坐标（setPoint），获取x坐标（getX），获取y坐标（getY）

设计一个圆类Circle，包含属性：圆心坐标x和y、半径r；方法包括：

1. 设定圆心（setCenter），设置圆心x坐标和y坐标

2. 设定半径（setRadius），设置半径长度

3. 计算面积（getArea），计算公式：面积=3.14*r*r

4. 计算周长（getLength），计算公式：周长=2*3.14*r

5. 包含（contain），判断一个圆是否包含一个点，计算圆心到这个点的距离，然后和半径做比较，大于则不包含，小于等于则包含

注意：提交代码时必须用注释划分出三个区域：类定义、类实现、主函数，如下

//-----类定义------

class XXX

{ 

        // 写类定义代码

};

//----类实现------

void XXX::process()

{

        // 写类定义代码

};

//-----主函数-----

int main()

{

        //自定义一些变量

        //创建一个圆对象和一个点对象

       //输入圆对象和点对象的属性数值，并做初始化

       //输出圆的面积和圆的周长

       //输出圆是否包含点，包含则输出yes，否则输出no

       return 0;

}


输入

第一行输入圆的三个整数参数：圆心的x和y坐标，半径

第二行输入点的两个整数参数：x和y坐标


输出

第一行输出圆的面积和周长，结果之间用空格隔开，输出精度到小数点后2位

第二行输出圆是否包含点，包含则输出yes，否则输出no

 

在C++中，输出指定精度的参考代码如下：

 

#include <iostream>

#include <iomanip> //必须包含这个头文件

using namespace std;

void main( )

{

        double a =3.14;

        cout<<fixed<<setprecision(3)<<a<<endl;  //输出小数点后3位

}

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
1 1 1
2 2

输出样例1
3.14 6.28
no

提示

求两点距离的公式 dis =sqrt [ (x1-x2)^2  + (y1-y2)^2 ] ， ^2表示平方，sqrt表示开平方根，本公式只是表示含义，不是真实代码

在C++使用sqrt函数可以求平方根，头文件包含cmath*/ 
#include<iostream>
#include <iomanip> //必须包含这个头文件
using namespace std;
//-----类定义------
class Ponit
{
public:
	int getX();
	int getY();
	void setPoint(int,int);
private:
	int x;
	int y;
};
class Circle
{
public:
	void setCenter(int,int);
	void setRadius(int);
	float getArea();
	float getLength();
	void contain(int,int);
private:
	int x;
	int y;
	int r;
};
//----类实现------
int Ponit::getX()
{
	return x;
}
int Ponit::getY()
{
	return y;
}
void Ponit::setPoint(int a,int b)
{
	x = a;
	y = b;
}
void Circle::setCenter(int a, int b)
{
	x = a;
	y = b;
}
void Circle::setRadius(int a)
{
	r = a;
}
float Circle::getArea()
{
	return 3.14 * r * r;
}
float Circle::getLength()
{
	return 2 * 3.14 * r;
}
void Circle::contain(int a,int b)
{
	int sum = (a - x) * (a - x) + (b - y) * (b - y);
	if (sum > r * r) cout << "no" << endl;
	else cout << "yes" << endl;
}
//-----主函数-----
int main()
{
	int a, b, c, d, e;
	Circle circle;
	Ponit point;
	cin >> a >> b >> c;
	circle.setCenter(a, b);
	circle.setRadius(c);
	cin >> d >> e;
	point.setPoint(d, e);
	cout << fixed << setprecision(2) << circle.getArea() << " "<<circle.getLength()<<endl;
	circle.contain(point.getX(), point.getY());
	return 0;
}
