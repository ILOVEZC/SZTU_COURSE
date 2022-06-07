/* 对象数组（类和对象）
题目描述

课堂上我们谈到类这个概念，比如第一题我们有学生类这个抽象的概念，成千上万个学生都具有同样的属性，但针对某个具体学生来说，他/她具有自己的鲜明个性，比如计算机专业的王海同学，信息工程学院的李慧同学，那么我们是定义一个该类的变量：Student  student; 假设该类包含姓名、学号、性别、所属学院、联系电话等；在程序运行过程，把变量student赋予不同值就可以让它表示是王海还是李慧，尝试定义一个学生数组（比如四个元素大小，请思考此时四个对象是如何初始化的呢？），然后输入四个不同学生各项属性给数组里学生初始化（最好定义一个输入函数），然后输出该学生对象数组的各对象的姓名。


输入

输入数组元素的大小

依次每行输入每个对象的各项属性值，各属性值最大长度不超过20


输出

每行输出一个学生类对象的姓名


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
3
tom 2013333333 男 计算机学院 13766666666
Marry 2012222222 女 信息工程学院 13555555555
John  2014444444 男 管理学院 13888888888
输出样例1
tom
Marry
John
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
public:
	void input(char a[], char b[], char c[], char d[],char e[])
	{
		strcpy(name, a);
		strcpy(number, b);
		strcpy(sex, c);
		strcpy(college, d);
		strcpy(phone, e);
	}
	void print()
	{
		cout << name << endl;
	}
private:
	char name[21];
	char number[21];
	char sex[21];
	char college[21];
	char phone[21];
};

int main()
{
	int t, i;
	cin >> t;
	Student *student = new Student[t];
	for (i = 0; i < t; i++)
	{
		char a[21];
		char b[21];
		char c[21];
		char d[21];
		char e[21];
		cin >> a >> b >> c >> d >> e;
		(student + i)->input(a, b, c, d, e);
	}
	for (i = 0; i < t; i++)
	{
		(student + i)->print();
	}
}
