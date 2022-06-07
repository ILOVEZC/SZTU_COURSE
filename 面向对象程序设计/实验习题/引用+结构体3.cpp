/*小票输入输出（结构体）
题目描述

   现在人的消费习惯大多是刷卡消费，商家会通过POS机回执一个小票，包含商家名称、终端号、操作员、发卡方、有效期、卡号、交易时间、消费金额等信息，把商家信息定义为一个Struct结构，按照要求输出相应的格式小票。

 


输入

 第一行输入消费次数（刷卡次数）

 第二行依次输入小票包含的各种属性，最大长度不超过30.

第三行与第二行类似，以此类推。。。

 


输出

根据输入信息，依次输出各次刷卡信息$

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
TianHong 00001 01 CCB 21/06 6029071012345678 2016/3/13 1000.00
Cindy 00002 02 CCB 21/07 6029071055558888 2015/3/13 50.00
输出样例1
Name: TianHong
Terminal: 00001 operator: 01
Card Issuers: CCB Validity: 21/06
CardNumber: 6029********5678
Traded: 2016/3/13
Costs: $1000.00

Name: Cindy
Terminal: 00002 operator: 02
Card Issuers: CCB Validity: 21/07
CardNumber: 6029********8888
Traded: 2015/3/13
Costs: $50.00
*/ 
#include<iostream>
using namespace std;

struct note
{
	char Name[31];
	char Terminal[31];
	char Operator[31];
	char CardIssuers[31];
	char Validity[31];
	char CardNumber[31];
	char Traded[31];
	char Costs[31];
};


int main(void)
{
	int i, k, t;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		note tip;
		cin >> tip.Name >> tip.Terminal >>tip.Operator >>tip.CardIssuers >>tip.Validity >>tip.CardNumber >> tip.Traded >> tip.Costs;
		cout << "Name:" << " " << tip.Name << endl
			<< "Terminal:" << " " << tip.Terminal << " " << "operator:" << " " << tip.Operator << endl
			<< "Card Issuers:" << " " << tip.CardIssuers << " " << "Validity:" << " " << tip.Validity << endl
			<< "CardNumber:" << " ";
		for (k = 0; k < 16; k++)
		{
			if (0 <= k && k <= 3 || 12 <= k && k <= 15)
			{
				cout << tip.CardNumber[k];
			}
			else cout << "*";
		}
		cout<<endl<< "Traded:" << " " << tip.Traded << endl
			<< "Costs:" <<" $"<< tip.Costs << endl;
		cout << endl;
	}
}
