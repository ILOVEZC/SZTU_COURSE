/*电话号码升位(拷贝构造函数)
题目描述

定义一个电话号码类CTelNumber,包含1个字符指针数据成员,以及构造、析构、打印及拷贝构造函数。

字符指针是用于动态创建一个字符数组，然后保存外来输入的电话号码

构造函数的功能是为对象设置键盘输入的7位电话号码，

拷贝构造函数的功能是用原来7位号码的对象升位为8位号码对象,也就是说拷贝构造的对象是源对象的升级.电话升位的规则是原2、3、4开头的电话号码前面加8，原5、6、7、8开头的前面加2。

注意:电话号码只能全部是数字字符，且与上述情况不符的输入均为非法)


输入

测试数据的组数 t

第一个7位号码

第二个7位号码

......


输出

第一个号码升位后的号码

第二个号码升位后的号码

......

如果号码升级不成功，则输出报错信息，具体看示例


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
3
6545889
3335656
565655
输出样例1
26545889
83335656
Illegal phone number
*/
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class CTelNumber
{
private:
	char* phone;
public:
	CTelNumber(char* a)
	{
		phone = new char[10];
		strcpy(phone, a);
		phone[9] = '\0';
	}
	CTelNumber(CTelNumber& a)
	{
		phone = new char[10];

		if ('2' <= a.phone[0] && a.phone[0] <= '4')
		{
			char b[10];
			strcpy(b, "8");
			strcpy(phone, strcat(b, a.phone));
		}
		else if ('5' <= a.phone[0] && a.phone[0] < '8')
		{
			char b[10];
			strcpy(b, "2");
			strcpy(phone, strcat(b, a.phone));
		}
	}
	~CTelNumber()
	{
		delete[]phone;
	}
	void print()
	{
		cout << phone << endl;
	}
};
bool judge(char* p)
{
	if (p[0] <= '1' || p[0] >= '9')
		return false;
	int i;
	for (i = 0; i < 8 && p[i] != '\0' && p[i] >= '0' && p[i] <= '9'; i++);
	return i >= 7;
}

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		char p[10];
		cin >> p;
		if (judge(p))
		{
			CTelNumber a(p);
			CTelNumber b(a);
			b.print();
		}
		else
			cout << "Illegal phone number" << endl;

	}
	return 0;
}
