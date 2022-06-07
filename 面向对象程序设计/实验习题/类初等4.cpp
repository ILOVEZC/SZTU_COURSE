/*最胖的加菲（类与对象+数组）
题目描述

有一群猫猫，每只猫都有自己的名称和体重。
用类来描述猫，名称和体重都是私有属性，要求加入属性的get方法。其他函数根据需要自己定义
 
创建一个动态的猫对象数组，存储各只猫的名称和体重
根据猫的体重对数组做升序排序，并输出排序后每只猫的名称
 
题目涉及的数值均用整数处理
 


输入

第一行输入n表示有n只猫
第二行输入一只猫的名称和体重，名称的最大长度为30
依次输入n行
 


输出

输出一行，输出排序后的猫的名称

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
4
巧克力胖三斤 1500
自来水瘦八两 400
芝士蛋糕肥六斤 3000
蔬菜沙拉轻四两 200

输出样例1
蔬菜沙拉轻四两 自来水瘦八两 巧克力胖三斤 芝士蛋糕肥六斤

*/
#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
class Cat
{
public:
	void get(char a[], int b)
	{
		strcpy(name, a);
		weight = b;
	}
	int WEIGHT()
	{
		return weight;
	}
	char* NAME()
	{
		return name;
	}
private:
	char name[30];
	int weight;
};

int compare(Cat q, Cat p)
{
	return q.WEIGHT() < p.WEIGHT();
}

int main()
{
	int n, i;
	cin >> n;
	Cat* cat = new Cat[n];
	for (i = 0; i < n; i++)
	{
		char name[30];
		int weight;
		cin >> name >> weight;
		(cat + i)->get(name, weight);
	}
	sort(cat, cat + n, compare);
	for (i = 0; i < n-1; i++)
	{
		cout << (cat + i)->NAME()<<" ";
	}
	cout << (cat + n - 1)->NAME() << endl;
}
