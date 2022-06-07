<<<<<<< HEAD
/*学生成绩计算（继承）
题目描述

定义Person类具有姓名、年龄等属性，具有输出基本信息的display函数。

选修《面向对象程序设计》课程的学生在Person类的基础上，派生出子类：免听生和非免听生。子类继承父类成员，新增其他成员、改写display函数。

非免听生具有平时成绩、考试成绩和总评成绩三个属性，总评成绩根据（平时成绩*40%+考试成绩*60%）计算的结果，85分（包含）以上为A，75分（包含）-85分（不包含）为B，65分（包含）-75分（不包含）为C，60分（包含）-65分（不包含）为D，60分（不包含）以下为F。

免听生只有考试成绩和总评成绩两个属性，总评成绩100%根据考试成绩对应上述等级制成绩。

定义上述类并编写主函数，输入类型符号，若输入R，根据学生基本信息、平时成绩和考试成绩，建立非免听生对象，若输入S，根据学生基本信息、考试成绩，建立免听生对象。计算学生的总评成绩，并输出。

 
=======
/*支票账户（虚函数与多态）
题目描述

某银行的支票账户分为两类，一类为基本支票账户BaseAccount，另一类为具有透支保护特性的BasePlus支票账户。

BaseAccount支票账户的信息包括：客户姓名(name)、账户(account)、当前结余(balance)；BaseAccount支票账户可以执行的操作包括：存款(deposit)、取款(withdraw)、显示账户信息(display)。注意：取款金额不能透支，否则显示出错信息“insufficient”。

BasePlus支票账户除包含BaseAccount的所有信息外，还包括以下信息：透支上限(limit：默认为5000)，当前透支总额(limitSum)；BasePlus支票账户可执行的操作与BaseAccount相同，但有两种操作的实现不同：(1)对于取款操作，可以在透支上限范围内透支，超过则显示出错信息“insufficient”；(2)对于显示操作，必须显示BasePlus的其他信息。

请实现BaseAccount类和BasePlus类，其中BasePlus类继承于BaseAccount类，注意BaseAccount账户名称以BA开头，BasePlus账户名称以BP开头。

要求只使用一个基类指针，指向所建立的对象，然后使用指针调用类中的方法。
>>>>>>> 5e2661b (week16)


输入

<<<<<<< HEAD
测试次数t

随后每行输入学生类型 相关信息，姓名的最大字符长度为20
=======
测试案例组数 t

第一组测试数据：

第一行输入账户信息：姓名 帐号 当前余额

第二行输入四个整数，表示对账户按顺序存款、取款、存款、取款

第二组测试数据：

.........
>>>>>>> 5e2661b (week16)

 


输出

<<<<<<< HEAD
每个学生基本信息和总评成绩

 
=======
输出BaseAccount的信息

输出BasePlus的信息
>>>>>>> 5e2661b (week16)


样例查看模式 
正常显示
查看格式
<<<<<<< HEAD
输入样例
2
R cindy 18 100 100
S sandy 28 59
输出样例
cindy 18 A
sandy 28 F
*/
#include <iostream>
#include<cmath>
using namespace std;

class Person
{
public:
    Person(char g,string a, int b) :grade(g),name(a), age(b) {}
    void display()
    {
        cout << name << " " << age << endl;
    }
protected:
    string name;
    int age;
    char grade;
};
class rp:public Person
{
public:
    rp(char a,string b,int c,int d,int e):Person(a,b,c)
    {
        pingshi = d;
        kaoshi = e;
        zp= d * 0.4 + e * 0.6;
    }
    void display()
    {
        char ss;
        if (zp >= 85) ss = 'A';
        else if (75 <= zp && zp < 85) ss = 'B';
        else if (65 <= zp && zp < 75) ss = 'C';
        else if (60 <= zp && zp < 65) ss = 'D';
        else if (zp < 60) ss = 'E';
        cout << name << " " << age << " " << ss << endl;
    }

private:
    int pingshi;
    int kaoshi;
    int zp;
};
class sp :public Person
{
public:
    sp(char a, string b, int c, int d) :Person(a, b, c)
    {
        kaoshi = d;
        zp = d;
    }
    void display()
    {
        char ss;
        if (zp >= 85) ss = 'A';
        else if (75 <= zp && zp < 85) ss = 'B';
        else if (65 <= zp && zp < 75) ss = 'C';
        else if (60 <= zp && zp < 65) ss = 'D';
        else if (zp < 60) ss = 'F';
        cout << name << " " << age << " " << ss << endl;
    }

private:
    int kaoshi;
    int zp;
=======
输入样例1 <-复制
4
Tom BA008 1000
1000 2000 1000 1200
Bob BP009 1000
1000 2000 1000 7000
May BA001 2000
500 1000 500 1000
Lily BP002 1000
500 2000 500 3000
输出样例1
insufficient
Tom BA008 Balance:1000
insufficient
Bob BP009 Balance:1000 limit:5000
May BA001 Balance:1000
Lily BP002 Balance:0 limit:2000

*/
#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
class BaseAccount
{
protected:
    string name;
    string account;
    int balance;
public:
    BaseAccount(string a,string b,int c):name(a),account(b),balance(c){}
    void deposit(int a)
    {
        balance += a;
    }
    virtual void withdraw(int a)
    {
        if (a > balance) cout << "insufficient" << endl;
        else balance -= a; 
    }
    virtual void display()
    {
        cout << name << " " << account << " Balance:" << balance << endl;
    }
};
class BasePlus :public BaseAccount
{
protected:
    int limit = 5000;
    int limitSum = 0;
public:
    BasePlus(string a, string b, int c) :BaseAccount(a,b,c){}
    void withdraw(int a)
    {
        if (a > balance+limit)
        {
            cout << "insufficient" << endl;
        }
        else
        {
            if (a <= balance)
            {
                balance=balance-a;
            }
            else
            {
                int left = a - balance;
                balance = 0;
                limitSum = left;
                limit = limit - left;
            }
        }
    }
    void display()
    {
        cout << name << " " << account << " Balance:" << balance << " limit:" << limit << endl;
    }
>>>>>>> 5e2661b (week16)
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
<<<<<<< HEAD
        char a;
        cin >> a;
        if (a == 'R')
        {
            string b;
            int c, d, e;
            cin >> b >> c >> d >> e;
            rp A(a, b, c, d, e);
            A.display();
        }
        else if (a == 'S')
        {
            string b;
            int c, d, e;
            cin >> b >> c >>d ;
            sp B(a, b, c, d);
            B.display();
        }
    }
   
=======
        string a, b;
        int c;
        cin >> a >> b >> c;
        if(b[1]=='A')
        {
            BaseAccount abc(a, b, c);
            int d, e;
            cin >> d >> e;
            abc.deposit(d);
            abc.withdraw(e);
            cin >> d >> e;
            abc.deposit(d);
            abc.withdraw(e);
            abc.display();
        }
        if (b[1] == 'P')
        {
            BasePlus abc(a, b, c);
            int d, e;
            cin >> d >> e;
            abc.deposit(d);
            abc.withdraw(e);
            cin >> d >> e;
            abc.deposit(d);
            abc.withdraw(e);
            abc.display();
        }
    }
>>>>>>> 5e2661b (week16)
    return 0;
}
