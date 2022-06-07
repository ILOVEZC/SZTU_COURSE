<<<<<<< HEAD
/* 新旧身份证(继承)
题目描述

按下述方式定义一个日期类CDate和描述15位身份证号的旧身份证类COldId:

class CDate
{

private:
	int year, month, day;
public:
	CDate(int, int, int);
	bool check(); //检验日期是否合法
	bool isLeap();
	void print();
};

class COldId
{
protected:
	char* pId15, * pName; //15位身份证号码，姓名
	CDate birthday; //出生日期
public:
	COldId(char* pIdVal, char* pNameVal, CDate& day);
	bool check(); //验证15位身份证是否合法
	void print();
	~COldId();
};
然后以COldId为基类派生18位身份证号的新身份证类CNewId,并增加3个数据成员:pId18(18位号码)、issueDay(签发日期)和validYear(有效期，年数)，并重新定义check()和print()。

身份证第18位校验码的生成方法：

1、将身份证号码前17位数分别乘以7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2。然后将其相加。

2、将17位数字与系数乘加的和除以11，得到余数。

3、余数与校验码的对应关系为1,0,X,9,8,7,6,5,4,3,2。也即：如果余数是3，身份证第18位就是9。如果余数是2，身份证的最后一位号码就是X。

主函数定义一个派生类对象，并用派生类对象调用check()，若返回false则输出“illegal id”否则调用print()输出身份证信息。check()对身份证合法性进行验证的规则：

1. 确认18位号码是从15位号码扩展的，且第18位校验码正确.

2. 身份证中的出生日期合法.

3. 身份证号码中不含非法字符.

4. 身份证号码的长度正确.

5. 身份证目前处于有效期内，假设当前日期为2021年11月8日。
=======
/*汽车收费（虚函数和多态）
题目描述

现在要开发一个系统，实现对多种汽车的收费工作。 汽车基类框架如下所示：

class Vehicle
{ 
protected:
     string no; //编号
public:
    virtual void display()=0; //应收费用
}
以Vehicle为基类，构建出Car、Truck和Bus三个类。

Car的收费公式为： 载客数*8+重量*2

Truck的收费公式为：重量*5

Bus的收费公式为： 载客数*30

生成上述类并编写主函数，要求主函数中有一个基类指针Vehicle *pv;用来做测试用。

主函数根据输入的信息，相应建立Car,Truck或Bus类对象，对于Car给出载客数和重量，Truck给出重量，Bus给出载客数。假设载客数和重量均为整数。

 
>>>>>>> 5e2661b (week16)


输入

<<<<<<< HEAD
测试数据的组数 t

第一个人姓名、出生日期年月日、15位身份证号码、18位身份证号码、签发日期年月日、有效期(100年按长期处理)

第二个人姓名、出生日期年月日、15位身份证号码、18位身份证号码、签发日期年月日、有效期(100年按长期处理)

......

姓名的最大字符长度为20
=======
第一行表示测试次数。从第二行开始，每个测试用例占一行，每行数据意义如下：汽车类型（1为car，2为Truck，3为Bus）、编号、基本信息（Car是载客数和重量，Truck给出重量，Bus给出载客数）。
>>>>>>> 5e2661b (week16)


输出

<<<<<<< HEAD
第一个人姓名

第一个人18位身份证号信息(号码、签发日期和有效期）或"illegal id"

第二个人姓名

第二个人18位身份证号信息(号码、签发日期和有效期）或"illegal id"

......
=======
车的编号、应缴费用
>>>>>>> 5e2661b (week16)


样例查看模式 
正常显示
查看格式
<<<<<<< HEAD
输入样例
10
AAAA 1988 2 28 440301880228113 440301198802281133 2006 1 20 20
BBBB 1997 4 30 440301980808554 440301199808085541 2015 2 2 10 
CCCC 1920 5 8 530102200508011 53010219200508011X 1980 3 4 30
DDDD 1980 1 1 340524800101001 340524198001010012 1998 12 11 20
EEEE 1988 11 12 110203881112034 110203198811120340 2007 2 29 20 
FFFF 1964 11 15 432831641115081 432831196411150810 2015 8 7 100
GGGG 1996 12 10 44030196121010 44030119961210109 2014 6 7 20
HHHH 1988 7 21 440301880721X12 44030119880721X122 2006 5 11 20
IIII 1976 3 30 440301760330098 440301197603300983 2003 4 15 20
JJJJ 1955 9 5 440301550905205 440301195509051052 2004 6 4 100 

输出样例
AAAA
440301198802281133 2006年1月20日 20年
BBBB
illegal id
CCCC
illegal id
DDDD
illegal id
EEEE
illegal id
FFFF
432831196411150810 2015年8月7日 长期
GGGG
illegal id
HHHH
illegal id
IIII
illegal id
JJJJ
illegal id*/
#include <iostream>
#include<cstring>
using namespace std;


