<<<<<<< HEAD
/*三维空间的点（继承）
题目描述

定义一个平面上的点C2D类，它含有一个getDistance()的成员函数，计算该点到原点的距离；从C2D类派生出三维空间的点C3D类，它的getDistance()成员函数计算该点到原点的距离。试分别生成一个C2D和C3D的对象，计算它们到原点的距离。
三维空间的两点（x, y, z）和（x1, y1, z1）的距离公式如下：
[(x-x1)^2+(y-y1)^2+(z-z1)^2]^(1/2) 
 
=======
/*商旅信用卡（多重继承）
题目描述

某旅游网站（假设旅程网）和某银行推出旅游综合服务联名卡—旅程信用卡，兼具旅程会员卡和银行信用卡功能。

旅程会员卡，有会员卡号（int）、旅程积分（int），通过会员卡下订单，按订单金额累计旅程积分。

信用卡，有卡号（int）、姓名（string)、额度（int)、账单金额（float)、信用卡积分（int）。------请注意数据类型

信用卡消费金额m，若超额度，则不做操作；否则，账单金额+m，额度-m，信用卡积分按消费金额累加。

信用卡退款m，账单金额-m，信用卡积分减去退款金额。

通过旅程信用卡在旅程网下单，旅程积分和信用卡积分双重积分（即旅程积分和信用卡积分同时增加）。

旅程信用卡可以按      旅程积分：信用卡积分= 1：2    的比例将信用卡积分兑换为旅程积分。

初始假设信用卡积分、旅程积分、账单金额为0。

根据上述内容，定义旅程会员卡类、信用卡类，从两者派生出旅程信用卡类并定义三个类的构造函数和其它所需函数。

生成旅程信用卡对象，输入卡信息，调用对象成员函数完成旅程网下单、信用卡刷卡、信用卡退款、信用卡积分兑换为旅程积分等操作。
>>>>>>> 5e2661b (week16)


输入

<<<<<<< HEAD
第一行二维坐标点位置

第二行三维坐标点位置1

第三行三维坐标点位置2

 
=======
第一行：输入旅程会员卡号 信用卡号 姓名 额度

第二行：测试次数n

第三行到第n+2行，每行：操作 金额或积分

o   m（旅程网下订单，订单金额m）

c   m（信用卡消费，消费金额m）

q   m (信用卡退款，退款金额m）

t    m（积分兑换，m信用卡积分兑换为旅程积分）
>>>>>>> 5e2661b (week16)


输出

<<<<<<< HEAD
第一行二维坐标点位置到原点的距离

第二行三维坐标点位置1到原点的距离

第三行三维坐标点位置2到原点的距离

第四行三维坐标点位置2赋值给二维坐标点变量后，二维坐标点到原点的距离

输入样例
3 4
3 4 5
6 8 8

输出样例
5
7.07107
12.8062
10*/
#include <iostream>
#include<cmath>
using namespace std;

class C2D
{
protected:
    int x;
    int y;
public:
    C2D(){}
    C2D(int a,int b)
    {
        x = a;
        y = b;
    }
    void getC2D(int a, int b)
    {
        x = a;
        y = b;
    }
    double getDistance()
    {
        return pow((pow(x, 2) + pow(y, 2)),0.5);
    }
};
class C3D :public C2D
{
public:
    C3D(int a, int b, int c)
    {
        getC2D(a, b);
        z = c;
    }
    double getDistance()
    {
        return pow((pow(x, 2) + pow(y, 2) + pow(z, 2)), 0.5);
    }
protected:
    int z;
};

int main()
{
    int a, b, c;
    cin >> a >> b;
    C2D A(a, b);
    cout<<A.getDistance()<<endl;
    cin >> a >> b >> c;
    C3D B(a, b,c);
    cout<<B.getDistance()<<endl;
    cin >> a >> b >> c;
    C3D C(a, b, c);
    cout<<C.getDistance() << endl;
    A = C;
    cout << A.getDistance() << endl;
    return 0;
}
=======
输出所有操作后旅程信用卡的信息：

旅程号   旅程积分

信用卡号  姓名   账单金额   信用卡积分


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
1000 2002  lili  3000
4
o 212.5
c 300
q 117.4
t 200

输出样例1
1000 312
2002 lili 395.1 195

*/ 
#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
class travel
{
protected:
    int no;
    int fen = 0;
public:
    travel(int a):no(a){}
};
class card
{
protected:
    int cno;
    string name;
    int max;//额度
    float cash = 0;//账单
    int cfen = 0;//信用卡积分
public:
    card(int a,string b,int c):cno(a),name(b),max(c){}

    virtual void deposit(float m)
    {
        if (m < max)
        {
            cash = cash + m;
            max = max - m;
            cfen = cfen + (int)m;
        }
        else;
    }
    void giveout(float m)
    {
        cash = cash - m;
        cfen = cfen - (int)m;
    }
};
class travelcard:public travel,public card
{
public:
    travelcard(int a, int b, string c, int d):travel(a), card(b,c,d){}
    void change(float m)
    {
        if (cfen >= m)
        {
            cfen -= m;
            int dot = m / 2;
            fen = dot + fen;
        }
        else
        {
            int dot = cfen / 2;
            cfen = 0;
            fen = dot + fen;
        }
    }
    void deposit(float m)
    {
        if (m < max)
        {
            cash = cash + m;
            max = max - m;
            cfen = cfen + (int)m;
            fen = fen + (int)m;
        }
        else;
    }
    void display()
    {
        cout << no << " " << fen << "\n"
            << cno << " " << name << " " << cash << " " << cfen << "\n";
    }
};

    int main()
    {
        int no, cno, max;
        string name;
        cin >> no >> cno >> name >> max;
        travelcard text(no, cno, name, max);
        int t;
        cin >> t;
        while (t--)
        {
            char c;
            float m;
            cin >> c >>m;
            if (c == 'o') text.deposit(m);
            else if (c == 'c') text.card::deposit(m);
            else if (c == 'q') text.giveout(m);
            else if (c == 't') text.change(m);
        }
        text.display();

        return 0;
    }
>>>>>>> 5e2661b (week16)
