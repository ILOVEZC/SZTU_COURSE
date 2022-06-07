// F : 模拟计算器

// Description
// 给出n个数，和n - 1个运算符（只含有加减乘号，不含除号，按顺序填入n个数之间），要求输出该式的答案。

// Input
// 单组数据。

// 第一行为n（2 ≤ n ≤ 100），且n为整数。

// 第二行为n个数，每个数a保证1 ≤ a ≤ 10，且为整数。

// 第三行为n - 1个运算符，运算符之间由空格隔开。

// 数据保证每一步运算结果不会超过 1018

// Output
// 如题。

// Sample Input
// 4
// 1 2 3 4
// + * -
// Sample Output
// 3
// Hint
// 1 + 2 * 3 - 4 = 3


#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>

using namespace std;

int main() {
	int n;
	long long int sum = 0;
	queue<int> number;
	queue<long long int> numberFinal;
	queue<long long int> numTemp;
	queue<char> rules;
	cin >> n;
	int* num = new int[n];
	char* rule = new char[n - 1];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n-1; i++) {
		cin >> rule[i];
	}
	for (int i = 0; i < n; i++) {
		number.push(num[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		rules.push(rule[i]);
	}
	long long int temp;
	int minus = 1;
	char before = ' ';
	while (!rules.empty() && !number.empty()) {
		if (rules.front() == '+') {
			if (before == '*') {
				numberFinal.push(numTemp.front());
				numTemp.pop();
				number.pop();
				before = ' ';
				minus = 1;
			}
			else {
				numberFinal.push(minus * number.front());
				number.pop();
				minus = 1;
			}
			rules.pop();
		}
		else if (rules.front() == '-') {
			if (before == '*') {
				numberFinal.push(numTemp.front());
				number.pop();
				numTemp.pop();
				before = ' ';
				minus = -1;
			}
			else {
				numberFinal.push(minus*number.front());
				number.pop();
				minus = -1;
			}
			rules.pop();
		}
		else {
			before = '*';
			if (numTemp.empty()) {
				numTemp.push(minus*number.front());
			}
			number.pop();
			temp = numTemp.front() * number.front();
			numTemp.pop();
			numTemp.push(temp);
			rules.pop();
			minus = 1;
		}
	}
	while (!numTemp.empty())
	{
		numberFinal.push(numTemp.front());
		numTemp.pop();
	}
	while (!number.empty() && before != '*') {
		numberFinal.push(minus*number.front());
		number.pop();
	}
	
	while (!numberFinal.empty()) {
		sum += numberFinal.front();
		numberFinal.pop();
	}
	cout << sum << endl;
	return 0;
}