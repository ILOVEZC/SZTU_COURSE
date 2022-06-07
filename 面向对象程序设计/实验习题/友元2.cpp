/*银行账户（静态成员与友元函数）
题目描述

银行账户类的基本描述如下：

class Account
{
private:
    static float count; // 账户总余额
    static float interestRate;
    string accno, accname;
    float balance;
public:
    Account(string ac, string na, float ba);
    ~Account();
    void deposit(float amount); // 存款
    void withdraw(float amount); // 取款
    float getBalance(); // 获取账户余额
    void show(); // 显示账户所以基本信息
    static float getCount(); // 获取账户总余额
    static void setInterestRate(float rate); // 设置利率
    static float getInterestRate(); // 获取利率
};
 

要求如下：

实现该银行账户类

为账户类Account增加一个友元函数，实现账户结息，要求输出结息后的余额（结息余额=账户余额+账户余额*利率）。友元函数声明形式为 friend void update(Account& a);

在main函数中，定义一个Account类型的指针数组，让每个指针指向动态分配的Account对象，并调用成员函数测试存款、取款、显示等函数，再调用友元函数测试进行结息。

大家可以根据实际需求在类内添加其他方法，也可以修改成员函数的参数设置

 

 

 


输入

第1行：利率
第2行：账户数目n
第3行开始，每行依次输入一个账户的“账号”、“姓名”、“余额”、存款数，取款数。


输出

第1行开始，每行输出一个账户的相关信息，包括账号、姓名、存款后的余额、存款后结息余额、取款后余额。

最后一行输出所有账户的余额。

 

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
0.01
3
201501 张三 10000 1000 2000
201502 李四 20000 2000 4000
201503 王二 80000 4000 6000
输出样例1
201501 张三 11000 11110 9110
201502 李四 22000 22220 18220
201503 王二 84000 84840 78840
106170
*/
#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
class Account
{
private:
    static float count; // 账户总余额
    static float interestRate; // 利率
    string accno, accname;//账号，名字
    float balance;// 单个账户余额
public:
    Account(){}
    Account(string ac, string na, float ba) :accno(ac), accname(na), balance(ba)
    {
        count = count + balance;
    }
    ~Account()
    {
        count = count - balance;
    }
    void putaccno(string a)
    {
        accno = a;
    }
    void putname(string a)
    {
        accname = a;
    }
    void putbalance(float a)
    {
        balance = a;
        count = count + a;
    }
    void deposit(float amount)
    {
        balance = balance + amount;
        count = count + amount;
    }
    void withdraw(float amount)
    {
            balance = balance - amount;
            count = count - amount;
    }
    float getBalance()// 获取账户余额
    {
        return balance;
    }
    void show()
    {
        cout << accno << " " << accname << " ";
    }
    static float getCount() // 获取账户总余额
    {
        return count;
    }
    static void setInterestRate(float rate) // 设置利率
    {
        interestRate = rate;
    }
    static float getInterestRate()// 获取利率
    {
        return interestRate;
    }
    friend void update(Account& a);
};
float Account::count = 0;
float Account::interestRate = 0;
void update(Account& a)
{
    a.count = a.count - a.balance;
    a.balance = (a.balance + a.balance * a.interestRate);
    a.count = a.count + a.balance;
    cout << a.balance << " ";
}
int main(void)
{
    int t, i;
    float interest;
    cin >> interest;
    cin >> t;
    Account* p = new Account[t];
    p->setInterestRate(interest);
    for (i = 0; i < t; i++)
    {
        string accno, accname;
        float money;
        cin >> accno >> accname >> money;
        (p + i)->putaccno(accno);
        (p + i)->putname(accname);
        (p + i)->putbalance(money);
        float addmoney,outmoney;
        cin >> addmoney;
        cin >> outmoney;
        (p + i)->show();
        (p + i)->deposit(addmoney);
        cout << (p + i)->getBalance()<<" ";
        update(*(p + i));
        (p + i)->withdraw(outmoney);
        cout << (p + i)->getBalance() << endl;
    }
    cout << p->getCount() << endl;
    return 0;
}
