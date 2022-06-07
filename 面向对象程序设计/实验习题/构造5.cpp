/*软件备份(拷贝构造函数)
题目描述

软件作为一种对象也可以用类来描述，软件的属性包括软件名称、类型(分别用O、T和B表示原版、试用版还是备份)、有效截至日期(用CDate类子对象表示)和存储介质(分别用D、H和U表示光盘、磁盘和U盘)等。软件拷贝可通过拷贝构造函数来实现，此时在拷贝构造函数中软件类型改成“B”, 存储介质改为"H"，其它不变。试完成该类的拷贝构造、构造和打印(包括从2015年4月7日算起有效期还有多少天，是否过期)成员函数的实现。

当输入软件有效截止日期是0年0月0日，表示无日期限制，为unlimited；当输入日期在2015年4月7日之前，则是过期，表示为expired；如果输入日期在2015年4月7日之后，则显示之后的剩余天数。具体输出信息看输出范例。


附CDate类的实现：

class CDate

{

    private:

        int year, month, day;

    public:

        CDate(int y, int m, int d);

        bool isLeapYear();

        int getYear();

        int getMonth();

        int getDay();

        int getDayofYear();

};

 

CDate::CDate(int y, int m, int d)

{ 

    year = y, month = m,day = d;

}

 

bool CDate::isLeapYear()

{ 

    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; 

}

 

int CDate::getYear()

{ 

    return year;

}

 

int CDate::getMonth() 

{ 

    return month;

}

 

int CDate::getDay() 

{ 

    return day;

}

 

int CDate::getDayofYear()

{

    int i, sum = day;

    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear())

    {

        a[2]++;

    }

    // 求日期的天数

    for (i = 0; i < month; i++)

    {

        sum += a[i];

    }

    return sum;

}

 


输入

测试数据的组数 t

第一个软件名称

第一个软件类型  第一个软件介质类型  第一个软件有效期年 月 日

第二个软件名称

第二个软件类型 第二个软件介质类型 第二个软件有效期年 月 日

......

注意：软件名称最大长度为30；


输出

name: 第一个软件名称

type: 第一个软件类型

media: 第一个软件介质类型

第一个软件2015-4-7后的有效天数

 

name: 第一个软件名称

type: backup

media: hard disk

第一个软件2015-4-7后的有效天数

......


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
3
Photoshop_CS5
O D 0 0 0
Audition_3.0
B U 2015 2 3
Visual_Studio_2010
T H 2015 5 5
输出样例1
name:Photoshop_CS5
type:original
media:optical disk
this software has unlimited use

name:Photoshop_CS5
type:backup
media:hard disk
this software has unlimited use

name:Audition_3.0
type:backup
media:USB disk
this software has expired

name:Audition_3.0
type:backup
media:hard disk
this software has expired

name:Visual_Studio_2010
type:trial
media:hard disk
this software is going to be expired in 28 days

name:Visual_Studio_2010
type:backup
media:hard disk
this software is going to be expired in 28 days
*/
#include<iostream>
#include<string.h>
using namespace std;
class CDate
{
private:
    int year, month, day;
public:
    CDate(int y, int m, int d);
    bool isLeapYear();
    int getYear();
    int getMonth();
    int getDay();
    int getDayofYear();
};
class Software
{
private:
    char name[50];
    char kind;
    CDate time;
    char objects;
public:
    Software(char f[], char a, char b, int c, int d, int e) :kind(a), time(c, d, e), objects(b)
    {
        strcpy(name, f);
    }
    Software(Software& A):time(A.time.getYear(), A.time.getMonth(), A.time.getDay())
    {
        strcpy(name, A.name);
        kind = 'B';
        objects = 'H';
    }
    void print()
    {
        cout <<"name:"<< name << endl;
        if (kind == 'O')cout << "type:" << "original" << endl;
        else if(kind=='T')cout << "type:" << "trial" << endl;
        else if(kind=='B')cout << "type:" << "backup" << endl;
        if (objects == 'D') cout << "media:optical disk" << endl;
        else if(objects=='H') cout << "media:hard disk" << endl;
        else if(objects=='U') cout << "media:USB disk" << endl;
        if (time.getYear() == 0 && time.getMonth() == 0 && time.getDay() == 0)
            cout << "this software has unlimited use";
        else if (time.getDayofYear()-97>0)
        {
            cout << "this software is going to be expired in " << time.getDayofYear() - 97 << " days" ;
        }
        else
        {
            cout << "this software has expired" ;
        }
    }
};
CDate::CDate(int y, int m, int d)
{
    year = y, month = m, day = d;
}
bool CDate::isLeapYear()
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int CDate::getYear()
{
    return year;
}
int CDate::getMonth()
{
    return month;
}
int CDate::getDay()
{
    return day;
}
int CDate::getDayofYear()
{
    int i, sum = day;
    int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear())
    {
        a[2]++;
    }
    // 求日期的天数
    for (i = 0; i < month; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    int t;
    cin >> t;
    t = t - 1;
    while (t--)
    {
        char e[30];
        char kind;
        char objects;
        int a, b, c;
        cin >> e >> kind >> objects >> a >> b >> c;
        Software sorfware1(e, kind, objects, a, b, c);
        sorfware1.print();
        cout << endl<<endl;
        Software sorfware2(sorfware1);
        sorfware2.print();
        cout << endl<<endl;
    }
    char e[30];
    char kind;
    char objects;
    int a, b, c;
    cin >> e >> kind >> objects >> a >> b >> c;
    Software sorfware1(e, kind, objects, a, b, c);
    sorfware1.print();
    cout <<endl<< endl;
    Software sorfware2(sorfware1);
    sorfware2.print();
    return 0;
}
