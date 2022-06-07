//H: 括号匹配II
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 50     Solved : 14
//Description
//给定一个只包含{}，（），[]的字符串，假设你能够在这个括号字符串中的任意位置添加任何括号，你要做得就是在合适的位置添加括号，使得所有括号都正确嵌套，若所给字符串中的括号完美匹配，无需修改，请输出“SZTU_WOD YYDS!”；否则求能使得这串字符每对括号都正确嵌套的最少添加数。
//
//Input
//输入包含多组测试数据，每组测试样例占一行，每行不超过100个字符。
//
//Output
//若所给字符串中的括号完美匹配，无需修改，请输出“SZTU_WOD YYDS!”；否则求能使得这串字符每对括号都正确嵌套的最少添加数。
//
//Sample Input
//()
//())
//Sample Output
//SZTU_WOD YYDS!
//1
//Hint



//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort、max函数调用的库
//#include<stack>
//using namespace std;
//
//char s[110];
//int dp[110][110];
//bool check(int i, int j)
//{
//	if ((s[i] == '(' && s[j] == ')') || (s[i] == '[' && s[j] == ']') || (s[i] == '{' && s[j] == '}'))
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	while (scanf("%s", s + 1) != EOF)
//	{
//		int i, j, k;
//		int len = strlen(s + 1);
//		memset(dp, 0, sizeof(dp));
//		for (i = 1; i <= len; i++)
//			dp[i][i] = 1;
//		for (i = len - 1; i >= 1; i--)
//		{
//			for (j = i; j <= len; j++)
//			{
//				dp[i][j] = dp[i + 1][j] + 1;
//				for (k = i + 1; k <= j; k++)
//				{
//					if (check(i, k))
//						dp[i][j] = min(dp[i][j], dp[i + 1][k - 1] + dp[k + 1][j]);
//				}
//			}
//		}
//		if (dp[1][len] == 0) {
//			printf("SZTU_WOD YYDS!\n");
//		}
//		else {
//			printf("%d\n", dp[1][len]);
//		}
//	}
//	return 0;
//
//}
