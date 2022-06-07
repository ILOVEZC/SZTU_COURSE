/* 旅馆顾客统计（静态成员）
题目描述

编写程序，统计某旅馆住宿客人的总数和收入总额。要求输入客人的姓名，输出客人编号（2015+顺序号，顺序号4位，如第1位为0001，第2位为0002，依此类推）、姓名、总人数以及收入总额。总人数和收入总额用静态成员，其他属性采用普通的数据成员。旅馆类声明如下：

class Hotel
{
private:
    static int totalCustNum; // 顾客总人数
    static float totalEarning; // 旅店总收入
    static float rent; // 每个顾客的房租
    char *customerName; // 顾客姓名
    int customerId; // 顾客编号
public:
    // totalCustNum++，customerId按照totalCustNum生成
    Hotel(char* customer);
    ~Hotel(); //记得delete customerName
    void Display(); //相应输出顾客姓名、顾客编号、总人数、总收入
};

输入

第1行：输入旅馆单个顾客房租

第2行开始，依次输入顾客姓名，0表示输入结束, 姓名的最大字符长度为20

 

 


输出

每行依次输出顾客信息和当前旅馆信息。包括顾客姓名，顾客编号，旅馆当前总人数，旅馆当前总收入。

 

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
150  
张三 李四 王五 0
输出样例1
张三 20150001 1 150
李四 20150002 2 300
王五 20150003 3 450
*/
#include <iostream>
#include <math.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Hotel
{
private:
	static int totalCustNum; // 顾客总人数
	static float totalEarning; // 旅店总收入
	static float rent; // 每个顾客的房租
	char* customerName; // 顾客姓名
	int customerId; // 顾客编号
public:
	// totalCustNum++，customerId按照totalCustNum生成
	Hotel(char* customer)
	{
		customerName = new char[20];
		strcpy(customerName, customer);
		totalCustNum++;
		customerId=totalCustNum;
		totalEarning = totalEarning + rent;
	}
	~Hotel()//记得delete customerName
	{
		delete[]customerName;
	}
	void Display()//相应输出顾客姓名、顾客编号、总人数、总收入
	{
		cout << customerName << " " <<2015<< setw(4) << setfill('0') << customerId << " " << totalCustNum << " " << totalEarning << endl;
	}
	static void putrent(float a)
	{
		rent = a;
	}
};
int Hotel::totalCustNum = 0;
float Hotel::totalEarning = 0;
float Hotel::rent = 0;
int main(void)
{
	float money;
	cin >> money;
	Hotel::putrent(money);
	char name[20];
	cin >> name;
	while (strcmp(name, "0") != 0)
	{
		Hotel a(name);
		a.Display();
		cin >> name;
	}
    return 0;
}
