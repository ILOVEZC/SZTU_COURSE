/*Point(类与构造)
题目描述

下面是一个平面上的点的类定义，请在类外实现它的所有方法，并生成点测试它。
class Point
{
	double x, y;
public:
	Point();//缺省构造函数，给x,y分别赋值为0 
	Point(double x_value, double y_value);//有参构造函数，给x,y赋参数的值 
	double getX();//返回x的值 
	double getY();//返回y的值 
	void setX(double x_value);//设置x的值 
	void setY(double y_value);//设置y的值 
	double distanceToAnotherPoint(Point p);//计算当前点到参数点p的距离 
};
输入

测试数据的组数 t

第一组测试数据点p1的x坐标   第一组测试数据点p1的y坐标  第一组测试数据点p2的x坐标   第一组测试数据点p2的y坐标

..........


输出

输出p1到p2的距离

在C++中，输出指定精度的参考代码如下：

 

#include <iostream>

#include <iomanip> //必须包含这个头文件

using namespace std;

void main( )

{ double a =3.14;

  cout<<fixed<<setprecision(3)<<a<<endl;  //输出小数点后3位

}

样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
1 2 3 4
-1 0.5 -2 5

输出样例1
Distance of Point(1.00,2.00) to Point(3.00,4.00) is 2.83
Distance of Point(-1.00,0.50) to Point(-2.00,5.00) is 4.61
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class Point
{
	double x, y;
public:
	Point();
	Point(double x_value, double y_value);
	double getX();
	double getY();
	void setX(double x_value);
	void setY(double y_value);
	double distanceToAnotherPoint(Point p);
};
Point::Point():x(0),y(0){}
Point::Point(double x_value, double y_value):x(x_value),y(y_value){}
double Point::getX()
{
	return x;
}
double Point::getY()
{
	return y;
}
void Point::setX(double x_value)
{
	x = x_value;
}
void Point::setY(double y_value)
{
	y = y_value;
}
double Point::distanceToAnotherPoint(Point p)
{
	return sqrt(pow((x - p.getX()), 2) + pow((y - p.getY()), 2));
}
int main(void)
{
	int i, t;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		float x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		Point p1(x1, y1);
		Point p2(x2, y2);
		cout << fixed << setprecision(2) << "Distance of Point" << "(" << x1 << "," << y1 << ")" << " to "
			<< "Point" << "(" << x2 << "," << y2 << ")" << " is " << fixed << setprecision(2) << p1.distanceToAnotherPoint(p2) << endl;
	}
	return 0;
}
 
