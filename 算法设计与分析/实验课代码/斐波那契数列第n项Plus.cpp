//E: 斐波那契数列第n项Plus
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 93     Solved : 28
//Description
//斐波那契数列即 1, 1, 2, 3, 5...，F(n) = F(n−1) + F(n−2) 。求斐波那契数列第 n 项
//
//Input
//每组数据给出 1 ≤ n ≤ 109 。
//
//Output
//斐波那契数列第 n 项 对 109 + 7 取模
//
//Sample Input
//1
//2
//20
//100000000
//Sample Output
//1
//1
//6765
//908460138
//Hint
//矩阵快速幂。
//
//参考代码框架
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//using namespace std;
//const int mod = 1e9 + 7;
//struct Node
//{
//    int mat[2][2];
//    Node() {}
//    Node(int a_, int b_, int c_, int d_)
//    {
//        mat[0][0] = a_;
//        mat[0][1] = b_;
//        mat[1][0] = c_;
//        mat[1][1] = d_;
//    }
//    Node operator*(const Node& y)
//    {
//        // TODO: 矩阵乘法，注意取模
//    }
//};
//Node Pow(Node a, int n)
//{
//    // TODO: 矩阵的快速幂
//}
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        // TODO: 初始化用于推导斐波那契数列的矩阵
//        Node ans = Pow(x, n);
//        // TODO: 输出矩阵中对应的斐波那契第n项
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//using namespace std;
//const int mod = 1e9 + 7;
//typedef long long ll;
//
//struct Node
//{
//    ll mat[2][2];
//    Node() {}
//    Node(int a_, int b_, int c_, int d_)
//    {
//        mat[0][0] = a_;
//        mat[0][1] = b_;
//        mat[1][0] = c_;
//        mat[1][1] = d_;
//    }
//    Node operator*(const Node& y)
//    {
//        // TODO: 矩阵乘法，注意取模
//        int a = ((((this->mat[0][0] % mod) * (y.mat[0][0] % mod)) % mod) + (((this->mat[0][1] % mod) * (y.mat[1][0] % mod)) % mod)) % mod;
//        int b = ((((this->mat[0][0] % mod) * (y.mat[0][1] % mod)) % mod) + (((this->mat[0][1] % mod) * (y.mat[1][1] % mod)) % mod)) % mod;
//        int c = ((((this->mat[1][0] % mod) * (y.mat[0][0] % mod)) % mod) + (((this->mat[1][1] % mod) * (y.mat[1][0] % mod)) % mod)) % mod;
//        int d = ((((this->mat[1][0] % mod) * (y.mat[0][1] % mod)) % mod) + (((this->mat[1][1] % mod) * (y.mat[1][1] % mod)) % mod)) % mod;
//        return Node(a, b, c, d);
//    }
//};
//Node longlongPower(Node a, ll n) {
//    Node res = Node(1, 0, 0, 1);
//    while (n > 0) {
//        if (n & 1)	res = res * a;
//        a = a * a;
//        n >>= 1;
//    }
//    return res;
//}
//Node Pow(Node a, int n)
//{
//    // TODO: 矩阵的快速幂
//    if (n == 0 || n == 1) {
//        return a;
//    }
//    return longlongPower(a, n);
//}
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        // TODO: 初始化用于推导斐波那契数列的矩阵
//        Node x = Node(1, 1, 1, 0);
//        Node ans = Pow(x, n - 1);
//        // TODO: 输出矩阵中对应的斐波那契第n项
//        printf("%lld\n", ans.mat[0][0]);
//    }
//    return 0;
//}