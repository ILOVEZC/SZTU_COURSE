/**矩阵（运算符重载）
题目描述

下面主函数和CMatrix类完成矩阵的输入、输出。请补齐CMatrix类中需要的成员函数。

注意：主函数和CMatrix类已给代码不可修改，只可在CMatrix类中添加新的成员函数，并补充完整未实现的成员函数。修改已知代码不计分。

提示：根据已给代码分析CMatrix需要重载哪些运算符？

#include <iostream>
using namespace std;

// 定义矩阵类
class CMatrix
{
private:
    int n, m; // n-行，m-列
    int** data; // 存储矩阵数据
public:
    CMatrix();
    CMatrix(int n1, int m1);
    ~CMatrix();
};

CMatrix::CMatrix(int n1, int m1)
{
    n = n1;
    m = m1;
    // 分配n行m列的二维数组空间
    data = new int* [n];
    for (int i = 0; i < n; i++)
    {
        data[i] = new int[m];
    }
}

CMatrix::~CMatrix()
{
    // 释放空间
    for (int i = 0; i < n; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

int main()
{
    int t, n, m, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        // 定义矩阵对象matrixA
        CMatrix matrixA(n, m);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                // 输入第i行第j列的数据
                cin >> matrixA[i][j];
            }
        }
        // 输出matrixA中的数据
        cout << "matrixA:" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << matrixA(i, j) << " ";
            }
            cout << endl;
        }
        // 定义矩阵对象matrixB
        CMatrix matrixB;
        matrixB = matrixA;
        // 输出marixB中的数据
        cout << "matrixB:" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << matrixB[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
 


输入

 测试次数

每组测试数据格式如下：

正整数n、m，分表表示矩阵的行、列

n*m行整数数据


输出

每组测试数据输出矩阵数据两次，具体输出格式见样例。


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
3 3
1 2 3
4 5 6
7 8 9
2 4
10 20 30 40
50 60 70 80

输出样例1
matrixA:
1 2 3 
4 5 6 
7 8 9 
matrixB:
1 2 3 
4 5 6 
7 8 9 
matrixA:
10 20 30 40 
50 60 70 80 
matrixB:
10 20 30 40 
50 60 70 80 

提示

无参构造函数自行实现**/
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
    forjs(int a, int b, int c) :js(a), minValue(b), maxValue(c) {}
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
    int decrement(int s)
    {
        int num = 0;
        s = -s;
        while (s--)
        {
            value--;
            if (value == minValue-1)
            {
                value = maxValue-1;
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
    Clock(int a, int b, int c) :hour(a, 0, 12), minute(b, 0, 60), second(c, 0, 60) {}
    void time(int s)
    {
        int flag1 = second.increment(s);
        int flag2 = minute.increment(flag1);
        hour.increment(flag2);
    }
    void time(int s,int a)
    {
        int flag1 = second.decrement(s);
        int flag2 = minute.decrement(-flag1);
        hour.decrement(-flag2);
    }
    void print()
    {
        cout << hour.getvalue() << ":" << minute.getvalue() << ":" << second.getvalue() << endl;
    }
    Clock& operator++()
    {
        time(1);
        return *this;
    }
    Clock operator--(int)
    {
        Clock a(*this);
        time(-1,1);
        return a;
    }
private:
    forjs hour;
    forjs minute;
    forjs second;
};

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    Clock text(h, m, s);
    int t,gg;
    cin >> t;
    while(t--)
    {
        cin >> gg;
        if (gg > 0)
        {
            while (gg--)
            {
                ++text;
            }
            text.print();
        }
        else if (gg < 0)
        {
            gg = -gg;
            while (gg--)
            {
                text--;
            }

            text.print();
        }
        else if (gg == 0)
        {
            text.print();
        }
    }
    return 0;
}
