// G : 排队援救

// Description
// 突发重大灾难，n个人陷入困境，有一个救援点需要人们排队准备接受救援，假设每个人有一个名望值，进队规则如下：

// 第一个人直接进队；
// 当队里已经有人时，新来的人发现队尾的人的名望值比自己大或者相等，他会选择离开去其他救援点；
// 队伍最多5人，如果一个人要进队时，发现队伍已满，而且他的名望值比队尾的人大，他会选择把队首的人挤掉而继续排在队尾。
// 问最后得到救援的人分别是谁。

// Input
// 单组数据。

// 第一行为n（1 ≤ n ≤ 100），n为正整数。

// 第二行为n个人的名望值，第i个去排队的人的名望值为ai （1 ≤ ai ≤ 232 - 1），且为正整数。

// Output
// 按顺序输出最后得到救援的人的号码，一个人号码是多少即为他是第几个去排队的。

// Sample Input
// 6
// 1 3 5 7 9 11
// Sample Output
// 2 3 4 5 6 
// Hint

#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>

using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> result;
	queue<int> p;
	int count = 0;
	int* people = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> people[i];
	}
	for (int i = 1; i <= n; i++) {
		if (p.empty()) {
			result.push(i);
			p.push(people[i - 1]);
			count++;
		}
		else {
			if (people[i - 1] > p.back()) {
				if (count < 5) {
					result.push(i);
					p.push(people[i - 1]);
					++count;
				}
				else {
					p.pop();
					result.pop();
					result.push(i);
					p.push(people[i - 1]);
				}
			}
		}
	}
	while (!result.empty()){
		while (result.size() == 1)
		{
			cout << result.front() << endl;
			result.pop();
			return 0;
		}
		cout << result.front() << " " ;
		result.pop();
	}
	return 0;
}