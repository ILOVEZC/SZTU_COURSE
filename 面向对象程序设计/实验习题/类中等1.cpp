/* 向量1（类和对象）
题目描述

n个有序数a1,a2,...,an组成的数组称为n维向量。 为n维向量定义CVector类，包含私有数据成员：

int *data；//存储n维向量

int n； //向量维数。

方法有：

（1）无参构造函数，设置n=5,data的数据分别为0,1,2,3,4；

（2）构造函数，用虚参n1和数组a初始化n和data的数据；

（3）输出函数，按格式输出n维向量的值；

（4）析构函数。

主函数输入数据，生成CVector对象并调用输出函数测试。


输入

输入n

输入n维向量

 


输出

 

分别调用无参和带参构造函数生成2个CVector对象，输出它们的值。

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
6
10 1 2 3 4 5


输出样例1
0 1 2 3 4
10 1 2 3 4 5

*/
#include <iostream>
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
};
int main()
{
    CVector a1;
    int n;
    cin >> n;
    int j;
    int* q = new int[n];
    for (j = 0; j < n; j++)
    {
        cin >> q[j];
    }
    CVector a2(n, q);
    a1.print();
    a2.print();
    return 0;

}
