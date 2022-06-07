/*向量2（友元及拷贝构造）
题目描述

在题目向量1的代码上添加类CVector的友元函数add，计算两个向量的和(对应分量相加)。

add定义如下:

CVector add(const CVector v1, const CVector v2)  //函数头不可修改。

主函数输入数据，生成两个向量对象v1,v2，调用add(v1, v2).print()输出向量v1 + v2的计算结果。（假设print()为CVector类中的输出函数。）

可根据需要，为类CVector添加拷贝构造函数及其它成员函数。


输入

第一行，输入测试次数t

每组测试数据格式如下:

向量维数n

第一个n维向量值

第二个n维向量值

 


输出

对每组测试数据，输出两个n维向量与它们的和


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
3
1 2 3
4 5 6
5
1 2 3 4 5
-1 2 4 6 10

输出样例1
1 2 3
4 5 6
5 7 9
1 2 3 4 5
-1 2 4 6 10
0 4 7 10 15

*/
#include <iostream>
#include <math.h>
using namespace std;
class CVector
{
    int* data;
    int n;
public:
    CVector()
    {
        n = 5;
        data = new int[5]{ 0,1,2,3,4 };
    }
    CVector(int n1, int num[])
    {
        n = n1;
        data = new int[n];
        int i;
        for (i = 0; i < n; i++)
        {
            data[i] = num[i];
        }
    }
    void print()
    {
        cout << data[0];
        int i;
        for (i = 1; i < n; i++)
        { 
            cout << " " << data[i];
        }
        cout << endl;
    }
    ~CVector()
    {
        delete[]data;
    }
    CVector(const CVector& a)
    {
        n = a.n;
        int len = n;
        data = new int[len];
        int i;
        for (i = 0; i < len; i++)
        {
            data[i] = a.data[i];
        }
    }
    friend CVector add(const CVector v1, const CVector v2);
};
CVector add(const CVector v1, const CVector v2)
{
    CVector v3(v2);
    int i;
    for (i = 0; i < v2.n; i++)
    {
        v3.data[i] = v3.data[i] + v1.data[i];
    }
    return v3;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        int* numarray1 = new int[num];
        int* numarray2 = new int[num];
        int i;
        for (i = 0; i < num; i++)
        {
            cin >> numarray1[i];
        }
        for (i = 0; i < num; i++)
        {
            cin >> numarray2[i];
        }
        CVector a1(num, numarray1);
        CVector a2(num, numarray2);
        CVector a3(add(a1, a2));
        a1.print();
        a2.print();
        a3.print();


    }
    return 0;

}