class CDate
{

private:
    int year, month, day;
public:
    CDate(int a, int b, int c) :year(a), month(b), day(c) {};
    bool check() //检验日期是否合法
    {
        int a[7] = { 1,3,5,7,8,10,12 };
        int b[4] = { 4,6,9,11 };
        if (isLeap() && month == 2 && day > 29)
            return false;
        if (!isLeap() && month == 2 && day > 28)
            return false;
        for (int i = 0; i < 7; i++)
        {
            if (month == a[i] && day > 31)
                return false;
        }
        for (int i = 0; i < 4; i++)
        {
            if (month == b[i] && day > 30)
                return false;
        }
        return true;
    }
    bool isLeap()
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
        else return false;
    }
    int getall()
    {
        return year * 10000 + month * 100 + day;
    }
    void print()
    {
        cout << year << "年" << month << "月" << day << "日"<<" ";
    }
    int getyear()
    {
        return year;
    }
    int getmonth()
    {
        return month;
    }
    int getday()
    {
        return day;
    }
};

class COldId
{
protected:
    char* pId15, * pName; //15位身份证号码，姓名
    CDate birthday; //出生日期
public:
    COldId(char* pIdVal, char* pNameVal, CDate& day) :birthday(day)
    {
        pId15 = new char[20];
        pName = new char[20];
        strcpy(pName, pIdVal);
        strcpy(pId15, pNameVal);
    }
    bool check()//验证15位身份证是否合法
    {

    }
    void print()
    {
        cout << pId15 << endl;
    }
    ~COldId(){};
};
class CNewId :public COldId
{
private:
    char* pId18;//假设是一个长度为18的字符串；
    CDate issueDay;
    int validYear;
public:
    CNewId(char*e, char* f,CDate g,char* a,int b,int c,int d,int v):COldId(e,f,g),pId18(a),issueDay(b,c,d),validYear(v){}
    bool check()
    {
        if (!(getpId18() == pId18[17]))//现在关注点在于写好检查函数
        {
            return false;
        }
        if (strlen(pId18) != 18)
        {
            return false;
        }
        char sign[11] = "0123456789";
        int k;
        int i;
        int number = 0;
        for (int i = 0; i < 17; i++)
        {
            for (k = 0; k < 11; k++)
            {
                if (sign[k] == pId18[i])
                {
                    number++;
                    break;
                }
            }
        }
        if (number != 17) return false;
        int number2 = 0;
        for (k = 0; k < 11; k++)
        {
            if (pId18[17] == sign[k] || pId18[17] == 'X')
            {
                number2++;
                break;
            }
        }
        if (number2 == 0) return false;
        if (!birthday.check()) return false;
        if (!issueDay.check()) return false;
        for (i = 0; i <=5; i++)
        {
            if (pId15[i] != pId18[i]) return false;
        }
        for (i = 6; i <=14 ; i++)
        {
            if (pId15[i] != pId18[i + 2]) return false;
        }
        int v = issueDay.getall() + validYear * 10000;
        if ((v < 20211108)) return false;
        //最后一个判断条件，出生日期和身份证对应上
        int a = (pId18[6] - '0');
        int b = (pId18[7] - '0');
        int c = (pId18[8] - '0'); 
        int d = (pId18[9] - '0');
        int yearsum = a * 1000 + b * 100 + c * 10 + d;
        if (yearsum != birthday.getyear()) return false;
        if (birthday.getmonth() >= 10)
        {
            int a = pId18[10] - '0';
            int b = pId18[11] - '0';
            int monthsum = a * 10 + b;
            if (monthsum != birthday.getmonth()) return false;
        }
        else
        {
            int monthsum = pId18[11] - '0';
            if (monthsum != birthday.getmonth()) return false;
        }
        if (birthday.getday() >= 10)
        {
            int a = (pId18[12] - '0');
            int b = (pId18[13] - '0');
            int daysum = a * 10 + b;
            if (daysum != birthday.getday()) return false;
        }
        else
        {
            int daysum = (pId18[13] - '0');
            if (daysum != birthday.getday()) return false;
        }
        return true;
        
    }
    void print()
    {
        cout << pName << endl;
        cout << pId18 << " ";
        issueDay.print();
        if (validYear < 100)cout << validYear << "年" << endl;
        else cout << "长期" << endl;
    };
    char getpId18()
    {
        int sum = 0;
        for (int i = 0; i < 17; i++)
        {
            switch (i)
            {
            case 0: sum += (7 * (pId18[i] - '0')); break;
            case 1: sum += (9 * (pId18[i] - '0')); break;
            case 2: sum += (10 * (pId18[i] - '0')); break;
            case 3: sum += (5 * (pId18[i] - '0')); break;
            case 4: sum += (8 * (pId18[i] - '0')); break;
                case 5: sum += (4 * (pId18[i] - '0')); break;
                case 6: sum += (2 * (pId18[i] - '0')); break;
                case 7: sum += (1 * (pId18[i] - '0')); break;
                case 8: sum += (6 * (pId18[i] - '0')); break;
                case 9: sum += (3 * (pId18[i] - '0')); break;
                case 10: sum += (7 * (pId18[i] - '0')); break;
                case 11: sum += (9 * (pId18[i] - '0')); break;
                case 12: sum += (10 * (pId18[i] - '0')); break;
                case 13: sum += (5 * (pId18[i] - '0')); break;
                case 14: sum += (8 * (pId18[i] - '0')); break;
                case 15: sum += (4 * (pId18[i] - '0')); break;
                case 16: sum += (2 * (pId18[i] - '0')); break;
            }
        }
        int num17id = sum % 11;
        switch (num17id)
        {
        case 0: return '1';
        case 1: return '0';
        case 2: return 'X';
        case 3: return '9';
        case 4: return '8';
        case 5: return '7';
        case 6: return '6';
        case 7: return '5';
        case 8: return '4';
        case 9: return '3';
        case 10: return '2';
        }
    }
    void printname()
    {
        cout << pName << endl;
    }

};
//to_string(4)可以用于将字符串转换成数字
int main()
{
=======
输入样例1 <-复制
4
1 002 20 5
3 009 30
2 003 50
1 010 17 6

输出样例1
002 170
009 900
003 250
010 148

*/
#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
class Vehicle
{
protected:
    string no; //编号
public:
    virtual void display() = 0; //应收费用
    Vehicle(string no1):no(no1){}
};
class Car:public Vehicle
{
protected:
    int people;
    int weight;
public:
    Car(string no1, int peo, int wei) :Vehicle(no1),people(peo),weight(wei){}
    void display()
    {
        cout << no << " " << 8 * people + weight * 2 << endl;
    }
};
class Truck :public Vehicle
{
protected:
    int weight;
public:
    Truck(string no1,int wei) :Vehicle(no1),weight(wei) {}
    void display()
    {
        cout << no << " " << weight * 5 << endl;
    }
};
class Bus :public Vehicle
{
protected:
    int people;
public:
    Bus(string no1, int peo) :Vehicle(no1), people(peo){}
    void display()
    {
        cout << no << " " << people*30<< endl;
    }
};
int main()
{
    Vehicle* pv;
>>>>>>> 5e2661b (week16)
    int t;
    cin >> t;
    while (t--)
    {
<<<<<<< HEAD
        int year1, month1, day1;
        int year2, month2, day2;
        int value;
        char a[20];
        char b[16];
        char c[20];
        cin >> a;
        cin >> year1 >> month1 >> day1;
        CDate xxxx(year1, month1, day1);
        cin >> b;
        cin >> c;
        cin >> year2 >> month2 >> day2 >> value;
        CNewId text(a, b, xxxx, c, year2, month2, day2, value);
        if (text.check())
        {
            text.print();
        }
        else
        {
            text.printname();
           cout << "illegal id" << endl;
=======
        int u;
        cin >> u;
        if (u == 1)
        {
            string no;
            int peo, wei;
            cin >> no >> peo >> wei;
            pv = new Car(no, peo, wei);
            pv->display();
        }
        else if (u == 2)
        {
            string no;
            int wei;
            cin >> no >> wei;
            pv = new Truck(no, wei);
            pv->display();
        }
        else if (u == 3)
        {
            string no;
            int peo;
            cin >> no >> peo;
            pv = new Bus(no, peo);
            pv->display();
>>>>>>> 5e2661b (week16)
        }
    }
    return 0;
}
<<<<<<< HEAD

 
=======
>>>>>>> 5e2661b (week16)
