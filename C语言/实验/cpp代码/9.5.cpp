/*本题要求将给定的n个整数从大到小排序后输出。

输入格式：
输入第一行给出一个不超过10的正整数n。第二行给出n个整数，其间以空格分隔。

输出格式：
在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。

输入样例：
4
5 1 7 6
输出样例：
7 6 5 1*/ 
#include <stdio.h>
#include <math.h> 
int main()
{
 int i,j,n,temp;
 scanf("%d",&n);
 int a[11]; 
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
   if(a[j]<a[j+1]){
    temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
   }
  }
 }
 for(i=0;i<n;i++){
  printf("%d",a[i]);
  if(i != n-1)
  printf(" ");
 }
 return 0;
}
