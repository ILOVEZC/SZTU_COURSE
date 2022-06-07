/*虚拟电话（构造与析构）【期中模拟】
题目描述

虚拟电话包含属性：电话号、状态、机主姓名。
1、电话号是一个类，它包含号码和类型，其中号码是整数类型，类型用单个字母表示用户类别，A表示政府，B表示企业、C表示个人。类操作包括构造、属性的获取和设置等方法，根据需要自行编写。
2、状态用一个数字表示，1表示在用，0表示未用，
3、机主姓名是一个字符串
 

电话操作包括：构造、析构、打印和查询。
1、构造函数需要考虑复合类成员的构造，并且输出提示信息。假设电话号码为12345678，则构造函数输出"12345678 constructed."
2、打印是输出电话的相关信息，其中如果电话状态是在用则输出use；状态是未用则输出unuse，输出格式看示例。
3、析构函数是输出提示信息。假设电话号为12345678，则析构函数输出"12345678 destructed. "
4、查询操作是根据给定的号码查询电话，如果电话自身号码和给定号码不相同，则返回0；如果电话自身号码和给定号码相同，则返回1
 

用C++和面向对象思想实现以下要求：
1、输入相关数据，创建三个电话对象，并通过构造方法初始化。
2、输入若干个电话号码，通过查询操作查询这些号码是否在三个电话对象中，如果不存在输出"wrong number."，存在则调用打印操作输出电话信息，具体看输出样例。

输入

头三行输入三个电话信息，每行包括电话号码、电话类型、状态、机主姓名，机主姓名最大长度为20

接着一行输入t，表示有t个号码要查询

接着t行输入t个电话号码

 


输出

t行输出t个号码的查询结果


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
80000001 A 1 tom
80000002 B 0 ken
80000003 C 1 mary
3
50000002
80000003
80000002

输出样例1
80000001 constructed.
80000002 constructed.
80000003 constructed.
wrong number.
Phone=80000003--Type=C--State=use--Owner=mary
Phone=80000002--Type=B--State=unuse--Owner=ken
80000003 destructed.
80000002 destructed.
80000001 destructed.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Vphone;
class phone
{
public:
    phone(int num1, char kind1) :num(num1), kind(kind1)
    {
        
    }
    friend Vphone;

private:
    int num;
    char kind;
};

class Vphone
{
public:
    Vphone(int num1, char kind1, int state1, string name1) :PHO(num1, kind1), state(state1), name(name1) 
    {
        cout <<num1<< " constructed." << endl;
    }
    void print()
    {
        if (state == 1) cout << "Phone=" << PHO.num << "--" << "Type=" << PHO.kind << "--" << "State=" << "use--Owner=" << name << endl;
        else
        {
            cout << "Phone=" << PHO.num << "--" << "Type=" << PHO.kind << "--" << "State=" << "unuse--Owner=" << name << endl;
        }
    }
    ~Vphone()
    {
        cout << PHO.num << " destructed." << endl;
    }
    int check(int phone1)
    {
        if (phone1 == PHO.num) return 1;
        else return 0;
    }
private:
    phone PHO;
    int state;
    string name;
};







int main()
{
    int num1, num2, num3;
    char kind1, kind2, kind3;
    int state1, state2, state3;
    string name1, name2, name3;
    cin >> num1 >> kind1 >> state1 >> name1;
    cin >> num2 >> kind2 >> state2 >> name2;
    cin >> num3 >> kind3 >> state3 >> name3;
    Vphone phone1( num1,  kind1,  state1,  name1);
    Vphone phone2( num2,  kind2,  state2,  name2);
    Vphone phone3( num3,  kind3,  state3,  name3);
    int t;
    cin >> t;
    while (t--)
    {
        int number;
        cin >> number;
        if (phone1.check(number))
        {
            phone1.print();
            continue;
        }
        else if (phone2.check(number))
        {
            phone2.print();
            continue;
        }
        else if (phone3.check(number))
        {
            phone3.print();
            continue;
        }
        else
        {
            cout << "wrong number." << endl;
        }
    }
    return 0;
}
