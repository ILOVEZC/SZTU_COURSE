/* 手机服务（构造+拷贝构造+堆）
题目描述

设计一个类来实现手机的功能。它包含私有属性：号码类型、号码、号码状态、停机日期；包含方法：构造、拷贝构造、打印、停机。
1、号码类型表示用户类别，只用单个字母，A表示机构，B表示企业、C表示个人
2、号码是11位整数，用一个字符串表示
3、号码状态用一个数字表示，1、2、3分别表示在用、未用、停用
4、停机日期是一个日期对象指针，在初始化时该成员指向空，该日期类包含私有属性年月日，以及构造函数和打印函数等
----------------------------------------
 
5、构造函数的作用就是接受外来参数，并设置各个属性值,并输出提示信息，看示例输出
6、拷贝构造的作用是复制已有对象的信息，并输出提示信息，看示例输出。
      想一下停机日期该如何复制，没有停机如何复制？？已经停机又如何复制？？
 
7、打印功能是把对象的所有属性都输出，输出格式看示例
8、停机功能是停用当前号码，参数是停机日期，无返回值，操作是把状态改成停用，并停机日期指针创建为动态对象，并根据参数来设置停机日期，最后输出提示信息，看示例输出
-------------------------------------------
 
要求：在主函数中实现号码备份的功能，对已有的虚拟手机号的所有信息进行复制，并将号码类型改成D表示备份；将手机号码末尾加字母X
 
 


输入

第一行输入t表示有t个号码

第二行输入6个参数，包括号码类型、号码、状态、停机的年、月、日，用空格隔开

依次输入t行

 


输出

每个示例输出三行，依次输出原号码信息、备份号码信息和原号码停机后的信息

每个示例之间用短划线（四个）分割开，看示例输出

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
A 15712345678 1 2015 1 1
B 13287654321 2 2012 12 12

输出样例1
Construct a new phone 15712345678
类型=机构||号码=15712345678||State=在用
Construct a copy of phone 15712345678
类型=备份||号码=15712345678X||State=在用
Stop the phone 15712345678
类型=机构||号码=15712345678||State=停用 ||停机日期=2015.1.1
----
Construct a new phone 13287654321
类型=企业||号码=13287654321||State=未用
Construct a copy of phone 13287654321
类型=备份||号码=13287654321X||State=未用
Stop the phone 13287654321
类型=企业||号码=13287654321||State=停用 ||停机日期=2012.12.12
----

*/
#include <iostream>
#include<string.h>
using namespace std;
class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date(int a,int b,int c):year(a),month(b),day(c){}
    int getyear() { return year; }
    int getmonth() { return month; }
    int getday() { return day; }
    void print()
    {
        cout << year << "." << month << "." << day << endl;
    }
};

class Phone
{
private:
    char kind;
    char num[30];
    int  state;
    Date *date;
public:
    Phone(char a, char b[30], int c)
    {
        kind = a;
        strcpy(num, b);
        state = c;
        date = NULL;
        cout << "Construct a new phone " << num << endl;

    }
    Phone(Phone& p):date(p.date)
    {
        kind = 'D';
        strcpy(num, p.num);
        cout << "Construct a copy of phone " << num << endl;
        strcat(num, "X");
        state = p.state;
    }
    void print()
    {
        char abc[30];
        if (kind == 'A') strcpy(abc, "机构");
        else if (kind == 'B') strcpy(abc, "企业");
        else if (kind == 'C') strcpy(abc, "个人");
        else if (kind == 'D') strcpy(abc, "备份");
        if (state == 1)cout << "类型=" << abc << "||号码=" << num << "||" << "State=" << "在用" << endl;
        else if (state == 2)cout << "类型=" << abc << "||号码=" << num << "||" << "State=" << "未用" << endl;
        else if (state == 3) 
        {
            cout << "类型=" << abc << "||号码=" << num << "||" << "State=" << "停用" << " ||停机日期=";
            date->print();
        }
    }
    void stopphone(int a,int b,int c)
    {
        state = 3;
        date = new Date(a,b,c);
        cout << "Stop the phone " << num << endl;
    }
};
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        char kind;
        char number[30];
        int objects;
        int year, month, day;
        cin >> kind >> number >> objects >> year >> month >> day;
        Phone item1(kind, number, objects);
        item1.print();
        Phone item2(item1);
        item2.print();
        item1.stopphone(year,month,day);
        item1.print();
        cout <<"----"<< endl;
    }
    return 0;
}
