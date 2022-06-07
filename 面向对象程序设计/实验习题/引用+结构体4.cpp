/*谁是老二（结构体）
题目描述

定义一个结构体，包含年月日，表示一个学生的出生日期。然后在一群学生的出生日期中找出谁的出生日期排行第二

要求：出生日期的存储必须使用结构体，不能使用其他类型的数据结构。

要求程序全过程对出生日期的输入、访问、输出都必须使用结构。

 


输入

第一行输入t表示有t个出生日期

每行输入三个整数，分别表示年、月、日

依次输入t个实例

 


输出

输出排行第二老的出生日期，按照年-月-日的格式输出

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
6
1980 5 6
1981 8 3
1980 3 19
1980 5 3
1983 9 12
1981 11 23

输出样例1
1980-5-3

输入样例2 <-复制
5
1980 5 6
1981 8 3
1980 5 3
1983 9 12
1981 11 23
输出样例2
1980-5-6
输入样例3 <-复制
4
2000 11 28
2021 10 30
2022 8 29
2022 5 1
输出样例3
2021-10-30
*/
#include<iostream>
using namespace std;

struct student
{
 int year;
 int month;
 int day;
};


int main(void)
{
 int i, t, k;
 cin >> t;
 student* sztu = new student[t];
 for (i = 0; i < t; i++)
 {
  cin >> (sztu+i)->year >> (sztu + i)->month >> (sztu + i)->day;
 }
 int newindex = 0;
 int next; 
 int temp = (sztu->year) * 12 * 30 + (sztu->month) * 30 + (sztu->day);
 for (i = 0; i < t; i++)
 {
  next = ((sztu+i)->year) * 12 * 30 + ((sztu + i)->month) * 30 + ((sztu + i)->day);
  if (next < temp)
  {
   newindex = i;
   temp = ((sztu + i)->year) * 12 * 30 + ((sztu + i)->month) * 30 + ((sztu + i)->day);
  }
 }
 int j;
 int oldindex;
 for (j = 0; j < t; j++)
 {
  if (j != newindex)
  {
   temp = ((sztu + j)->year) * 12 * 30 + ((sztu + j)->month) * 30 + ((sztu + j)->day);
   oldindex = j;
   break;
  }
 }
 for (k = 0; k < t; k++)
 {
  if (k != newindex)
  {
   int next = ((sztu + k)->year) * 12 * 30+ ((sztu + k)->month) * 30+ ((sztu + k)->day);
   if (next < temp)
   {
    oldindex = k;
    temp = ((sztu + k)->year) * 12 * 30 + ((sztu + k)->month) * 30+ ((sztu + k)->day);
   }
  }
 }
 cout << sztu[oldindex].year << "-" << sztu[oldindex].month << "-" << sztu[oldindex].day << endl;
 return 0;
}
