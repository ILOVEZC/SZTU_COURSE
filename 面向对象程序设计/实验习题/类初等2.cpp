/* 存折类定义（类与对象）
题目描述

定义一个存折类CAccount，存折类具有帐号（account, long）、姓名（name,char[10])、余额（balance,float）等数据成员，可以实现存款（deposit,操作成功提示“saving ok!”)、取款（withdraw，操作成功提示“withdraw ok!”）和查询余额（check）的操作，取款金额必须在余额范围内，否则提示“sorry! over limit!”。编写主函数，建立这个类的对象并测试，输入账号、姓名、余额后，按照查询余额、存款、查询余额、取款、查询余额的顺序调用类方法并输出。


输入

第一个存折的账号、姓名、余额

存款金额

取款金额

第二个存折的账号、姓名、余额

存款金额

取款金额


输出

第一个存折的账户余额

存款操作结果

账户余额

取款操作结果

账户余额

第二个存折的账户余额

存款操作结果

账户余额

取款操作结果

账户余额


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
9111 Tom 1000
500
1000
92220 John 500
500
1500
输出样例1
Tom's balance is 1000
saving ok!
Tom's balance is 1500
withdraw ok!
Tom's balance is 500
John's balance is 500
saving ok!
John's balance is 1000
sorry! over limit!
John's balance is 1000

*/
#include<iostream>
#include<string.h>
using namespace std;
class CAccount
{
public:
	void deposit(float money)
	{
		balance +=money;
		cout << "saving ok!"<<endl;
	}
	void withdraw(float money)
	{
		if (balance >= money)
		{
			balance -=money;
			cout << "withdraw ok!"<<endl;
		}
		else
		{
			cout << "sorry! over limit!" << endl;
		}
	}
	void check()
	{
		cout << name << "'s balance is " << balance << endl;
	}
	void input(long a, char b[], float c)
	{
		account = a;
		strcpy(name, b);
		balance = c;
	}
private:
	long account;
	char name[10];
	float balance;
};

int main()
{

	int i;
	for (i = 0; i < 2; i++)
	{
		long a;
		char b[10];
		float c;
		float up, down;
		CAccount people;
		cin >> a >> b >> c;
		people.input(a, b, c);
		people.check();
		cin >> up;
		people.deposit(up);
		people.check();
		cin >> down;
		people.withdraw(down);
		people.check();
	}
	return 0;
}
