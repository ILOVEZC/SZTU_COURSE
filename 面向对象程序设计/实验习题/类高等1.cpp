/*机器人变身（类与对象）【期中模拟】
题目描述

编写一个机器人类，包含属性有机器名、血量、伤害值、防御值、类型和等级。其中血量、伤害和防御和等级、类型相关：
普通型机器人，类型为N，血量、伤害、防御是等级的5倍
攻击型机器人，类型为A，攻击是等级的10倍，其他属性和普通的一样
防御型机器人，类型为D，防御是等级的10倍，其他属性和普通的一样
生命型机器人，类型为H，生命是等级的50倍，其他属性和普通的一样。
机器人操作包括：打印、各个属性的获取和设置方法，构造函数可有可无，根据需要自行编写，

编写一个全局函数用于机器人变身，使得各种类型机器人能够相互转变。参数包括机器人对象指针和变身后的机器人类型，功能是修改机器人类型，并更改相关的属性。如果变身类型和机器人原来的类型不同，则执行变身功能，并返回true；如果变身类型和原来类型相同，则不执行变身，并返回false.

要求所有数据成员都是私有属性，用C++语言和面向对象设计思想来编程实现上述要求


输入

第一行输入t，表示要执行t次机器人变身

接着每两行，一行输入一个机器人的属性，包括机器名、类型、等级，机器名最大长度为20，另一行输入变身类型

依次类推输入


输出

每行输出变身后的机器人信息，要求调用机器人的打印方法来输出，即使机器人不变身也输出

属性输出依次为：名称、类型、等级、血量、伤害、防御

最后一行输出执行变身的次数


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
3
X001 N 5
H
X002 A 5
D
X003 D 5
D

输出样例1
X001--H--5--250--25--25
X002--D--5--25--25--50
X003--D--5--25--25--50
The number of robot transform is 2

*/
#include<iostream>
#include<string.h>
using namespace std;

class robot
{
public:
    void print()
    {
        cout << name << "--" << kind << "--" << rank << "--" << blood << "--" << hit << "--" << defend << endl;
    }
    robot(char name1[21], char kind1, int rank1)
    {
        strcpy(name, name1);
        kind = kind1;
        rank = rank1;
        switch (kind)
        {
        case 'N':
            hit = blood = defend = rank * 5;
            break;
        case 'A':
            hit = rank * 10;
            blood = defend = rank * 5;
        case 'D':
            defend = rank * 10;
            hit = blood = rank * 5;
        case 'H':
            blood = rank * 50;
            hit = defend = rank * 5;
        }
    }
    friend bool change(robot*a,char kind1);

private:
    char name[21];
    int blood;
    int hit;
    int defend;
    char kind;
    int rank;
};
bool change(robot* a, char kind1)
{
    int flag = 0;
    if (a->kind != kind1)
    {
        flag = 1;
    }
    a->kind = kind1;
    switch (a->kind)
    {
    case 'N':
        a->hit = a->blood = a->defend = a->rank * 5;
        break;
    case 'A':
        a->hit = a->rank * 10;
        a->blood = a->defend = a->rank * 5;
        break;
    case 'D':
        a->defend = a->rank * 10;
        a->hit = a->blood = a->rank * 5;
        break;
    case 'H':
        a->blood = a->rank * 50;
        a->hit= a->defend = a->rank * 5;
        break;
    }
    if (flag == 1) return true;
    else return false;

}






int main()
{
    int t;
    int sum=0;
    cin >> t;
    while (t--)
    {
        char name1[21];
        char kind1;
        int rank1;
        cin >> name1 >> kind1 >> rank1;
        robot a(name1, kind1, rank1);
        char kind2;
        cin >> kind2;
        if (change(&a, kind2))
        {
            sum++;
        }
        a.print();
    }
    cout << "The number of robot transform is "
        << sum << endl;

}
