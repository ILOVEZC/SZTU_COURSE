/*日期时间合并输出（友元函数）
题目描述

已知日期类Date，有属性：年、月、日，其他成员函数根据需要自行编写，注意该类没有输出的成员函数
已知时间类Time，有属性：时、分、秒，其他成员函数根据需要自行编写，注意该类没有输出的成员函数
现在编写一个全局函数把时间和日期的对象合并起来一起输出，
函数原型为：void display(const Date &d, const Time &t)
函数输出要求为：
1、时分秒输出长度固定2位，不足2位补0
2、年份输出长度固定为4位，月和日的输出长度固定2位，不足2位补0
例如2017年3月3日19时5分18秒
则输出为：2017-03-03 19:05:18
 
程序要求
1、把函数display作为时间类、日期类的友元
2、分别创建一个日期对象和时间对象，保存日期的输入和时间的输入
3、调用display函数实现日期和时间的合并输出
 
 


输入

第一行输入t表示有t组示例

接着一行输入三个整数，表示年月日

再接着一行输入三个整数，表示时分秒

依次输入t组示例

 

 


输出

每行输出一个日期和时间合并输出结果

输出t行

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
2017 3 3
19 5 18
1988 12 8
5 16 4

输出样例1
2017-03-03 19:05:18
1988-12-08 05:16:04

*/
#include <iostream>
#include <math.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Time;
class Date
{
private:
	int year;
	int month;
	int day;
	friend void display(const Date& d, const Time& t);
public:
	Date(int a,int b,int c):year(a),month(b),day(c){}
};
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int a, int b, int c) :hour(a),minute(b), second(c) {}
	friend void display(const Date& d, const Time& t);

};
void display(const Date& d, const Time& t)
{
	cout << setw(4) << setfill('0') << d.year << "-" << setw(2) << setfill('0') << d.month << "-" <<setw(2) << setfill('0')<<d.day << " "
		<< setw(2) << setfill('0') << t.hour << ":" << setw(2) << setfill('0') << t.minute << ":" << setw(2) << setfill('0') << t.second << endl;

}
int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		int year, month, day, hour, minute, second;
		cin >> year >> month >> day >> hour >> minute >> second;
		Date a(year, month, day);
		Time b(hour, minute, second);
		display(a, b);
	}
	return 0;
}
