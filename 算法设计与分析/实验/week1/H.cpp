// H : 括号匹配

// Description
// 给一个长度不大于100的字符串，问该字符串里出现的括号是否合法。

// 字符串只会出现三种括号，“[]”，“()”，“{}”，且形如“({[]})”为合法，形如“[(])”为不合法。

// Input
// 单组数据。

// 长度不大于100的字符串，字符串中不存在空格。

// Output
// 如果该字符串中出现的所有括号都合法，输出“Yes”，否则输出“No”。

// Sample Input
// (a+b)!=c
// Sample Output
// Yes
// Hint

#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>

using namespace std;

int main() {
	string s;
	cin >> s;
	stack<char> temp;
	for (int i = 0; i < s.length(); i++) {
		if (s[i]=='(') {
			temp.push(s[i]);
		}
		if (s[i] == ')') {
			if (!temp.empty() && temp.top() == '(') {
				temp.pop();
				continue;
			}
			else {
				cout << "No" << endl;
				return 0;
			}
		}
		if (s[i] == '[') {
			temp.push(s[i]);
		}
		if (s[i] == ']') {
			if (!temp.empty()&&temp.top() == '[') {
				temp.pop();
				continue;
			}
			else {
				cout << "No" << endl;
				return 0;
			}
		}
		if (s[i] == '{') {
			temp.push(s[i]);
		}
		if (s[i] == '}') {
			if (!temp.empty() && temp.top() == '{') {
				temp.pop();
				continue;
			}
			else {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	if (!temp.empty()) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
	return 0;
}