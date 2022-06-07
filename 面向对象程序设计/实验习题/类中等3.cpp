/*向量3（静态成员）
题目描述

为向量1题目实现的CVector类添加私有静态成员sum，在初始化对象的同时，统计所有对象的n维向量和sum。

主函数生成多个对象，测试向量和。

可根据需要自行添加需要的静态成员函数，添加非静态成员函数不得分。


输入

测试次数t

每组测试数据格式如下：

输入m,表示n维向量的数目

后跟m行，每行格式：向量维数n  n维向量值


输出

对每组测试数据的m个向量，输出所有向量的分量和sum


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
2
5 1 2 3 4 5
3 4 5 6
3
2 1 2 
3 10 20 30
2 11 22

输出样例1
1 2 3 4 5
4 5 6
30
1 2
10 20 30
11 22
96
*/
#include <iostream>
#include <math.h>
using namespace std;
class CVector
{
    int* data;
    int n;
    static int sum;
public:
    CVector()
    {
        n = 5;
        data = new int[5]{ 0,1,2,3,4 };
        sum = sum + 10;
    }
    CVector(int n1, int num[])
    {
        n = n1;
        data = new int[n];
        int i;
        for (i = 0; i < n; i++)
        {
            data[i] = num[i];
            sum = sum + data[i];
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
            sum = sum + data[i];
        }
    }
    static int putsum()
    {
        return sum;
    }
    static void offsum()
    {
        sum = 0;
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
int CVector::sum = 0;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        int summary = 0;
        cin >> m;
        while (m--)
        {
            int num;
            cin >> num;
            int i;
            int* numarray = new int[num];
            for (i = 0; i < num; i++)
            {
                cin >> numarray[i];
            }
            CVector a1(num, numarray);
            a1.print();
            summary = a1.putsum();
        }
        cout << summary << endl;
        CVector::offsum();
    }
    return 0;

}
