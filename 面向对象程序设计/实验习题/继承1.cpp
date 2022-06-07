<<<<<<< HEAD
/* 圆和圆柱体计算（继承）
题目描述

定义一个CPoint点类，包含数据成员x,y（坐标点）。

以CPoint为基类，派生出一个圆形类CCircle，增加数据成员r(半径）和一个计算圆面积的成员函数。

再以CCircle做为直接基类，派生出一个圆柱体类CCylinder，增加数据成员h(高)和一个计算体积的成员函数。

生成圆和圆柱体对象，调用成员函数计算面积或体积并输出结果。
=======
/*在职研究生（多重继承）
题目描述

1、建立如下的类继承结构：

1)  定义一个人员类CPeople，其属性（保护类型）有：姓名、性别、年龄；

2)  从CPeople类派生出学生类CStudent，添加属性：学号和入学成绩；

3)  从CPeople类再派生出教师类CTeacher，添加属性：职务、部门；

4)   从CStudent和CTeacher类共同派生出在职研究生类CGradOnWork，添加属性：研究方向、导师；

2、分别定义以上类的构造函数、输出函数print及其他函数（如需要）。

3、在主函数中定义各种类的对象，并测试之。
>>>>>>> 5e2661b (week16)


输入

<<<<<<< HEAD
输入圆的圆心位置、半径

输入圆柱体圆心位置、半径、高
=======
第一行：姓名性别年龄，姓名的最大字符长度为20

第二行：学号成绩

第三行：职务部门，职务和部门的最大字符长度均为20

第四行：研究方向导师，研究方向和导师的最大长度均为20
>>>>>>> 5e2661b (week16)


输出

<<<<<<< HEAD
输出圆的圆心位置 半径

输出圆面积

输出圆柱体的圆心位置 半径 高

输出圆柱体体积

输入样例
0 0 1
1 1 2 3

输出样例
Circle:(0,0),1
Area:3.14
Cylinder:(1,1),2,3
Volume:37.68

*/
#include <iostream>
using namespace std;

class CPoint
{
public:
    void getpoint(int a,int b)
    {
        x = a;
        y = b;
    }
protected:
    int x;
    int y;
};
class CCircle : public CPoint
{
protected:
    int r;
public:
    CCircle() { };
    CCircle(int a, int b, int c)
    {
        getpoint(a, b);
        r = c;
        cout << "Circle:(" << a << "," << b << ")," << r << endl;
    }
    void getcircle(int a,int b,int c)
    {
        x = a;
        y = b;
        r = c;
    }
    double Area()
    {
        return 3.14 * r * r;
    }
    void getArea()
    {
        cout << "Area:" << 3.14 * r * r << endl;
    }
};
class CCylinder :public CCircle
{
public:
    CCylinder(int a,int b,int c,int h)
    {
        getcircle(a, b, c);
        high = h;
        cout << "Cylinder:(" << a << "," << b << ")," << c <<","<< h << endl;
    }
    void getVolume()
    {
        cout << "Volume:" << Area() * high << endl;
    }
protected:
    int high;
};

int main()
{
    int a,b, c;
    cin >> a >> b >> c;    
    CCircle A(a, b, c);
    A.getArea();
    int d;
    cin >> a >> b >> c >> d;
    CCylinder B(a, b, c, d);
    B.getVolume();
    return 0;
=======
第一行：People:

第二行及以后各行：格式见Sample


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
wang-li m 23
2012100365 92.5
assistant computer
robot zhao-jun
输出样例1
People:
Name: wang-li
Sex: m
Age: 23

Student:
Name: wang-li
Sex: m
Age: 23
No.: 2012100365
Score: 92.5

Teacher:
Name: wang-li
Sex: m
Age: 23
Position: assistant
Department: computer

GradOnWork:
Name: wang-li
Sex: m
Age: 23
No.: 2012100365
Score: 92.5
Position: assistant
Department: computer
Direction: robot
Tutor: zhao-jun*/
#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
class CPeople
{
public:
    CPeople(string name1, char sex1, int age1) :name(name1), sex(sex1), age(age1) {}
    void print()
    {
        cout << "Name: " << name << "\n"
            << "Sex: " << sex << "\n"
            << "Age: " << age << "\n";
    }
protected:
    string name;
    char sex;
    int age;
};
class CStudent :public CPeople
{
public:
    CStudent(string name1, char sex1, int age1, string no1, double grade1) :CPeople(name1, sex1, age1), no(no1), grade(grade1) {}
    void print()
    {
        cout << "Student:\n";
        cout << "Name: " << name << "\n"
            << "Sex: " << sex << "\n"
            << "Age: " << age << "\n";
        cout << "No.: " << no << "\n"
            << "Score: " << grade << "\n";
    }
protected:
    string no;
    double grade;
};
class CTeacher :public CPeople
{
public:
    CTeacher(string name1, char sex1, int age1, string zhiwu1, string bumen1) :CPeople(name1, sex1, age1), zhiwu(zhiwu1), bumen(bumen1) {}
    void print()
    {
        cout << "Teacher:\n";
        cout << "Name: " << name << "\n"
            << "Sex: " << sex << "\n"
            << "Age: " << age << "\n";
        cout << "Position: " << zhiwu << "\n"
            << "Department: " << bumen << "\n";
    }
protected:
    string zhiwu;
    string bumen;
};
class CGradOnWork :public CStudent,public CTeacher
{
public:
    CGradOnWork(string name1, char sex1, int age1, string no1, double grade1, string zhiwu1, string bumen1, string research1, string daoshi1) :CStudent(name1, sex1, age1, no1, grade1), CTeacher(name1, sex1, age1, zhiwu1, bumen1), research(research1), daoshi(daoshi1) {}
    void print()
    {
        cout << "GradOnWork:\n";
        cout << "Name: " << CStudent::name << "\n"
            << "Sex: " << CStudent::sex << "\n"
            << "Age: " << CStudent::age << "\n";
        cout << "No.: " << no << "\n"
            << "Score: " << grade << "\n";
        cout << "Position: " << zhiwu << "\n"
            << "Department: " << bumen << "\n";
        cout << "Direction: " << research << "\n"
            << "Tutor: " << daoshi << "\n";

    }
protected:
    string research;
    string daoshi;
};
int main()
{
    string a, d, f, g, h, i;
    char b;
    int c;
    double e;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    CPeople peo(a, b, c);
    CStudent cst(a, b, c, d, e);
    CTeacher cta(a, b, c, f, g);
    CGradOnWork gra(a, b, c, d, e, f, g, h, i);
    cout << "People:\n";
    peo.print();
    cout << endl;
    cst.print();
    cout << endl;
    cta.print();
    cout << endl;
    gra.print();


>>>>>>> 5e2661b (week16)
}
