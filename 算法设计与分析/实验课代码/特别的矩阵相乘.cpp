//G: 特别的矩阵相乘
//Time Limit : 2 Sec     Memory Limit : 128 Mb     Submitted : 50     Solved : 7
//Description
//给出两个大小相同的 n × n 矩阵 A, B，以及一个权值 m，A(i, j) 表示第 i 行第 j 列的数字，行列编号从 0 开始。
//
//两个矩阵分别定义为：
//
//A(i, j) = (2i×mj)mod1009
//B(i, j) = (3i×mj)mod1009
//将两个矩阵相乘。
//
//Input
//每组数据给出 n m，其中 n  = 2k，k为整数且 1 ≤ k ≤ 11， 5 ≤ m ≤ 1000。
//
//Output
//每组数据输出结果矩阵每个元素对 1009 取模后的值开平方根向下取整的和。即
//
//
//
//Sample Input
//2 3
//Sample Output
//19
//Hint
//样例中矩阵大小为 2 × 2，矩阵每个位置的序号为：
//
//(0, 0)  (0, 1)
//(1, 0)  (1, 1)
//根据公式求得两个矩阵分别为：
//
//
//
//
//数据读入参考：
//
//
//typedef int NUM_TYPE;
//const int mod = 1009;
//const int specialA = 2;
//const int specialB = 3;
//struct Mat
//{
//    std::vector<std::vector<NUM_TYPE> > x;
//    unsigned size()const { return x.size(); }
//    void Init() { for (auto& mt : x) mt.clear(); x.clear(); }
//    void Init(int sz) { Init(); x.resize(sz, std::vector<NUM_TYPE>(sz, 0)); }
//    Mat() { Init(); }
//    Mat(int sz) { Init(sz); }
//};
//void InitMat(Mat& mt, int n, int m, int special)
//{
//    mt.Init(n);
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            mt.x[i][j] = 1LL * PowMod(special, i) * PowMod(m, j) % mod;
//}
//
//int main()
//{
//    Mat a, b, c;
//    while (scanf("%d%d", &n, &m) != EOF)
//    {
//        InitMat(a, n, m, specialA);
//        InitMat(b, n, m, specialB);
//        // TODO: 完成矩阵相乘和输出答案
//    }
//    return 0;
//}
//
//
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<cmath>
//#include<vector>
//const int mod = 1009;
//const int specialA = 2;
//const int specialB = 3;
//typedef int NUM_TYPE;
//int n, m;
//int PowMod(int a, int n)
//{
//    int ret = 1;
//    for (; n; n >>= 1, a = 1LL * a * a % mod)
//        if (n & 1) ret = 1LL * ret * a % mod;
//    return ret;
//}
//struct Mat
//{
//    std::vector<std::vector<NUM_TYPE> > x;
//    unsigned size()const { return x.size(); }
//    void Init() { for (auto& mt : x) mt.clear(); x.clear(); }
//    void Init(int sz) { Init(); x.resize(sz, std::vector<NUM_TYPE>(sz, 0)); }
//    Mat() { Init(); }
//    Mat(int sz) { Init(sz); }
//};
//void InitMat(Mat& mt, int n, int m, int special)
//{
//    mt.Init(n);
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            mt.x[i][j] = 1LL * PowMod(special, i) * PowMod(m, j) % mod;
//}
//Mat JointMat(Mat c[][2])
//{
//    int bsz = c[0][0].size();
//    Mat outc(bsz << 1);
//    for (int i = 0; i < 2; i++)
//        for (int j = 0; j < 2; j++)
//            for (int ci = 0; ci < bsz; ci++)
//                for (int cj = 0; cj < bsz; cj++)
//                    outc.x[i * bsz + ci][j * bsz + cj] = c[i][j].x[ci][cj];
//    return outc;
//}
//Mat MatLeftTop(const Mat& mt)
//{
//    int halfSz = mt.size() >> 1;
//    Mat outc(halfSz);
//    for (int i = 0; i < halfSz; i++)
//        for (int j = 0; j < halfSz; j++)
//            outc.x[i][j] = mt.x[i][j];
//    return outc;
//}
//Mat MulNum(const Mat& mt, int num)
//{
//    Mat outc(mt.size());
//    for (int i = 0; i < outc.size(); i++)
//        for (int j = 0; j < outc.size(); j++)
//            outc.x[i][j] = 1LL * mt.x[i][j] * num % mod;
//    return outc;
//}
//Mat Add(const Mat& a, const Mat& b)
//{
//    Mat outc(a.size());
//    for (int i = 0; i < a.size(); i++)
//        for (int j = 0; j < b.size(); j++)
//            outc.x[i][j] = (a.x[i][j] + b.x[i][j]) % mod;
//    return outc;
//}
//Mat FastMul(const Mat& a, const Mat& b)
//{
//    if (a.size() == 1)
//    {
//        Mat ret(1);
//        ret.x[0][0] = a.x[0][0] * b.x[0][0] % mod;
//        return ret;
//    }
//    Mat Alt, Blt, C[2][2], base;
//    Alt = MatLeftTop(a);
//    Blt = MatLeftTop(b);
//    base = FastMul(Alt, Blt);
//    int halfSize = Alt.size();
//    int sar = PowMod(specialA, halfSize), sac = PowMod(m, halfSize);
//    int sbr = PowMod(specialB, halfSize), sbc = PowMod(m, halfSize);
//    C[0][0] = Add(base, MulNum(base, sac * sbr));
//    C[0][1] = Add(MulNum(base, sbc), MulNum(base, sac * sbc * sbr % mod));
//    C[1][0] = Add(MulNum(base, sar), MulNum(base, sar * sac * sbr % mod));
//    C[1][1] = Add(MulNum(base, sar * sbc), MulNum(base, sac * sar % mod * sbc % mod * sbr % mod));
//    return JointMat(C);
//}
//int main()
//{
//    Mat a, b, c;
//    while (scanf("%d%d", &n, &m) != EOF)
//    {
//        InitMat(a, n, m, specialA);
//        InitMat(b, n, m, specialB);
//        c = FastMul(a, b);
//        long long sum = 0;
//        for (int i = 0; i < c.size(); i++)
//        {
//            for (int j = 0; j < c.size(); j++)
//                sum += sqrt(c.x[j][i] % mod);
//        }
//        printf("%lld\n", sum);
//    }
//    return 0;
//}