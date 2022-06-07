/*距离计算（友元函数）
题目描述

Point类的基本形式如下：

class Point
{
private:
    double x, y;
public:
    Point(double xx, double yy); // 构造函数
};
请完成如下要求：

1.实现Point类；
2.为Point类增加一个友元函数double Distance(Point &a, Point &b),用于计算两点之间的距离。直接访问Point对象的私有数据进行计算。
3.编写main函数，输入两点坐标值，计算两点之间的距离。
 


输入

第1行：输入需计算距离的点对的数目

第2行开始，每行依次输入两个点的x和y坐标

 

 


输出

每行依次输出一组点对之间的距离（结果直接取整数部分,不四舍五入 ）

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
1 0 2 1
2 3 2 4
输出样例1
*/
#include <iostream>
#include <math.h>
using namespace std;
class Point
{
private:
    double x, y;
public:
    Point(double xx, double yy):x(xx),y(yy){}
    friend double Distance(Point& a, Point& b);
};
double Distance(Point& a, Point& b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}


int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        Point a(x1, y1);
        Point b(x2, y2);
        cout << (int)Distance(a, b) << endl;
    }
    
}
