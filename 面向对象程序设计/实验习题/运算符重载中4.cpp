/** 矩形关系（运算符重载）
题目描述

假设坐标采用二维平面坐标。

定义点类CPoint，包含属性x,y（整型）。方法有：带参构造函数，getX，getY分别返回点的x坐标，y坐标。

定义矩形类CRectangle，包含属性：矩形的左上角坐标leftPoint，右下角坐标rightPoint。类中方法有：

1）带参构造函数，初始化矩形的左上角、右下角

2）重载>运算符，参数为CPoint点对象，假设为p，若p在矩形内，返回true,否则返回false。

3）重载>运算符，第一个矩形若包含第二个矩形（部分边界可以相等），返回true，否则返回false。（要求该函数调用2）实现）

4）重载==运算符，判断两个矩形是否一致，返回true或false。

5）重载*运算符，判断两个矩形是否有重叠部分，返回true或false。

6）重载类型转换运算符，计算矩形的面积并返回，面积是整型。

7）重载<<运算符，输出矩形的两个角坐标，具体格式见样例。

输入2个矩形，计算面积，判断矩形的关系。主函数如下，不可修改。

int main()
{
    int t, x1, x2, y1, y2;
    cin >> t;
    while (t--)
    {
        // 矩形1的左上角、右下角
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect1(x1, y1, x2, y2);
        // 矩形2的左上角、右下角
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect2(x1, y1, x2, y2);
        // 输出矩形1的坐标及面积
        cout << "矩形1:" << rect1 << " " << (int)rect1 << endl;
        // 输出矩形2的坐标及面积
        cout << "矩形2:" << rect2 << " " << (int)rect2 << endl;
        if (rect1 == rect2)
        {
            cout << "矩形1和矩形2相等" << endl;
        }
        else if (rect2 > rect1)
        {
            cout << "矩形2包含矩形1" << endl;
        }
        else if (rect1 > rect2)
        {
            cout << "矩形1包含矩形2" << endl;
        }
        else if (rect1 * rect2)
        {
            cout << "矩形1和矩形2相交" << endl;
        }
        else
        {
            cout << "矩形1和矩形2不相交" << endl;
        }
        cout << endl;
    }
    return 0;
}
可根据需要，添加构造函数和析构函数。

 


输入

测试次数

每组测试数据如下：

矩形1的左上角、右下角坐标

矩形2的左上角、右下角坐标


输出

每组测试数据输出如下，中间以空行分隔：

矩形1的坐标和面积（具体格式见样例）

矩形2的坐标和面积（具体格式见样例）

矩形1和矩形2的关系（矩形1包含矩形2、矩形2包含矩形1、矩形2和矩形1相等、矩形1和矩形2相交、矩形1和矩形2不相交）

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
1 4 4 1
2 3 3 2
1 4 4 1
0 3 5 2

输出样例1
矩形1:1 4 4 1 9
矩形2:2 3 3 2 1
矩形1包含矩形2

矩形1:1 4 4 1 9
矩形2:0 3 5 2 5
矩形1和矩形2相交
**/
#include <iostream>
using namespace std;
class CPoint
{
    int x, y;
public:
    CPoint(int a, int b) :x(a), y(b) {};
    int getX() { return x; }
    int getY() { return y; }
};
class CRectangle
{
    CPoint leftPoint;
    CPoint rightPoint;
public:
    CRectangle(int a, int b, int c, int d) :leftPoint(a, b), rightPoint(c, d) {};
    bool operator>(CPoint a)
    {
        if (a.getX() >= leftPoint.getX() && a.getX() <= rightPoint.getX() && a.getY() <= leftPoint.getY() && a.getY() >= rightPoint.getY()) return true;
        else return false;
    }
    friend bool operator>(CRectangle& a, CRectangle& b);
    bool operator==(CRectangle& a)
    {
        if (leftPoint.getX() == a.leftPoint.getX() && leftPoint.getY() == a.leftPoint.getY()
            && rightPoint.getX() == a.rightPoint.getX() && rightPoint.getY() == a.rightPoint.getY())
            return true;
        else return false;
    }
    bool operator*(CRectangle& a)
    {
        CPoint b(leftPoint.getX(), rightPoint.getY());
        CPoint c(rightPoint.getX(), leftPoint.getY());
        CPoint e(a.leftPoint.getX(), a.rightPoint.getY());
        CPoint f(a.rightPoint.getX(), a.leftPoint.getY());
        if (leftPoint.getX() >= a.leftPoint.getX() && rightPoint.getX() <= a.rightPoint.getX()
            && leftPoint.getY() >= a.leftPoint.getY() && a.rightPoint.getY() >= rightPoint.getY())
            return true;
        else if (a.leftPoint.getX() >= leftPoint.getX() && a.rightPoint.getX() <= rightPoint.getX()
            && a.leftPoint.getY() >= leftPoint.getY() && rightPoint.getY() >= a.rightPoint.getY())
            return true;
        else if (*this>a.leftPoint||*this>a.rightPoint||*this>e||*this>f) return true;
        else if (a > leftPoint || a > rightPoint || a > b || a > c) return true;
        else if (*this > a || a > *this) return true;
        else return false;
    }
    operator int()
    {
        return (rightPoint.getX() - leftPoint.getX()) * (leftPoint.getY() - rightPoint.getY());
    }
    friend ostream& operator<<(ostream& out, CRectangle&);
};
bool operator>(CRectangle& a, CRectangle& b)
{
    if (a > b.leftPoint && a > b.rightPoint) return true;
    else return false;
}
ostream& operator<<(ostream& out, CRectangle& a)
{
    cout << a.leftPoint.getX() << " " << a.leftPoint.getY() <<
        " " << a.rightPoint.getX() << " " << a.rightPoint.getY();
    return out;
}
int main()
{
    int t, x1, x2, y1, y2;
    cin >> t;
    while (t--)
    {
        // 矩形1的左上角、右下角
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect1(x1, y1, x2, y2);
        // 矩形2的左上角、右下角
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect2(x1, y1, x2, y2);
        // 输出矩形1的坐标及面积
        cout << "矩形1:" << rect1 << " " << (int)rect1 << endl;
        // 输出矩形2的坐标及面积
        cout << "矩形2:" << rect2 << " " << (int)rect2 << endl;
        if (rect1 == rect2)
        {
            cout << "矩形1和矩形2相等" << endl;
        }
        else if (rect2 > rect1)
        {
            cout << "矩形2包含矩形1" << endl;
        }
        else if (rect1 > rect2)
        {
            cout << "矩形1包含矩形2" << endl;
        }
        else if (rect1 * rect2)
        {
            cout << "矩形1和矩形2相交" << endl;
        }
        else
        {
            cout << "矩形1和矩形2不相交" << endl;
        }
        cout << endl;
    }
    return 0;
}
