 /**时钟调整（运算符前后增量）
题目描述

假定一个时钟包含时、分、秒三个属性，取值范围分别为0~11，0~59，0~59，具体要求如下：

1、用一元运算符++，并且是前增量的方法，实现时钟的调快操作。例如要把时钟调快5秒，则执行5次”  ++<对象> “ 的操作

2、用一元运算符--，并且是后增量的方法，实现时钟的调慢操作。例如要把时钟调慢10秒，则执行10次” <对象>-- “的操作

3、用构造函数的方法实现时钟对象的初始化，用输出函数实现时钟信息的输出

clock和time是系统内部函数，所以不要用来做类名或者其他


输入

第一行输入时钟的当前时间时、分、秒

第二行输入t表示有t个示例

第三行输入t个整数x，如果x为正整数，则表示执行调快操作，使用重载运算符++；如果x为负整数，则表示执行调慢操作，使用重载运算符--

每次的调快或调慢操作都是承接上一次调整后的结果进行，例如先调快10秒，再调慢2秒，那么调慢2秒是接着调快10秒后的结果进行的

 

 


输出

每行输出每个时钟调整操作后的时分秒

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
11 58 46
4
5 70 -22 -55

输出样例1
11:58:51
0:0:1
11:59:39
11:58:44

**/
#include <iostream>
using namespace std;
class Vector
{
    int vec[10];
public:
    Vector(int v[10])
    {
        for (int i = 0; i < 10; i++)
        {
            vec[i] = v[i];
        }
    }
    Vector() 
    {
        for (int i = 0; i < 10; i++)
        {
            vec[i] = 0;
        }
    };
    Vector(const Vector& a)
    {
        for (int i = 0; i < 10; i++)
        {
            vec[i] = a.vec[i];
        }
    };
    Vector operator+(Vector& a)
    {
        Vector b;
        for (int i = 0; i < 10; i++)
        {
            b.vec[i] = a.vec[i] + vec[i];
        }
        return b;
    }
    Vector operator-(Vector& a)
    {
        Vector b;
        for (int i = 0; i < 10; i++)
        {
            b.vec[i] = vec[i] - a.vec[i];
        }
        return b;
    }
    friend ostream& operator<<(ostream& out,const Vector&);
};
ostream& operator<<(ostream& out, const Vector& a)
{
    for (int i = 0; i < 9; i++)
    {
        cout << a.vec[i] << " ";
    }
    cout << a.vec[9];
    return out;
}
int main()
{
    int a[10];
    int b[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        cin >> b[i];
    }
    Vector c(a), d(b);
    Vector e = c + d;
    Vector f = c - d;
    cout << e << endl;
    cout << f;
    return 0;
}
