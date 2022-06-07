//F: 整数位乘
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 55     Solved : 6
//Description
//以二进制形式给出两个数，求它们的乘积，也以二进制表示。
//
//Input
//每组数据两行，每行一个二进制表示的正整数。01串的长度不大于40000
//
//Output
//输出二进制表示的两数乘积。
//
//Sample Input
//111
//100
//Sample Output
//11100
//Hint
//当规模足够小时可直接使用非优化算法以减少常数复杂度运算。
//
//参考代码框架
//
//// 整数位乘
//struct BigBinary
//{
//    std::vector<int> x;     // 由低位到高位保存二进制位
//    bool neg;               // 标记数的正负
//    void Init() { x.clear(); neg = false; }
//    BigBinary() { Init(); }
//    void Print()
//    {
//        if (neg && !x.empty()) printf("-");
//        for (int i = x.size() - 1; i >= 0; i--)
//            printf("%d", x[i]);
//        if (x.empty()) printf("0");
//        printf("\n");
//    }
//};
//BigBinary Add(BigBinary& a, BigBinary& b)
//{
//    // TODO: 返回 a + b 的结果，小心两数异号情况
//}
//BigBinary Minus(BigBinary& a, BigBinary& b)
//{
//    // TODO: 返回 a - b 的结果，注意正负号
//}
//BigBinary Mul(BigBinary& a, BigBinary& b)
//{
//    // TODO: 模拟竖式计算两数相乘
//}
//void MulN2(BigBinary& a, int n_2)
//{
//    // TODO: 为 a 添加 n_2 个二进制0，即乘以 2^(n_2)
//}
//BigBinary FasterMul(BigBinary& a, BigBinary& b)
//{
//    // TODO: 分治优化位乘
//    // 设 a = A * 2^(n/2) + B， b = C * 2^(n/2) + D
//    // a*b = AC*2^n + [(A - B)(D - C) + AC + BD] * 2^(n/2) + BD
//    // 注意：a 和 b 位数不一定相同，需要额外处理边界。
//}
//
//
//
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//typedef std::vector<int> BigBinary;
//void check(BigBinary& x)
//{
//    while (!x.empty() && x.back() == 0) x.pop_back();
//    int cur = 0;
//    for (int i = 0; i < x.size(); i++)
//    {
//        x[i] += cur;
//        // if(x[i] < 0) x[i + 1] += (x[i] - 1) / 2 - 1, x[i] = x[i] % 2 + 2;
//        cur = x[i] >> 1; x[i] &= 1;
//    }
//    for (; cur; cur >>= 1) x.push_back(cur & 1);
//}
//void Print(BigBinary& x)
//{
//    check(x);
//    for (int i = x.size() - 1; i >= 0; i--) printf("%d", x[i]);
//    if (x.empty()) printf("0");
//    printf("\n");
//}
//BigBinary Add(const BigBinary& a, const BigBinary& b, int negFlag = 1)
//{
//    BigBinary c(a);
//    for (int i = 0; i < b.size(); i++) c[i] += b[i] * negFlag;
//    return c;
//}
//BigBinary Minus(const BigBinary& a, const BigBinary& b)
//{
//    return Add(a, b, -1); // 本算法保证了减法结果不小于0
//}
//BigBinary Mul(const BigBinary& a, const BigBinary& b)
//{
//    BigBinary c;
//    c.resize(a.size() * b.size() + 1);
//    for (int i = 0; i < a.size(); i++)
//        for (int j = 0; j < b.size(); j++)
//            c[i + j] += a[i] * b[j];
//    return c;
//}
//void MulN2(BigBinary& a, int n_2)
//{
//    int isize = a.size();
//    a.resize(isize + n_2);
//    for (int i = a.size() - 1, j = isize - 1; j >= 0; i--, j--)
//        a[i] = a[j];
//    for (int i = n_2 - 1; i >= 0; i--) a[i] = 0;
//}
//BigBinary FasterMul(const BigBinary& a, const BigBinary& b)
//{
//    if (a.size() < 32) return Mul(a, b);
//    int n_2 = a.size() >> 1;
//    BigBinary A(a.begin() + n_2, a.end());
//    BigBinary B(a.begin(), a.begin() + n_2);
//    BigBinary C(b.begin() + n_2, b.end());
//    BigBinary D(b.begin(), b.begin() + n_2);
//    BigBinary A_C = FasterMul(A, C);
//    BigBinary B_D = FasterMul(B, D);
//    // AD+BC = (A+B)*(C+D)-AC-BD，该方式与课本不同，避免了减法出现负数
//    BigBinary ADpBC = Minus(Minus(FasterMul(Add(A, B), Add(C, D)), A_C), B_D);
//    MulN2(A_C, n_2 << 1); MulN2(ADpBC, n_2);
//    return Add(Add(A_C, ADpBC), B_D);
//}
//const int maxn = 1e5 + 10;
//char buf[maxn];
//BigBinary a, b;
//#ifdef CPC
//#include<time.h>
//#endif
//int main()
//{
//    while (scanf("%s", buf) != EOF)
//    {
//        a.clear();
//        b.clear();
//        for (int i = strlen(buf) - 1; i >= 0; i--)
//            a.push_back(buf[i] == '1');
//        scanf("%s", buf);
//        for (int i = strlen(buf) - 1; i >= 0; i--)
//            b.push_back(buf[i] == '1');
//        if (a.size() < b.size()) a.resize(b.size(), 0);
//        else b.resize(a.size(), 0);
//        BigBinary res = FasterMul(a, b);
//        Print(res);
//    }
//    return 0;
//}