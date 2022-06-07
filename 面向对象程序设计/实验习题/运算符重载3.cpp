/*矩阵相乘（运算符重载）
题目描述

定义一个矩阵类MyMatrix，并且在类中进行运算符重定义，用*实现矩阵相乘。要求必须对运算符进行重载，如果用函数如multiply（matrix，matrix）去实现矩阵之间的运算一律记0分。

 


输入

第一行输入所需要的矩阵个数c;
第二行输入矩阵的阶数n，即矩阵是一个n*n的矩阵;
第三行开始依次输入c个矩阵.
 
 


输出

c个矩阵相乘的结果

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
2
1 2
1 2
1 0
1 1
输出样例1
3 2
3 2
*/
#include <iostream>
#include<math.h>
using namespace std;
class MyMatrix
{
private:
    int** jz;
    int n;
public:
    MyMatrix(int n)
    {
        this->n = n;
        jz = new int* [n];
        int i;
        for (i = 0; i < n; i++)
        {
            *(jz + i) = new int[n] {0};
        }
    }
    void set()
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> *(*(jz + i) + j);
            }
        }
    }
    void display()
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                cout << jz[i][j] << " ";
            }
            if (i != n - 1)cout << jz[i][n - 1] << endl;
            else cout << jz[i][n - 1];
        }
    }
    MyMatrix operator*(MyMatrix& a)
    {
        MyMatrix p(a.n);
        int  j, k, h;
        int temp = -1;
        for (h = 0; h < n; h++)
        {
            for (k = 0; k < n; k++)
            {
                    for (j = 0; j < n; j++)
                    {
                        p.jz[h][k] += jz[h][j] * a.jz[j][k];
                    }
                
            }
        }
        return p;
    }
};

int main()
{
    int t, n;
    cin >> t >> n;
    MyMatrix text1(n);
    text1.set();
    t--;
    while (t--)
    {
        MyMatrix text2(n);
        text2.set();
        text1 = text1 * text2;
    }
    text1.display();
}
