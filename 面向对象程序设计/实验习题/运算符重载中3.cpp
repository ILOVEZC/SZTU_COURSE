/**集合（运算符重载）
题目描述

集合是由一个或多个确定的元素所构成的整体。集合的运算有并、交、相对补等。

集合A和集合B的交集：由属于A且属于B的相同元素组成的集合。

集合A和集合B的并集：由所有属于集合A或属于集合B的元素所组成的集合。

集合B关于集合A的相对补集，记做A-B：由属于A而不属于B的元素组成的集合。

假设集合A={10，20，30}，集合B={1，10，50，8}。则A与B的并是{10，20，30,1,50,8}，A与B的交是{10}，B关于A的相对补集是{20,30}。

定义整数集合类CSet，属性包括：集合中的元素个数n，整型指针data存储集合中的元素。

方法有：重载输出，按样例格式输出集合中的元素。

                      重载+运算符，求集合A和集合B的并集，并返回结果集合。

                     重载-运算符，求集合B关于集合A的相对补集，并返回结果集合。

                       重载*运算符，求集合A和集合B的交集，并返回结果集合。

主函数输入集合A、B的数据，计算集合的并、交、相对补。

可根据题目，为CSet类添加需要的成员函数。

                        

        


输入

 测试次数

每组测试数据两行，格式如下：

第一行：集合A的元素个数和元素

第二行：集合B的元素个数和元素


输出

 每组测试数据输出如下：

第一行：集合A

第二行：集合B

第三行：A和B的并

第四行：A和B的交

第五行：B关于A的相对补集 与 A关于B的相对补集的并，即(A-B)+(B-A)

每组测试数据间以空行分隔。


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
3 10 20 30
4 10 1 2 3
5 100 2 3 4 -10
6 -34 12 2 4 90 100

输出样例1
A:10 20 30
B:10 1 2 3
A+B:10 20 30 1 2 3
A*B:10
(A-B)+(B-A):20 30 1 2 3

A:100 2 3 4 -10
B:-34 12 2 4 90 100
A+B:100 2 3 4 -10 -34 12 90
A*B:100 2 4
(A-B)+(B-A):3 -10 -34 12 90
**/
#include <iostream>
using namespace std;
class Cset
{
private:
    int n;
    int* data;
public:
    Cset(int n)
    {
        this->n = n;
        data = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> data[i];
        }
    }
    Cset(int n, int i)
    {
        this->n = n;
        data = new int[n];
    }
    Cset(int sum, const Cset a)
    {
        n = sum;
        data = new int[n];
        for (int i = 0; i < n; i++)
        {
            data[i] = a.data[i];
        }
    }
    Cset(const Cset& a)
    {
        n = a.n;
        data = new int[n];
        for (int i = 0; i < n; i++)
        {
            data[i] = a.data[i];
        }
    }
    Cset operator+(const Cset& a)
    {
        int num = a.n + n;
        Cset c(num,1);
        int cot = 0;
        for (int i = 0; i < n; i++)
        {
            c.data[i] = data[i];
            cot++;
        }
        int flag;
        for (int i = 0; i < a.n; i++)
        {
            flag = 0;
            for (int j = 0; j < cot; j++)
            {
                if (a.data[i] == data[j]) flag = 1;
            }
            if (flag == 0)
            {
                c.data[cot] = a.data[i];
                cot++;
            }
        }
        return Cset(cot, c);
    }
    Cset operator*(const Cset& a)
    {
        int num = a.n + n;
        Cset c(num, 1);
        int cot = 0;
        int flag;
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            for (int j = 0; j < a.n; j++)
            {
                if (data[i] == a.data[j])
                {
                    flag = 1;
                }
            }
            int flag2 = 0;
            if (flag == 1)
            {
                for (int k = 0; k < cot; k++)
                {
                    if (data[i] == c.data[k])
                        flag2 = 1;
                }
            }
            if (flag2 == 0&&flag==1)
            {
                c.data[cot] = data[i];
                cot++;
            }
        }
        return Cset(cot, c);
    }
    Cset operator-(const Cset& a)
    {
        Cset text(*this);
        int cot = 0;
        for (int i = 0; i < text.n; i++)
        {
            for (int j = 0; j < a.n; j++)
            {
                if (text.data[i] == a.data[j])
                {
                    text.data[i] = 999999;
                }
            }
        }
        for (int i = 0; i < text.n; i++)
        {
            if (text.data[i] != 999999) cot++;
        }
        Cset c(cot, 1);
        int h = 0;
        for (int i = 0; i < text.n; i++)
        {
            if (text.data[i] != 999999)
            {
                c.data[h] = text.data[i];
                h++;
            }
        }
        return Cset(cot, c);
    }
    friend ostream& operator<<(ostream& out,const Cset& a);
};
ostream& operator<<(ostream& out, const Cset& a)
{
    for (int i = 0; i < a.n-1; i++)
    {
        cout << a.data[i] << " ";
    }
    cout << a.data[a.n-1];
    cout << endl;
    return out;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        Cset a(n);
        cin >> m;
        Cset b(m);
        cout << "A:" << a;
        cout << "B:" << b;
        cout <<"A+B:"<< a + b;
        cout <<"A*B:" << a * b;
        cout << "(A-B)+(B-A):" << (a - b) + (b - a);
        cout << endl;
    }
    return 0;
}

