/*
身体评估（类与对象）
题目描述

评估成年人身体健康有多个指标，包括BMI、体脂率等
设计一个身体健康类，包含私有成员：姓名、身高(米)、体重(公斤)，腰围(厘米)，实现两个公有方法如下：
BMI方法，返回BMI数值(整数，四舍五入到个位)，计算公式BMI= 体重 / 身高的平方
体脂率方法，返回体脂率数值(浮点数)，计算过程如下：
1）参数a=腰围（cm）×0.74
2）参数b=体重（kg）×0.082+34.89
3）体脂肪重量（kg）=a－b
4）体脂率 = 体脂肪重量÷体重
其它方法根据需要自行定义
 
 


输入

第一行输入t表示有t个测试实例
第二行起，每行输入四个参数：姓名、身高、体重、腰围，姓名的最大长度不超过20
依次输入t行
 
 


输出

输出t行，每行输入一个实例的BMI和体脂率，BMI四舍五入到个位，体脂率小数数值精确到小数点后2位
 




样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
张高 1.85 78.5 85.2
李圆 1.55 67.6 77.3

输出样例1
张高的BMI指数为23--体脂率为0.28
李圆的BMI指数为28--体脂率为0.25
*/
 #include<iostream>
#include<string.h>
#include <math.h>
#include <iomanip>
using namespace std;
class People
{
public:
	float healthy()
	{
		return weight / pow(height, 2);
	}
	float physic()
	{
		float a = waistline * 0.74;
		float b = weight * 0.082 + 34.89;
		float c = a - b;
		return c / weight;
	}
	void input(char a[], float b, float c, float d)
	{
		strcpy(name, a);
		height = b;
		weight = c;
		waistline = d;
	}
	char* NAME()
	{
		return name;
	}
private:
	char name[20];
	float height;
	float weight;
	float waistline;
};

int main()
{
	int t, i;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		People people;
		char a[20];
		float b;
		float c;
		float d;
		cin >> a >> b >> c >> d;
		people.input(a, b, c, d);
		cout<<people.NAME() << "的BMI指数为" <<  fixed << setprecision(0)<<people.healthy() << "--" << "体脂率为" << fixed << setprecision(2)<< people.physic() << endl;
	}
}
